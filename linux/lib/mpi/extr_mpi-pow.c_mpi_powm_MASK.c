
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct karatsuba_ctx {int dummy; } ;
typedef int mpi_size_t ;
typedef int* mpi_ptr_t ;
typedef int mpi_limb_t ;
typedef scalar_t__ mpi_limb_signed_t ;
struct TYPE_8__ {int nlimbs; int sign; int* d; int alloced; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int*,int) ;
 int FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int*,int*,int,int*) ;
 int FUNC_10 (int*,int*,int) ;
 int FUNC_11 (int*,int ,int*,int,int*,int) ;
 int FUNC_12 (int*,int*,int,int) ;
 scalar_t__ FUNC_13 (int*,int*,int,int*,int,int*) ;
 scalar_t__ FUNC_14 (int*,int*,int,int*,int,struct karatsuba_ctx*) ;
 int FUNC_15 (struct karatsuba_ctx*) ;
 int FUNC_16 (int*,int*,int,int) ;
 int FUNC_17 (int*,int*,int,int*,int) ;

int FUNC_18(MPI VAR_4, MPI VAR_5, MPI VAR_6, MPI VAR_7)
{
 mpi_ptr_t VAR_8 = ((void*)0), VAR_9 = ((void*)0), VAR_10 = ((void*)0);
 struct karatsuba_ctx VAR_11 = {};
 mpi_ptr_t VAR_12 = ((void*)0);
 mpi_ptr_t VAR_13 = ((void*)0);
 mpi_ptr_t VAR_14, VAR_15, VAR_16, VAR_17;
 mpi_size_t VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24;
 mpi_size_t VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28 = 0;
 mpi_size_t VAR_29 = 0;

 int VAR_30 = -VAR_2;

 VAR_18 = VAR_6->nlimbs;
 VAR_19 = VAR_7->nlimbs;
 VAR_25 = 2 * VAR_19;
 VAR_22 = VAR_7->sign;

 VAR_14 = VAR_4->d;
 VAR_15 = VAR_6->d;

 if (!VAR_19)
  return -VAR_1;

 if (!VAR_18) {


  VAR_4->nlimbs = (VAR_19 == 1 && VAR_7->d[0] == 1) ? 0 : 1;
  if (VAR_4->nlimbs) {
   if (FUNC_8(VAR_4, 1) < 0)
    goto enomem;
   VAR_14 = VAR_4->d;
   VAR_14[0] = 1;
  }
  VAR_4->sign = 0;
  goto leave;
 }





 VAR_16 = VAR_8 = FUNC_5(VAR_19);
 if (!VAR_16)
  goto enomem;
 VAR_26 = FUNC_4(VAR_7->d[VAR_19 - 1]);
 if (VAR_26)
  FUNC_12(VAR_16, VAR_7->d, VAR_19, VAR_26);
 else
  FUNC_1(VAR_16, VAR_7->d, VAR_19);

 VAR_20 = VAR_5->nlimbs;
 VAR_23 = VAR_5->sign;
 if (VAR_20 > VAR_19) {


  VAR_17 = VAR_9 = FUNC_5(VAR_20 + 1);
  if (!VAR_17)
   goto enomem;
  FUNC_1(VAR_17, VAR_5->d, VAR_20);


  FUNC_11(VAR_17 + VAR_19, 0, VAR_17, VAR_20, VAR_16, VAR_19);
  VAR_20 = VAR_19;


  FUNC_2(VAR_17, VAR_20);
 } else
  VAR_17 = VAR_5->d;

 if (!VAR_20) {
  VAR_4->nlimbs = 0;
  VAR_4->sign = 0;
  goto leave;
 }

 if (VAR_4->alloced < VAR_25) {



  if (VAR_14 == VAR_15 || VAR_14 == VAR_16 || VAR_14 == VAR_17) {
   VAR_14 = FUNC_5(VAR_25);
   if (!VAR_14)
    goto enomem;
   VAR_28 = 1;
  } else {
   if (FUNC_8(VAR_4, VAR_25) < 0)
    goto enomem;
   VAR_14 = VAR_4->d;
  }
 } else {
  if (VAR_14 == VAR_17) {

   FUNC_0(VAR_9);
   VAR_17 = VAR_9 = FUNC_5(VAR_20);
   if (!VAR_17)
    goto enomem;
   FUNC_1(VAR_17, VAR_14, VAR_20);
  }
  if (VAR_14 == VAR_15) {

   VAR_15 = VAR_10 = FUNC_5(VAR_18);
   if (!VAR_15)
    goto enomem;
   FUNC_1(VAR_15, VAR_14, VAR_18);
  }
  if (VAR_14 == VAR_16) {

   FUNC_0(VAR_8);
   VAR_16 = VAR_8 = FUNC_5(VAR_19);
   if (!VAR_16)
    goto enomem;
   FUNC_1(VAR_16, VAR_14, VAR_19);
  }
 }

 FUNC_1(VAR_14, VAR_17, VAR_20);
 VAR_21 = VAR_20;
 VAR_24 = VAR_23;

 {
  mpi_size_t VAR_31;
  mpi_ptr_t VAR_32;
  int VAR_33;
  mpi_limb_t VAR_34;
  mpi_limb_t VAR_35;

  VAR_32 = VAR_12 = FUNC_5(2 * (VAR_19 + 1));
  if (!VAR_32)
   goto enomem;

  VAR_27 = (VAR_15[0] & 1) && VAR_5->sign;

  VAR_31 = VAR_18 - 1;
  VAR_34 = VAR_15[VAR_31];
  VAR_33 = FUNC_4(VAR_34);
  VAR_34 = (VAR_34 << VAR_33) << 1;
  VAR_33 = VAR_0 - 1 - VAR_33;
  for (;;) {
   while (VAR_33) {
    mpi_ptr_t VAR_36;
    mpi_size_t VAR_37;


    if (VAR_21 < VAR_3)
     FUNC_10(VAR_32, VAR_14, VAR_21);
    else {
     if (!VAR_13) {
      VAR_29 = 2 * VAR_21;
      VAR_13 =
          FUNC_5(VAR_29);
      if (!VAR_13)
       goto enomem;
     } else if (VAR_29 < (2 * VAR_21)) {
      FUNC_7(VAR_13);
      VAR_29 = 2 * VAR_21;
      VAR_13 =
          FUNC_5(VAR_29);
      if (!VAR_13)
       goto enomem;
     }
     FUNC_9(VAR_32, VAR_14, VAR_21, VAR_13);
    }

    VAR_37 = 2 * VAR_21;
    if (VAR_37 > VAR_19) {
     FUNC_11(VAR_32 + VAR_19, 0, VAR_32, VAR_37,
             VAR_16, VAR_19);
     VAR_37 = VAR_19;
    }

    VAR_36 = VAR_14;
    VAR_14 = VAR_32;
    VAR_32 = VAR_36;
    VAR_21 = VAR_37;

    if ((mpi_limb_signed_t) VAR_34 < 0) {

     if (VAR_20 < VAR_3) {
      mpi_limb_t VAR_38;
      if (FUNC_13
          (VAR_32, VAR_14, VAR_21, VAR_17, VAR_20,
           &VAR_38) < 0)
       goto enomem;
     } else {
      if (FUNC_14
          (VAR_32, VAR_14, VAR_21, VAR_17, VAR_20,
           &VAR_11) < 0)
       goto enomem;
     }

     VAR_37 = VAR_21 + VAR_20;
     if (VAR_37 > VAR_19) {
      FUNC_11(VAR_32 + VAR_19, 0,
              VAR_32, VAR_37, VAR_16,
              VAR_19);
      VAR_37 = VAR_19;
     }

     VAR_36 = VAR_14;
     VAR_14 = VAR_32;
     VAR_32 = VAR_36;
     VAR_21 = VAR_37;
    }
    VAR_34 <<= 1;
    VAR_33--;
    FUNC_3();
   }

   VAR_31--;
   if (VAR_31 < 0)
    break;
   VAR_34 = VAR_15[VAR_31];
   VAR_33 = VAR_0;
  }







  if (VAR_26) {
   VAR_35 =
       FUNC_12(VAR_4->d, VAR_14, VAR_21, VAR_26);
   VAR_14 = VAR_4->d;
   if (VAR_35) {
    VAR_14[VAR_21] = VAR_35;
    VAR_21++;
   }
  } else {
   FUNC_1(VAR_4->d, VAR_14, VAR_21);
   VAR_14 = VAR_4->d;
  }

  if (VAR_21 >= VAR_19) {
   FUNC_11(VAR_14 + VAR_19, 0, VAR_14, VAR_21, VAR_16, VAR_19);
   VAR_21 = VAR_19;
  }


  if (VAR_26)
   FUNC_16(VAR_14, VAR_14, VAR_21, VAR_26);
  FUNC_2(VAR_14, VAR_21);
 }

 if (VAR_27 && VAR_21) {
  if (VAR_26)
   FUNC_16(VAR_16, VAR_16, VAR_19, VAR_26);
  FUNC_17(VAR_14, VAR_16, VAR_19, VAR_14, VAR_21);
  VAR_21 = VAR_19;
  VAR_24 = VAR_22;
  FUNC_2(VAR_14, VAR_21);
 }
 VAR_4->nlimbs = VAR_21;
 VAR_4->sign = VAR_24;

leave:
 VAR_30 = 0;
enomem:
 FUNC_15(&VAR_11);
 if (VAR_28)
  FUNC_6(VAR_4, VAR_14, VAR_25);
 if (VAR_8)
  FUNC_7(VAR_8);
 if (VAR_9)
  FUNC_7(VAR_9);
 if (VAR_10)
  FUNC_7(VAR_10);
 if (VAR_12)
  FUNC_7(VAR_12);
 if (VAR_13)
  FUNC_7(VAR_13);
 return VAR_30;
}
