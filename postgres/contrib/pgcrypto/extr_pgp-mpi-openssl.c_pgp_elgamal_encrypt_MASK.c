
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * y; int * g; int * p; } ;
struct TYPE_6__ {TYPE_1__ elg; } ;
struct TYPE_7__ {TYPE_2__ pub; } ;
typedef TYPE_3__ PGP_PubKey ;
typedef int PGP_MPI ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int ,int ) ;
 int VAR_0 ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int *) ;

int
FUNC_11(PGP_PubKey *VAR_1, PGP_MPI *VAR_2,
     PGP_MPI **VAR_3, PGP_MPI **VAR_4)
{
 int VAR_5 = VAR_0;
 int VAR_6;
 BIGNUM *VAR_7 = FUNC_10(VAR_2);
 BIGNUM *VAR_8 = FUNC_10(VAR_1->pub.elg.p);
 BIGNUM *VAR_9 = FUNC_10(VAR_1->pub.elg.g);
 BIGNUM *VAR_10 = FUNC_10(VAR_1->pub.elg.y);
 BIGNUM *VAR_11 = FUNC_5();
 BIGNUM *VAR_12 = FUNC_5();
 BIGNUM *VAR_13 = FUNC_5();
 BIGNUM *VAR_14 = FUNC_5();
 BN_CTX *VAR_15 = FUNC_1();

 if (!VAR_7 || !VAR_8 || !VAR_9 || !VAR_10 || !VAR_11 || !VAR_12 || !VAR_13 || !VAR_14 || !VAR_15)
  goto err;




 VAR_6 = FUNC_9(FUNC_6(VAR_8));
 if (!FUNC_7(VAR_11, VAR_6, 0, 0))
  goto err;




 if (!FUNC_3(VAR_13, VAR_9, VAR_11, VAR_8, VAR_15))
  goto err;
 if (!FUNC_3(VAR_12, VAR_10, VAR_11, VAR_8, VAR_15))
  goto err;
 if (!FUNC_4(VAR_14, VAR_7, VAR_12, VAR_8, VAR_15))
  goto err;


 *VAR_3 = FUNC_8(VAR_13);
 *VAR_4 = FUNC_8(VAR_14);
 if (*VAR_3 && *VAR_4)
  VAR_5 = 0;
err:
 if (VAR_15)
  FUNC_0(VAR_15);
 if (VAR_14)
  FUNC_2(VAR_14);
 if (VAR_13)
  FUNC_2(VAR_13);
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
 return VAR_5;
}
