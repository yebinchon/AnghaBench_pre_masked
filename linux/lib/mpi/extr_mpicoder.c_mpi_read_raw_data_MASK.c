
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int mpi_limb_t ;
struct TYPE_4__ {unsigned int nbits; unsigned int nlimbs; int* d; scalar_t__ sign; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned int FUNC_0 (size_t,size_t) ;
 unsigned int VAR_2 ;
 int FUNC_1 (scalar_t__ const) ;
 TYPE_1__* FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;

MPI FUNC_4(const void *VAR_3, size_t VAR_4)
{
 const uint8_t *VAR_5 = VAR_3;
 int VAR_6, VAR_7;
 unsigned VAR_8, VAR_9;
 mpi_limb_t VAR_10;
 MPI VAR_11 = ((void*)0);

 while (VAR_4 > 0 && VAR_5[0] == 0) {
  VAR_5++;
  VAR_4--;
 }

 VAR_8 = VAR_4 * 8;
 if (VAR_8 > VAR_2) {
  FUNC_3("MPI: mpi too large (%u bits)\n", VAR_8);
  return ((void*)0);
 }
 if (VAR_4 > 0)
  VAR_8 -= FUNC_1(VAR_5[0]) - (VAR_0 - 8);

 VAR_9 = FUNC_0(VAR_4, VAR_1);
 VAR_11 = FUNC_2(VAR_9);
 if (!VAR_11)
  return ((void*)0);
 VAR_11->nbits = VAR_8;
 VAR_11->sign = 0;
 VAR_11->nlimbs = VAR_9;

 if (VAR_4 > 0) {
  VAR_6 = VAR_1 - VAR_4 % VAR_1;
  VAR_6 %= VAR_1;
  for (VAR_7 = VAR_9; VAR_7 > 0; VAR_7--) {
   VAR_10 = 0;
   for (; VAR_6 < VAR_1; VAR_6++) {
    VAR_10 <<= 8;
    VAR_10 |= *VAR_5++;
   }
   VAR_6 = 0;
   VAR_11->d[VAR_7 - 1] = VAR_10;
  }
 }
 return VAR_11;
}
