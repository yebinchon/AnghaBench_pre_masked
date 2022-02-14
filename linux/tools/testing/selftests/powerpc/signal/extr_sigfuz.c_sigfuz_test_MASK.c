
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucontext_t ;
struct sigaction {int sa_sigaction; void* sa_flags; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int * FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (int ,struct sigaction*,int *) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int *) ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (scalar_t__,int*,int ) ;

__attribute__((used)) static void *FUNC_12(void *VAR_10)
{
 struct sigaction VAR_11, VAR_12;
 int VAR_13, VAR_14 = 0;
 pid_t VAR_15;

 VAR_8 = FUNC_4(sizeof(ucontext_t));


 VAR_11.sa_flags = VAR_2;
 VAR_11.sa_sigaction = VAR_9;


 VAR_12.sa_flags = VAR_2;
 VAR_12.sa_sigaction = VAR_7;


 FUNC_8(VAR_4, &VAR_11, ((void*)0));


 FUNC_8(VAR_3, &VAR_12, ((void*)0));

 while (VAR_14 < VAR_6) {
  VAR_15 = FUNC_1();

  if (VAR_15 == 0) {

   FUNC_9(FUNC_10(((void*)0)) + FUNC_3());
   if (VAR_5 & VAR_1) {
    if (FUNC_6(2))
     FUNC_5();
   }
   FUNC_7(VAR_4);
   FUNC_0(0);
  } else {
   FUNC_11(VAR_15, &VAR_13, 0);
  }
  if (!(VAR_5 & VAR_0))
   VAR_14++;
 }


 if (VAR_8) {
  FUNC_2(VAR_8);
  VAR_8 = ((void*)0);
 }

 return ((void*)0);
}
