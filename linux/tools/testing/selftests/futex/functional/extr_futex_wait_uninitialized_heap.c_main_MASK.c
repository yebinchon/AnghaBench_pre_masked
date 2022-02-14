
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int *,long,int,int,int ,int ) ;
 int VAR_14 ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int *,int *,int ,int *) ;
 long FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_15 ;

int FUNC_18(int VAR_16, char **VAR_17)
{
 int VAR_18, VAR_19 = VAR_6;
 long VAR_20;
 pthread_t VAR_21;

 while ((VAR_18 = FUNC_5(VAR_16, VAR_17, "chv:")) != -1) {
  switch (VAR_18) {
  case 'c':
   FUNC_10(1);
   break;
  case 'h':
   FUNC_16(FUNC_1(VAR_17[0]));
   FUNC_3(0);
  case 'v':
   FUNC_11(FUNC_0(VAR_14));
   break;
  default:
   FUNC_16(FUNC_1(VAR_17[0]));
   FUNC_3(1);
  }
 }

 VAR_20 = FUNC_15(VAR_9);

 VAR_10 = FUNC_12(((void*)0), VAR_20, VAR_2|VAR_3,
     VAR_1|VAR_0, 0, 0);
 if (VAR_10 == (void *)-1) {
  FUNC_2("mmap\n", VAR_13);
  FUNC_3(1);
 }

 FUNC_7();
 FUNC_9(1);
 FUNC_8("%s: Test the uninitialized futex value in FUTEX_WAIT\n",
        FUNC_1(VAR_17[0]));


 VAR_19 = FUNC_14(&VAR_21, ((void*)0), VAR_15, ((void*)0));
 if (VAR_19) {
  FUNC_2("pthread_create\n", VAR_13);
  VAR_19 = VAR_4;
  goto out;
 }

 FUNC_6("waiting %dus for child to return\n", VAR_8);
 FUNC_17(VAR_8);

 VAR_19 = VAR_12;
 if (VAR_11) {
  FUNC_4("child blocked in kernel\n");
  VAR_19 = VAR_5;
 }

 out:
 FUNC_13(VAR_7, VAR_19);
 return VAR_19;
}
