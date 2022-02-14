
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dstr {char* array; int member_0; } ;
struct TYPE_3__ {int data_path; } ;
typedef TYPE_1__ obs_module_t ;


 int FUNC_0 (struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*,char) ;
 int FUNC_2 (struct dstr*,int ) ;
 char FUNC_3 (struct dstr*) ;
 int FUNC_4 (struct dstr*) ;
 int FUNC_5 (struct dstr*) ;
 int FUNC_6 (char*) ;

char *FUNC_7(obs_module_t *VAR_0, const char *VAR_1)
{
 struct dstr VAR_2 = {0};

 if (!VAR_1)
  VAR_1 = "";

 if (!VAR_0)
  return ((void*)0);

 FUNC_2(&VAR_2, VAR_0->data_path);
 if (!FUNC_5(&VAR_2) && FUNC_3(&VAR_2) != '/' && *VAR_1)
  FUNC_1(&VAR_2, '/');
 FUNC_0(&VAR_2, VAR_1);

 if (!FUNC_6(VAR_2.array))
  FUNC_4(&VAR_2);
 return VAR_2.array;
}
