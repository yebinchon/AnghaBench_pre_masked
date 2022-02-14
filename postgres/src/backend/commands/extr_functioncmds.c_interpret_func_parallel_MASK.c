
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arg; } ;
typedef TYPE_1__ DefElem ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static char
FUNC_5(DefElem *VAR_5)
{
 char *VAR_6 = FUNC_3(VAR_5->arg);

 if (FUNC_4(VAR_6, "safe") == 0)
  return VAR_3;
 else if (FUNC_4(VAR_6, "unsafe") == 0)
  return VAR_4;
 else if (FUNC_4(VAR_6, "restricted") == 0)
  return VAR_2;
 else
 {
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("parameter \"parallel\" must be SAFE, RESTRICTED, or UNSAFE")));
  return VAR_4;
 }
}
