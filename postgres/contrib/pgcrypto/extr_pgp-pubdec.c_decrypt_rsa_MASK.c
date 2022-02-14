
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (TYPE_1__*,int *,int **) ;

__attribute__((used)) static int
FUNC_3(PGP_PubKey *VAR_3, PullFilter *VAR_4, PGP_MPI **VAR_5)
{
 int VAR_6;
 PGP_MPI *VAR_7;

 if (VAR_3->algo != VAR_0
  && VAR_3->algo != VAR_1)
  return VAR_2;


 VAR_6 = FUNC_1(VAR_4, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_2(VAR_3, VAR_7, VAR_5);

 FUNC_0(VAR_7);
 return VAR_6;
}
