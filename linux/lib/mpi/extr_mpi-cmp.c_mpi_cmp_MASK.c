
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mpi_size_t ;
struct TYPE_5__ {scalar_t__ nlimbs; scalar_t__ sign; int d; } ;
typedef TYPE_1__* MPI ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

int FUNC_2(MPI VAR_0, MPI VAR_1)
{
 mpi_size_t VAR_2, VAR_3;
 int VAR_4;

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);
 VAR_2 = VAR_0->nlimbs;
 VAR_3 = VAR_1->nlimbs;
 if (!VAR_0->sign && VAR_1->sign)
  return 1;
 if (VAR_0->sign && !VAR_1->sign)
  return -1;
 if (VAR_2 != VAR_3 && !VAR_0->sign && !VAR_1->sign)
  return VAR_2 - VAR_3;
 if (VAR_2 != VAR_3 && VAR_0->sign && VAR_1->sign)
  return VAR_3 - VAR_2;
 if (!VAR_2)
  return 0;
 VAR_4 = FUNC_1(VAR_0->d, VAR_1->d, VAR_2);
 if (VAR_0->sign)
  return -VAR_4;
 return VAR_4;
}
