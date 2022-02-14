
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pPCache; } ;
typedef int Pgno ;
typedef int PgHdr ;
typedef TYPE_1__ Pager ;


 int FUNC_0 (int ,int ,int ,int **) ;

__attribute__((used)) static PgHdr *FUNC_1(Pager *VAR_0, Pgno VAR_1){
  PgHdr *VAR_2;




  (void)FUNC_0(VAR_0->pPCache, VAR_1, 0, &VAR_2);
  return VAR_2;
}
