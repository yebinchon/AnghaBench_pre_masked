
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned short) ;
 int FUNC_2 (unsigned short) ;

__attribute__((used)) static void FUNC_3(unsigned short VAR_0)
{
 if (!FUNC_2(VAR_0)) {
  FUNC_1("[FAIL]\toutb to 0x%02hx failed\n", VAR_0);
  FUNC_0(1);
 }

 FUNC_1("[OK]\toutb to 0x%02hx worked\n", VAR_0);
}
