
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_1;
 VAR_1 = 0;
 while (1) {
  if (!(FUNC_0(VAR_0) & 0x11))
   break;

  VAR_1++;
  if (VAR_1 > 0x10000) {
   FUNC_1
       ("WARNING: G2 FIFO appears to be blocked.\n");
   break;
  }
 }
}
