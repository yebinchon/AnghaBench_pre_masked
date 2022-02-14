
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (char*,char const*,...) ;
 int VAR_4 ;

void FUNC_4(int VAR_5, const char *VAR_6[])
{
 int VAR_7;

 if (VAR_5 > 1) {
  VAR_7 = FUNC_0(VAR_6[1]);
  if (VAR_7 < 0) {
   FUNC_3("%s: bad debugging value.\n", VAR_6[1]);
   (void) FUNC_1(VAR_4);
   VAR_1 = -1;
   return;
  }
 } else
  VAR_7 = !VAR_2;
 VAR_2 = VAR_7;
 if (VAR_2)
  VAR_3 |= VAR_0;
 else
  VAR_3 &= ~VAR_0;
 FUNC_3("Debugging %s (debug=%d).\n", FUNC_2(VAR_2), VAR_2);
 (void) FUNC_1(VAR_4);
 VAR_1 = VAR_2 > 0;
}
