
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const BYTE *VAR_0, const BYTE *VAR_1, int VAR_2)
{
  int VAR_3, VAR_4;

  VAR_2 /= 8;

  for (VAR_3 = 0; VAR_3 < VAR_2 * 2; VAR_3++)
  {
      FUNC_0("|");
      for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
          FUNC_0("%c%c", VAR_0[VAR_4] & 0xf0 ? 'X' : ' ', VAR_0[VAR_4] & 0xf ? 'X' : ' ');
      FUNC_0(" -- ");
      for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
          FUNC_0("%c%c", VAR_1[VAR_4] & 0xf0 ? 'X' : ' ', VAR_1[VAR_4] & 0xf ? 'X' : ' ');
      FUNC_0("|\n");
      VAR_0 += VAR_2 * 4;
      VAR_1 += VAR_2 * 4;
  }
  FUNC_0("\n");
}
