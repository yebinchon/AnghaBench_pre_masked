
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t mpi_size_t ;
typedef int* mpi_ptr_t ;
typedef int mpi_limb_t ;


 int FUNC_0 (int*,int*,size_t) ;
 int FUNC_1 (int*,size_t) ;
 int FUNC_2 (int*,int*,int*,size_t) ;
 int FUNC_3 (int*,int*,size_t,int) ;
 int FUNC_4 (int*,int*,size_t,int) ;

__attribute__((used)) static mpi_limb_t
FUNC_5(mpi_ptr_t VAR_0, mpi_ptr_t VAR_1, mpi_ptr_t VAR_2, mpi_size_t VAR_3)
{
 mpi_size_t VAR_4;
 mpi_limb_t VAR_5;
 mpi_limb_t VAR_6;



 VAR_6 = VAR_2[0];
 if (VAR_6 <= 1) {
  if (VAR_6 == 1)
   FUNC_0(VAR_0, VAR_1, VAR_3);
  else
   FUNC_1(VAR_0, VAR_3);
  VAR_5 = 0;
 } else
  VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_3, VAR_6);

 VAR_0[VAR_3] = VAR_5;
 VAR_0++;



 for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
  VAR_6 = VAR_2[VAR_4];
  if (VAR_6 <= 1) {
   VAR_5 = 0;
   if (VAR_6 == 1)
    VAR_5 = FUNC_2(VAR_0, VAR_0, VAR_1, VAR_3);
  } else
   VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_3, VAR_6);

  VAR_0[VAR_3] = VAR_5;
  VAR_0++;
 }

 return VAR_5;
}
