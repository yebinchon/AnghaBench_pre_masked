
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; scalar_t__* group; } ;
typedef TYPE_1__ key_type ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char**,int ,char*,scalar_t__*,char*) ;

char * FUNC_2(const key_type *VAR_0)
{
 if (VAR_0->group && *VAR_0->group) {
  char *VAR_1;
  FUNC_1(&VAR_1, 0, "[%s]%s", VAR_0->group, VAR_0->name ? VAR_0->name : "");
  return VAR_1;
 } else if (VAR_0->name) {
  return FUNC_0(VAR_0->name);
 } else {
  return ((void*)0);
 }
}
