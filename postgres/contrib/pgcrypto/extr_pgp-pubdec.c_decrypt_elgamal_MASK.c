
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ algo; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_PubKey ;
typedef int PGP_MPI ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **) ;

__attribute__((used)) static int
FUNC_3(PGP_PubKey *VAR_2, PullFilter *VAR_3, PGP_MPI **VAR_4)
{
 int VAR_5;
 PGP_MPI *VAR_6 = ((void*)0);
 PGP_MPI *VAR_7 = ((void*)0);

 if (VAR_2->algo != VAR_0)
  return VAR_1;


 VAR_5 = FUNC_2(VAR_3, &VAR_6);
 if (VAR_5 < 0)
  goto out;
 VAR_5 = FUNC_2(VAR_3, &VAR_7);
 if (VAR_5 < 0)
  goto out;


 VAR_5 = FUNC_0(VAR_2, VAR_6, VAR_7, VAR_4);

out:
 FUNC_1(VAR_6);
 FUNC_1(VAR_7);
 return VAR_5;
}
