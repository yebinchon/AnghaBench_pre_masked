
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ busy; scalar_t__ zFilename; scalar_t__ zArg; int opnum; scalar_t__ xOp; } ;
typedef TYPE_1__ Thread ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(Thread *VAR_0){
  FUNC_1(VAR_0);
  VAR_0->xOp = 0;
  VAR_0->opnum++;
  FUNC_1(VAR_0);
  FUNC_0(VAR_0->zArg);
  VAR_0->zArg = 0;
  FUNC_0(VAR_0->zFilename);
  VAR_0->zFilename = 0;
  VAR_0->busy = 0;
}
