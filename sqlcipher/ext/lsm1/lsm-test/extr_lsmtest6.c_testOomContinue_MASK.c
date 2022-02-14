
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rc; int iNext; scalar_t__ nFail; int pEnv; } ;
typedef TYPE_1__ OomTest ;


 int FUNC_0 (int ,int,int ,void (*) (void*),void*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(OomTest *VAR_1){
  if( VAR_1->rc!=0 || (VAR_1->iNext>1 && VAR_1->nFail==0) ){
    return 0;
  }
  VAR_1->nFail = 0;
  FUNC_0(VAR_1->pEnv, VAR_1->iNext, 0, (void (*)(void*))VAR_0, (void *)VAR_1);
  return 1;
}
