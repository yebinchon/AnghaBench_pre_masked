
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pArg; int iTid; scalar_t__ (* xProc ) (int ,int ) ;} ;
typedef TYPE_1__ Thread ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void *FUNC_1(void *VAR_0){
  Thread *VAR_1 = (Thread *)VAR_0;
  return (void *)VAR_1->xProc(VAR_1->iTid, VAR_1->pArg);
}
