
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int*,int,int ) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int VAR_5 ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int *,int *,int ,int *) ;
 int FUNC_15 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_8 ;

int FUNC_18(int VAR_9, char **VAR_10)
{
 pthread_t VAR_11;
 int VAR_12 = VAR_2;
 int VAR_13;
 int VAR_14;

 while ((VAR_14 = FUNC_6(VAR_9, VAR_10, "chv:")) != -1) {
  switch (VAR_14) {
  case 'c':
   FUNC_11(1);
   break;
  case 'h':
   FUNC_16(FUNC_1(VAR_10[0]));
   FUNC_2(0);
  case 'v':
   FUNC_12(FUNC_0(VAR_5));
   break;
  default:
   FUNC_16(FUNC_1(VAR_10[0]));
   FUNC_2(1);
  }
 }

 FUNC_8();
 FUNC_10(1);
 FUNC_9(
  "%s: Test the futex value of private file mappings in FUTEX_WAIT\n",
  FUNC_1(VAR_10[0]));

 VAR_12 = FUNC_14(&VAR_11, ((void*)0), VAR_7, ((void*)0));
 if (VAR_12 < 0) {
  FUNC_4(VAR_6, "pthread_create error\n");
  VAR_12 = VAR_0;
  goto out;
 }

 FUNC_7("wait a while\n");
 FUNC_17(VAR_4);
 VAR_8 = 2;
 VAR_13 = FUNC_5(&VAR_8, 1, 0);
 FUNC_7("futex_wake %d\n", VAR_13);
 if (VAR_13 != 1) {
  FUNC_3("FUTEX_WAKE didn't find the waiting thread.\n");
  VAR_12 = VAR_1;
 }

 FUNC_7("join\n");
 FUNC_15(VAR_11, ((void*)0));

 out:
 FUNC_13(VAR_3, VAR_12);
 return VAR_12;
}
