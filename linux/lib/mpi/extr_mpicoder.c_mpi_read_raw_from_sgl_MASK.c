
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sg_mapping_iter {unsigned int length; int consumed; scalar_t__* addr; } ;
struct scatterlist {int dummy; } ;
typedef int mpi_limb_t ;
struct TYPE_4__ {unsigned int nbits; unsigned int nlimbs; int* d; scalar_t__ sign; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__ const) ;
 TYPE_1__* FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;
 scalar_t__ FUNC_4 (struct sg_mapping_iter*) ;
 int FUNC_5 (struct sg_mapping_iter*,struct scatterlist*,int,int) ;
 int FUNC_6 (struct sg_mapping_iter*) ;
 int FUNC_7 (struct scatterlist*,unsigned int) ;

MPI FUNC_8(struct scatterlist *VAR_5, unsigned int VAR_6)
{
 struct sg_mapping_iter VAR_7;
 unsigned int VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15;
 const u8 *VAR_16;
 mpi_limb_t VAR_17;
 MPI VAR_18 = ((void*)0);

 VAR_14 = FUNC_7(VAR_5, VAR_6);
 if (VAR_14 < 0)
  return ((void*)0);

 FUNC_5(&VAR_7, VAR_5, VAR_14, VAR_3 | VAR_4);

 VAR_13 = 0;
 VAR_15 = 0;
 while (VAR_6 > 0) {
  while (VAR_15 && !*VAR_16) {
   VAR_13++;
   VAR_15--;
   VAR_16++;
  }

  if (VAR_15 && *VAR_16)
   break;

  FUNC_4(&VAR_7);
  VAR_16 = VAR_7.addr;
  VAR_15 = VAR_7.length;

  VAR_6 -= VAR_13;
  VAR_13 = 0;
 }

 VAR_7.consumed = VAR_13;

 VAR_6 -= VAR_13;
 VAR_8 = VAR_6 * 8;
 if (VAR_8 > VAR_2) {
  FUNC_6(&VAR_7);
  FUNC_3("MPI: mpi too large (%u bits)\n", VAR_8);
  return ((void*)0);
 }

 if (VAR_6 > 0)
  VAR_8 -= FUNC_1(*VAR_16) - (VAR_0 - 8);

 FUNC_6(&VAR_7);

 VAR_9 = FUNC_0(VAR_6, VAR_1);
 VAR_18 = FUNC_2(VAR_9);
 if (!VAR_18)
  return ((void*)0);

 VAR_18->nbits = VAR_8;
 VAR_18->sign = 0;
 VAR_18->nlimbs = VAR_9;

 if (VAR_6 == 0)
  return VAR_18;

 VAR_11 = VAR_9 - 1;
 VAR_17 = 0;
 VAR_12 = VAR_1 - VAR_6 % VAR_1;
 VAR_12 %= VAR_1;

 while (FUNC_4(&VAR_7)) {
  VAR_16 = VAR_7.addr;
  VAR_15 = VAR_7.length;

  for (VAR_10 = 0; VAR_10 < VAR_15; VAR_10++) {
   VAR_17 <<= 8;
   VAR_17 |= *VAR_16++;
   if (((VAR_12 + VAR_10 + 1) % VAR_1) == 0) {
    VAR_18->d[VAR_11--] = VAR_17;
    VAR_17 = 0;
   }
  }
  VAR_12 += VAR_10;
 }

 return VAR_18;
}
