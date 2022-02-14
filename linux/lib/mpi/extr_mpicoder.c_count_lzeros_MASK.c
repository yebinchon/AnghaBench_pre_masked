
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mpi_limb_t ;
struct TYPE_3__ {int nlimbs; scalar_t__* d; } ;
typedef TYPE_1__* MPI ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(MPI VAR_0)
{
 mpi_limb_t VAR_1;
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = VAR_0->nlimbs - 1; VAR_2 >= 0; VAR_2--) {
  VAR_1 = VAR_0->d[VAR_2];
  if (VAR_1 == 0) {
   VAR_3 += sizeof(mpi_limb_t);
  } else {
   VAR_3 += FUNC_0(VAR_1) / 8;
   break;
  }
 }
 return VAR_3;
}
