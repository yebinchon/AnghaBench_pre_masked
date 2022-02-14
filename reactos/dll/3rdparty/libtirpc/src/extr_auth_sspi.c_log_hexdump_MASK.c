
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef char u_char ;
typedef int bool_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(bool_t VAR_1, const u_char *VAR_2, const u_char *VAR_3,
                    int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;

    if (!VAR_1) return;

 FUNC_2(VAR_0, "%04x: %s (len=%d)\n", FUNC_0(), VAR_2, VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6 += 0x10) {
  FUNC_2(VAR_0, "  %04x: ", (u_int)(VAR_6 + VAR_5));
  VAR_8 = VAR_4 - VAR_6;
  VAR_8 = VAR_8 > 16 ? 16 : VAR_8;

  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   if ((VAR_7 % 2) == 1)
    FUNC_2(VAR_0, "%02x ", (u_int) VAR_3[VAR_6+VAR_7]);
   else
    FUNC_2(VAR_0, "%02x", (u_int) VAR_3[VAR_6+VAR_7]);
  }
  for (; VAR_7 < 16; VAR_7++) {
   if ((VAR_7 % 2) == 1) FUNC_2(VAR_0, "   ");
   else FUNC_2(VAR_0, "  ");
  }
  FUNC_2(VAR_0, " ");

  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   VAR_9 = VAR_3[VAR_6+VAR_7];
   VAR_9 = FUNC_3(VAR_9) ? VAR_9 : '.';
   FUNC_2(VAR_0, "%c", VAR_9);
  }
  FUNC_2(VAR_0, "\n");
 }
    FUNC_1(VAR_0);
}
