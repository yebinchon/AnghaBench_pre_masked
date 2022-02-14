
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* errormsg; } ;
typedef TYPE_1__ Step ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(Step *VAR_1)
{
 if (VAR_1->errormsg)
 {
  FUNC_0(VAR_0, "%s\n", VAR_1->errormsg);
  FUNC_1(VAR_1->errormsg);
  VAR_1->errormsg = ((void*)0);
 }
}
