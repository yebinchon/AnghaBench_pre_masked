
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(unsigned long long *VAR_0, int VAR_1, int VAR_2)
{
 unsigned VAR_3, VAR_4 = 1, VAR_5 = 0;

 VAR_1 /= 8;
 VAR_2 = (VAR_2 + 7) / 8;

 for (VAR_3 = VAR_1; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_4) {
   FUNC_0("%04x: ", VAR_3 * 8);
   VAR_4 = 0;
  }
  FUNC_0("%016llx", VAR_0[VAR_3]);
  VAR_5++;
  if ((VAR_5 & 3) == 0) {
   FUNC_0("\n");
   VAR_4 = 1;
  } else {
   FUNC_0(" ");
  }
 }

 if (!VAR_4)
  FUNC_0("\n");
}
