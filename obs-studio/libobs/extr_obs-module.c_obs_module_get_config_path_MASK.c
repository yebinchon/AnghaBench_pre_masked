
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dstr {char* array; int member_0; } ;
struct TYPE_4__ {char const* mod_name; } ;
typedef TYPE_1__ obs_module_t ;
struct TYPE_5__ {int module_config_path; } ;


 int FUNC_0 (struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*,char) ;
 int FUNC_2 (struct dstr*,int ) ;
 char FUNC_3 (struct dstr*) ;
 int FUNC_4 (struct dstr*) ;
 TYPE_3__* VAR_0 ;

char *FUNC_5(obs_module_t *VAR_1, const char *VAR_2)
{
 struct dstr VAR_3 = {0};

 FUNC_2(&VAR_3, VAR_0->module_config_path);
 if (!FUNC_4(&VAR_3) && FUNC_3(&VAR_3) != '/')
  FUNC_1(&VAR_3, '/');
 FUNC_0(&VAR_3, VAR_1->mod_name);
 FUNC_1(&VAR_3, '/');
 FUNC_0(&VAR_3, VAR_2);

 return VAR_3.array;
}
