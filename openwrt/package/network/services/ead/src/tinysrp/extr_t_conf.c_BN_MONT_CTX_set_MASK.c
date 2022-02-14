
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_25__ {int top; int dmax; scalar_t__* d; int neg; } ;
struct TYPE_24__ {int ri; int N; TYPE_2__ const RR; TYPE_2__ const Ni; scalar_t__ n0; } ;
typedef scalar_t__ BN_ULONG ;
typedef TYPE_1__ BN_MONT_CTX ;
typedef int BN_CTX ;
typedef TYPE_2__ const BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__ const*) ;
 int FUNC_1 (TYPE_2__ const*,int *,TYPE_2__ const*,TYPE_2__ const*,int *) ;
 int FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__ const*) ;
 int FUNC_4 (TYPE_2__ const*) ;
 int FUNC_5 (TYPE_2__ const*,TYPE_2__ const*,int) ;
 int FUNC_6 (TYPE_2__ const*,TYPE_2__ const*,int *,int *) ;
 int * FUNC_7 (TYPE_2__ const*,TYPE_2__ const*,TYPE_2__ const*,int *) ;
 int FUNC_8 (TYPE_2__ const*) ;
 int FUNC_9 (TYPE_2__ const*,int) ;
 int FUNC_10 (TYPE_2__ const*,int ) ;
 int FUNC_11 (TYPE_2__ const*,int) ;
 int FUNC_12 (TYPE_2__ const*) ;

int FUNC_13(BN_MONT_CTX *VAR_2, const BIGNUM *VAR_3, BN_CTX *VAR_4)
 {
 BIGNUM VAR_5,*VAR_6;

 FUNC_3(&VAR_5);
 VAR_6= &(VAR_2->RR);
 FUNC_0(&(VAR_2->N),VAR_3);
  {
  VAR_2->ri=FUNC_8(VAR_3);
  FUNC_12(VAR_6);
  FUNC_9(VAR_6,VAR_2->ri);

  if ((FUNC_7(&VAR_5,VAR_6,VAR_3,VAR_4)) == ((void*)0))
   goto err;
  FUNC_5(&VAR_5,&VAR_5,VAR_2->ri);
  FUNC_11(&VAR_5,1);

  FUNC_1(&(VAR_2->Ni),((void*)0),&VAR_5,VAR_3,VAR_4);
  FUNC_2(&VAR_5);
  }



 FUNC_12(&(VAR_2->RR));
 FUNC_9(&(VAR_2->RR),VAR_2->ri*2);
 FUNC_6(&(VAR_2->RR),&(VAR_2->RR),&(VAR_2->N),VAR_4);

 return(1);
err:
 return(0);
 }
