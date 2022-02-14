
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mpz_t ;
struct TYPE_5__ {int * y; int * g; int * p; } ;
struct TYPE_6__ {TYPE_1__ elg; } ;
struct TYPE_7__ {TYPE_2__ pub; } ;
typedef TYPE_3__ PGP_PubKey ;
typedef int PGP_MPI ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int,int *) ;
 int * FUNC_8 (int *) ;

int
FUNC_9(PGP_PubKey *VAR_1, PGP_MPI *VAR_2,
     PGP_MPI **VAR_3, PGP_MPI **VAR_4)
{
 int VAR_5 = VAR_0;
 int VAR_6;
 mpz_t *VAR_7 = FUNC_8(VAR_2);
 mpz_t *VAR_8 = FUNC_8(VAR_1->pub.elg.p);
 mpz_t *VAR_9 = FUNC_8(VAR_1->pub.elg.g);
 mpz_t *VAR_10 = FUNC_8(VAR_1->pub.elg.y);
 mpz_t *VAR_11 = FUNC_6();
 mpz_t *VAR_12 = FUNC_6();
 mpz_t *VAR_13 = FUNC_6();
 mpz_t *VAR_14 = FUNC_6();

 if (!VAR_7 || !VAR_8 || !VAR_9 || !VAR_10 || !VAR_11 || !VAR_12 || !VAR_13 || !VAR_14)
  goto err;




 VAR_6 = FUNC_1(FUNC_3(VAR_8));
 VAR_5 = FUNC_7(VAR_6, VAR_11);
 if (VAR_5 < 0)
  return VAR_5;




 FUNC_4(VAR_9, VAR_11, VAR_8, VAR_13);
 FUNC_4(VAR_10, VAR_11, VAR_8, VAR_12);
 FUNC_5(VAR_7, VAR_12, VAR_8, VAR_14);


 *VAR_3 = FUNC_0(VAR_13);
 *VAR_4 = FUNC_0(VAR_14);
 if (*VAR_3 && *VAR_4)
  VAR_5 = 0;
err:
 FUNC_2(VAR_14);
 FUNC_2(VAR_13);
 FUNC_2(VAR_12);
 FUNC_2(VAR_11);
 FUNC_2(VAR_10);
 FUNC_2(VAR_9);
 FUNC_2(VAR_8);
 FUNC_2(VAR_7);
 return VAR_5;
}
