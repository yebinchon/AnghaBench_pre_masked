
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgd_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,int *,int *,int) ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 int FUNC_7 () ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (scalar_t__) ;
 int * VAR_18 ;

int FUNC_13(void)
{
 int VAR_19;

 VAR_13 = FUNC_12(VAR_8);
 VAR_13 = FUNC_1(VAR_13, VAR_5);
 VAR_12 = FUNC_12(VAR_7);
 VAR_12 = FUNC_0(VAR_12, VAR_5);
 VAR_14 = FUNC_12(VAR_9);





 FUNC_2((VAR_13 ^ (VAR_12 - 1)) & VAR_3);

 FUNC_9("IDMAP page: %lx\n", VAR_13);
 FUNC_9("HYP VA range: %lx:%lx\n",
    FUNC_8(VAR_4),
    FUNC_8((unsigned long)VAR_11 - 1));

 if (VAR_13 >= FUNC_8(VAR_4) &&
     VAR_13 < FUNC_8((unsigned long)VAR_11 - 1) &&
     VAR_13 != (unsigned long)VAR_8) {




  FUNC_10("IDMAP intersecting with HYP VA, unable to continue\n");
  VAR_19 = -VAR_0;
  goto out;
 }

 VAR_15 = (pgd_t *)FUNC_4(VAR_2 | VAR_6, VAR_16);
 if (!VAR_15) {
  FUNC_10("Hyp mode PGD not allocated\n");
  VAR_19 = -VAR_1;
  goto out;
 }

 if (FUNC_5()) {
  VAR_10 = (pgd_t *)FUNC_4(VAR_2 | VAR_6,
        VAR_16);
  if (!VAR_10) {
   FUNC_10("Hyp boot PGD not allocated\n");
   VAR_19 = -VAR_1;
   goto out;
  }

  VAR_19 = FUNC_11(VAR_10);
  if (VAR_19)
   goto out;

  VAR_18 = (pgd_t *)FUNC_3(VAR_2 | VAR_6);
  if (!VAR_18) {
   FUNC_10("Failed to allocate extra HYP pgd\n");
   goto out;
  }
  FUNC_6(VAR_10, VAR_15, VAR_18,
        VAR_13);
 } else {
  VAR_19 = FUNC_11(VAR_15);
  if (VAR_19)
   goto out;
 }

 VAR_17 = VAR_13;
 return 0;
out:
 FUNC_7();
 return VAR_19;
}
