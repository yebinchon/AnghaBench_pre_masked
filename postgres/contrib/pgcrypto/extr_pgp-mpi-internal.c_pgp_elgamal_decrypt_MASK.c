
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mpz_t ;
struct TYPE_9__ {int * x; } ;
struct TYPE_10__ {TYPE_3__ elg; } ;
struct TYPE_7__ {int * p; } ;
struct TYPE_8__ {TYPE_1__ elg; } ;
struct TYPE_11__ {TYPE_4__ sec; TYPE_2__ pub; } ;
typedef TYPE_5__ PGP_PubKey ;
typedef int PGP_MPI ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int * FUNC_5 () ;
 int * FUNC_6 (int *) ;

int
FUNC_7(PGP_PubKey *VAR_1, PGP_MPI *VAR_2, PGP_MPI *VAR_3,
     PGP_MPI **VAR_4)
{
 int VAR_5 = VAR_0;
 mpz_t *VAR_6 = FUNC_6(VAR_2);
 mpz_t *VAR_7 = FUNC_6(VAR_3);
 mpz_t *VAR_8 = FUNC_6(VAR_1->pub.elg.p);
 mpz_t *VAR_9 = FUNC_6(VAR_1->sec.elg.x);
 mpz_t *VAR_10 = FUNC_5();
 mpz_t *VAR_11 = FUNC_5();
 mpz_t *VAR_12 = FUNC_5();

 if (!VAR_6 || !VAR_7 || !VAR_8 || !VAR_9 || !VAR_10 || !VAR_11 || !VAR_12)
  goto err;




 FUNC_2(VAR_6, VAR_9, VAR_8, VAR_10);
 FUNC_3(VAR_10, VAR_8, VAR_11);
 FUNC_4(VAR_7, VAR_11, VAR_8, VAR_12);


 *VAR_4 = FUNC_0(VAR_12);
 if (*VAR_4)
  VAR_5 = 0;
err:
 FUNC_1(VAR_12);
 FUNC_1(VAR_11);
 FUNC_1(VAR_10);
 FUNC_1(VAR_9);
 FUNC_1(VAR_8);
 FUNC_1(VAR_7);
 FUNC_1(VAR_6);
 return VAR_5;
}
