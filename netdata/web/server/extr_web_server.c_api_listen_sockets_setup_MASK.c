
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(void) {
 int VAR_3 = FUNC_2(&VAR_1);

 if(!VAR_3)
  FUNC_1("LISTENER: Cannot listen on any API socket. Exiting...");

 if(FUNC_3(VAR_2 & VAR_0))
  FUNC_0();

 return;
}
