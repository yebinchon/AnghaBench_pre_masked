
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int futex_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int *,int ,struct timespec*,int ) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (char*,int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int VAR_7 ;
 int FUNC_12 (int ,int) ;
 int VAR_8 ;
 int FUNC_13 (int ) ;

int FUNC_14(int VAR_9, char *VAR_10[])
{
 futex_t VAR_11 = VAR_1;
 struct timespec VAR_12;
 int VAR_13, VAR_14 = VAR_4;
 int VAR_15;

 while ((VAR_15 = FUNC_5(VAR_9, VAR_10, "cht:v:")) != -1) {
  switch (VAR_15) {
  case 'c':
   FUNC_10(1);
   break;
  case 'h':
   FUNC_13(FUNC_1(VAR_10[0]));
   FUNC_2(0);
  case 't':
   VAR_8 = FUNC_0(VAR_7);
   break;
  case 'v':
   FUNC_11(FUNC_0(VAR_7));
   break;
  default:
   FUNC_13(FUNC_1(VAR_10[0]));
   FUNC_2(1);
  }
 }

 FUNC_7();
 FUNC_9(1);
 FUNC_8("%s: Block on a futex and wait for timeout\n",
        FUNC_1(VAR_10[0]));
 FUNC_8("\tArguments: timeout=%ldns\n", VAR_8);


 VAR_12.tv_sec = 0;
 VAR_12.tv_nsec = VAR_8;

 FUNC_6("Calling futex_wait on f1: %u @ %p\n", VAR_11, &VAR_11);
 VAR_13 = FUNC_4(&VAR_11, VAR_11, &VAR_12, VAR_2);
 if (!VAR_13 || VAR_6 != VAR_0) {
  FUNC_3("futex_wait returned %d\n", VAR_14 < 0 ? VAR_6 : VAR_14);
  VAR_14 = VAR_3;
 }

 FUNC_12(VAR_5, VAR_14);
 return VAR_14;
}
