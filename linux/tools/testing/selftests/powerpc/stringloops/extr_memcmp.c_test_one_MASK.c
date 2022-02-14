
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*,unsigned long) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*,unsigned long) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_4(char *VAR_1, char *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  for (VAR_7 = VAR_4; VAR_7 < (VAR_5 - VAR_6); VAR_7++) {
   int VAR_8, VAR_9;
   unsigned long VAR_10;

   VAR_9 = FUNC_1(VAR_1+VAR_6, VAR_2+VAR_6, VAR_7);
   VAR_8 = FUNC_3(VAR_1+VAR_6, VAR_2+VAR_6, VAR_7);

   if (((VAR_8 ^ VAR_9) < 0) &&
    ((VAR_8 | VAR_9) != 0)) {
    FUNC_2("memcmp returned %d, should have returned %d (offset %ld size %ld)\n", VAR_8, VAR_9, VAR_6, VAR_7);

    for (VAR_10 = VAR_6; VAR_10 < VAR_6+VAR_7; VAR_10++)
     FUNC_2("%02x ", VAR_1[VAR_10]);
    FUNC_2("\n");

    for (VAR_10 = VAR_6; VAR_10 < VAR_6+VAR_7; VAR_10++)
     FUNC_2("%02x ", VAR_2[VAR_10]);
    FUNC_2("\n");
    FUNC_0();
   }

   if (VAR_0 != 0) {
    FUNC_2("vmx enter/exit not paired.(offset:%ld size:%ld s1:%p s2:%p vc:%d\n",
     VAR_6, VAR_7, VAR_1, VAR_2, VAR_0);
    FUNC_2("\n");
    FUNC_0();
   }
  }
 }
}
