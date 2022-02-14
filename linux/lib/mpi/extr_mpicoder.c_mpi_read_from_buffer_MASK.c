
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int MPI ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned int VAR_2 ;
 int FUNC_2 (int const*,unsigned int) ;
 int FUNC_3 (char*,unsigned int,...) ;

MPI FUNC_4(const void *VAR_3, unsigned *VAR_4)
{
 const uint8_t *VAR_5 = VAR_3;
 unsigned int VAR_6, VAR_7;
 MPI VAR_8;

 if (*VAR_4 < 2)
  return FUNC_1(-VAR_0);
 VAR_6 = VAR_5[0] << 8 | VAR_5[1];

 if (VAR_6 > VAR_2) {
  FUNC_3("MPI: mpi too large (%u bits)\n", VAR_6);
  return FUNC_1(-VAR_0);
 }

 VAR_7 = FUNC_0(VAR_6, 8);
 if (VAR_7 + 2 > *VAR_4) {
  FUNC_3("MPI: mpi larger than buffer nbytes=%u ret_nread=%u\n",
    VAR_7, *VAR_4);
  return FUNC_1(-VAR_0);
 }

 VAR_8 = FUNC_2(VAR_5 + 2, VAR_7);
 if (!VAR_8)
  return FUNC_1(-VAR_1);

 *VAR_4 = VAR_7 + 2;
 return VAR_8;
}
