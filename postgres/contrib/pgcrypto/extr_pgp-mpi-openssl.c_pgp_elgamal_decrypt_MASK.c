
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * x; } ;
struct TYPE_10__ {TYPE_3__ elg; } ;
struct TYPE_7__ {int * p; } ;
struct TYPE_8__ {TYPE_1__ elg; } ;
struct TYPE_11__ {TYPE_4__ sec; TYPE_2__ pub; } ;
typedef TYPE_5__ PGP_PubKey ;
typedef int PGP_MPI ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int *,int *) ;
 int * FUNC_6 () ;
 int VAR_0 ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

int
FUNC_9(PGP_PubKey *VAR_1, PGP_MPI *VAR_2, PGP_MPI *VAR_3,
     PGP_MPI **VAR_4)
{
 int VAR_5 = VAR_0;
 BIGNUM *VAR_6 = FUNC_8(VAR_2);
 BIGNUM *VAR_7 = FUNC_8(VAR_3);
 BIGNUM *VAR_8 = FUNC_8(VAR_1->pub.elg.p);
 BIGNUM *VAR_9 = FUNC_8(VAR_1->sec.elg.x);
 BIGNUM *VAR_10 = FUNC_6();
 BIGNUM *VAR_11 = FUNC_6();
 BIGNUM *VAR_12 = FUNC_6();
 BN_CTX *VAR_13 = FUNC_1();

 if (!VAR_6 || !VAR_7 || !VAR_8 || !VAR_9 || !VAR_10 || !VAR_11 || !VAR_12 || !VAR_13)
  goto err;




 if (!FUNC_3(VAR_10, VAR_6, VAR_9, VAR_8, VAR_13))
  goto err;
 if (!FUNC_4(VAR_11, VAR_10, VAR_8, VAR_13))
  goto err;
 if (!FUNC_5(VAR_12, VAR_7, VAR_11, VAR_8, VAR_13))
  goto err;


 *VAR_4 = FUNC_7(VAR_12);
 if (*VAR_4)
  VAR_5 = 0;
err:
 if (VAR_13)
  FUNC_0(VAR_13);
 if (VAR_12)
  FUNC_2(VAR_12);
 if (VAR_11)
  FUNC_2(VAR_11);
 if (VAR_10)
  FUNC_2(VAR_10);
 if (VAR_9)
  FUNC_2(VAR_9);
 if (VAR_8)
  FUNC_2(VAR_8);
 if (VAR_7)
  FUNC_2(VAR_7);
 if (VAR_6)
  FUNC_2(VAR_6);
 return VAR_5;
}
