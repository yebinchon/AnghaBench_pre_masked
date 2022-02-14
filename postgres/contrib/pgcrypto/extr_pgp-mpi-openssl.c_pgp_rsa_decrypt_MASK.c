
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * n; } ;
struct TYPE_10__ {TYPE_3__ rsa; } ;
struct TYPE_7__ {int * d; } ;
struct TYPE_8__ {TYPE_1__ rsa; } ;
struct TYPE_11__ {TYPE_4__ pub; TYPE_2__ sec; } ;
typedef TYPE_5__ PGP_PubKey ;
typedef int PGP_MPI ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;
 int * FUNC_4 () ;
 int VAR_0 ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

int
FUNC_7(PGP_PubKey *VAR_1, PGP_MPI *VAR_2, PGP_MPI **VAR_3)
{
 int VAR_4 = VAR_0;
 BIGNUM *VAR_5 = FUNC_6(VAR_2);
 BIGNUM *VAR_6 = FUNC_6(VAR_1->sec.rsa.d);
 BIGNUM *VAR_7 = FUNC_6(VAR_1->pub.rsa.n);
 BIGNUM *VAR_8 = FUNC_4();
 BN_CTX *VAR_9 = FUNC_1();

 if (!VAR_8 || !VAR_6 || !VAR_7 || !VAR_5 || !VAR_9)
  goto err;




 if (!FUNC_3(VAR_8, VAR_5, VAR_6, VAR_7, VAR_9))
  goto err;

 *VAR_3 = FUNC_5(VAR_8);
 if (*VAR_3)
  VAR_4 = 0;
err:
 if (VAR_9)
  FUNC_0(VAR_9);
 if (VAR_8)
  FUNC_2(VAR_8);
 if (VAR_7)
  FUNC_2(VAR_7);
 if (VAR_6)
  FUNC_2(VAR_6);
 if (VAR_5)
  FUNC_2(VAR_5);
 return VAR_4;
}
