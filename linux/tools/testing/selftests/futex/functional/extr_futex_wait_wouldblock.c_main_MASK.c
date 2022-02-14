
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; int tv_sec; } ;
typedef scalar_t__ futex_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,scalar_t__,char*) ;
 int FUNC_4 (scalar_t__*,scalar_t__,struct timespec*,int ) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (char*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int VAR_7 ;
 int FUNC_12 (int ,int) ;
 char* FUNC_13 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_14 (int ) ;

int FUNC_15(int VAR_9, char *VAR_10[])
{
 struct timespec VAR_11 = {.tv_sec = 0, .tv_nsec = VAR_8};
 futex_t VAR_12 = VAR_1;
 int VAR_13, VAR_14 = VAR_4;
 int VAR_15;

 while ((VAR_15 = FUNC_5(VAR_9, VAR_10, "cht:v:")) != -1) {
  switch (VAR_15) {
  case 'c':
   FUNC_10(1);
   break;
  case 'h':
   FUNC_14(FUNC_1(VAR_10[0]));
   FUNC_2(0);
  case 'v':
   FUNC_11(FUNC_0(VAR_7));
   break;
  default:
   FUNC_14(FUNC_1(VAR_10[0]));
   FUNC_2(1);
  }
 }

 FUNC_7();
 FUNC_9(1);
 FUNC_8("%s: Test the unexpected futex value in FUTEX_WAIT\n",
        FUNC_1(VAR_10[0]));

 FUNC_6("Calling futex_wait on f1: %u @ %p with val=%u\n", VAR_12, &VAR_12, VAR_12+1);
 VAR_13 = FUNC_4(&VAR_12, VAR_12+1, &VAR_11, VAR_2);
 if (!VAR_13 || VAR_6 != VAR_0) {
  FUNC_3("futex_wait returned: %d %s\n",
       VAR_13 ? VAR_6 : VAR_13, VAR_13 ? FUNC_13(VAR_6) : "");
  VAR_14 = VAR_3;
 }

 FUNC_12(VAR_5, VAR_14);
 return VAR_14;
}
