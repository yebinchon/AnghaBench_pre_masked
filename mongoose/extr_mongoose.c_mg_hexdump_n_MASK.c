
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (char*,int ,char*,...) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, int VAR_1, char *VAR_2, int VAR_3,
                        int VAR_4) {
  const unsigned char *VAR_5 = (const unsigned char *) VAR_0;
  char VAR_6[17] = "";
  int VAR_7, VAR_8, VAR_9 = 0;

  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
    VAR_8 = VAR_7 % 16;
    if (VAR_8 == 0) {
      if (VAR_7 > 0) VAR_9 += FUNC_1(VAR_2 + VAR_9, FUNC_0(VAR_3 - VAR_9, 0), "  %s\n", VAR_6);
      VAR_9 += FUNC_1(VAR_2 + VAR_9, FUNC_0(VAR_3 - VAR_9, 0), "%04x ", VAR_7 + VAR_4);
    }
    if (VAR_3 - VAR_9 < 0) {
      return VAR_9;
    }
    VAR_9 += FUNC_1(VAR_2 + VAR_9, FUNC_0(VAR_3 - VAR_9, 0), " %02x", VAR_5[VAR_7]);
    VAR_6[VAR_8] = VAR_5[VAR_7] < 0x20 || VAR_5[VAR_7] > 0x7e ? '.' : VAR_5[VAR_7];
    VAR_6[VAR_8 + 1] = '\0';
  }

  while (VAR_7++ % 16) VAR_9 += FUNC_1(VAR_2 + VAR_9, FUNC_0(VAR_3 - VAR_9, 0), "%s", "   ");
  VAR_9 += FUNC_1(VAR_2 + VAR_9, FUNC_0(VAR_3 - VAR_9, 0), "  %s\n", VAR_6);

  return VAR_9;
}
