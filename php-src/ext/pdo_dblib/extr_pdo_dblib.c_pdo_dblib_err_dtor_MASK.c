
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * oserrstr; int * lastmsg; int * dberrstr; } ;
typedef TYPE_1__ pdo_dblib_err ;


 int FUNC_0 (int *) ;

void FUNC_1(pdo_dblib_err *VAR_0)
{
 if (!VAR_0) {
  return;
 }

 if (VAR_0->dberrstr) {
  FUNC_0(VAR_0->dberrstr);
  VAR_0->dberrstr = ((void*)0);
 }
 if (VAR_0->lastmsg) {
  FUNC_0(VAR_0->lastmsg);
  VAR_0->lastmsg = ((void*)0);
 }
 if (VAR_0->oserrstr) {
  FUNC_0(VAR_0->oserrstr);
  VAR_0->oserrstr = ((void*)0);
 }
}
