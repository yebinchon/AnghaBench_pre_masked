
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int *,int,int ,int ) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int,char**,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int VAR_11 ;
 int FUNC_13 (int ,int) ;
 scalar_t__ FUNC_14 (int *,int *,int ,int *) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;

int FUNC_18(int VAR_12, char *VAR_13[])
{
 int VAR_14 = VAR_4;
 pthread_t VAR_15;
 int VAR_16;

 while ((VAR_16 = FUNC_7(VAR_12, VAR_13, "chv:")) != -1) {
  switch (VAR_16) {
  case 'c':
   FUNC_11(1);
   break;
  case 'h':
   FUNC_17(FUNC_1(VAR_13[0]));
   FUNC_3(0);
  case 'v':
   FUNC_12(FUNC_0(VAR_11));
   break;
  default:
   FUNC_17(FUNC_1(VAR_13[0]));
   FUNC_3(1);
  }
 }

 FUNC_8();
 FUNC_10(1);
 FUNC_9("%s: Detect mismatched requeue_pi operations\n",
        FUNC_1(VAR_13[0]));

 if (FUNC_14(&VAR_15, ((void*)0), VAR_6, ((void*)0))) {
  FUNC_2("pthread_create\n", VAR_8);
  VAR_14 = VAR_2;
  goto out;
 }

 FUNC_16(1);







 VAR_14 = FUNC_5(&VAR_9, VAR_9, &VAR_10, 1, 0, VAR_1);
 if (VAR_14 < 0) {
  if (VAR_8 == VAR_0) {





   VAR_14 = FUNC_6(&VAR_9, 1, VAR_1);
   if (VAR_14 == 1) {
    VAR_14 = VAR_4;
   } else if (VAR_14 < 0) {
    FUNC_2("futex_wake\n", VAR_8);
    VAR_14 = VAR_2;
   } else {
    FUNC_2("futex_wake did not wake the child\n", 0);
    VAR_14 = VAR_2;
   }
  } else {
   FUNC_2("futex_cmp_requeue_pi\n", VAR_8);
   VAR_14 = VAR_2;
  }
 } else if (VAR_14 > 0) {
  FUNC_4("futex_cmp_requeue_pi failed to detect the mismatch\n");
  VAR_14 = VAR_3;
 } else {
  FUNC_2("futex_cmp_requeue_pi found no waiters\n", 0);
  VAR_14 = VAR_2;
 }

 FUNC_15(VAR_15, ((void*)0));

 if (!VAR_14)
  VAR_14 = VAR_7;

 out:

 FUNC_13(VAR_5, VAR_14);
 return VAR_14;
}
