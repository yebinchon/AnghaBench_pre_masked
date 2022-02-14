
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pageSize; int nExtra; int pPCache; } ;
typedef int PgHdr ;
typedef TYPE_1__ Pager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

int FUNC_2(Pager *VAR_0){
  int VAR_1 = VAR_0->pageSize + VAR_0->nExtra + sizeof(PgHdr)
                                     + 5*sizeof(void*);
  return VAR_1*FUNC_1(VAR_0->pPCache)
           + FUNC_0(VAR_0)
           + VAR_0->pageSize;
}
