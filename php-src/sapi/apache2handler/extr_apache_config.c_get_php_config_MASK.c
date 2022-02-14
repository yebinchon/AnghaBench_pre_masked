
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* value; } ;
typedef TYPE_1__ php_dir_entry ;
struct TYPE_5__ {int config; } ;
typedef TYPE_2__ php_conf_rec ;


 TYPE_1__* FUNC_0 (int *,char*,size_t) ;

char *FUNC_1(void *VAR_0, char *VAR_1, size_t VAR_2)
{
 php_conf_rec *VAR_3 = VAR_0;
 php_dir_entry *VAR_4;

 if ((VAR_4 = FUNC_0(&VAR_3->config, VAR_1, VAR_2)) != ((void*)0)) {
  return VAR_4->value;
 }

 return "";
}
