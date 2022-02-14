
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_bool ;
struct TYPE_3__ {char* long_msg; } ;
typedef TYPE_1__ help_msg ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static mrb_bool
FUNC_2(char *VAR_2, char *VAR_3)
{
  help_msg *VAR_4;

  if ((VAR_4 = FUNC_0(VAR_2, VAR_3)) == ((void*)0)) {
    return VAR_0;
  }
  FUNC_1("%s", VAR_4->long_msg);
  return VAR_1;
}
