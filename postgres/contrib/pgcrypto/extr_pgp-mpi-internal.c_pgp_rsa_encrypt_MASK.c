
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mpz_t ;
struct TYPE_5__ {int * n; int * e; } ;
struct TYPE_6__ {TYPE_1__ rsa; } ;
struct TYPE_7__ {TYPE_2__ pub; } ;
typedef TYPE_3__ PGP_PubKey ;
typedef int PGP_MPI ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int * FUNC_3 () ;
 int * FUNC_4 (int *) ;

int
FUNC_5(PGP_PubKey *VAR_1, PGP_MPI *VAR_2, PGP_MPI **VAR_3)
{
 int VAR_4 = VAR_0;
 mpz_t *VAR_5 = FUNC_4(VAR_2);
 mpz_t *VAR_6 = FUNC_4(VAR_1->pub.rsa.e);
 mpz_t *VAR_7 = FUNC_4(VAR_1->pub.rsa.n);
 mpz_t *VAR_8 = FUNC_3();

 if (!VAR_5 || !VAR_6 || !VAR_7 || !VAR_8)
  goto err;




 FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);

 *VAR_3 = FUNC_0(VAR_8);
 if (*VAR_3)
  VAR_4 = 0;
err:
 FUNC_1(VAR_8);
 FUNC_1(VAR_7);
 FUNC_1(VAR_6);
 FUNC_1(VAR_5);
 return VAR_4;
}
