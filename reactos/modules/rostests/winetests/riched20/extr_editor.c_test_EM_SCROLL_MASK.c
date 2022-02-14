
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_1 (int ,int ,int const,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_4(void)
{
  int VAR_3, VAR_4;
  int VAR_5;
  int VAR_6;
  HWND VAR_7 = FUNC_2(((void*)0));
  int VAR_8, VAR_9;


  FUNC_1(VAR_7, VAR_2, 0, (LPARAM)"a");
  VAR_6 = 0x00010000;
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
    static const int VAR_10[4] = { 129, 128, 131, 130 };

    VAR_5 = FUNC_1(VAR_7, VAR_1, VAR_10[VAR_3], 0);
    VAR_9 = FUNC_1(VAR_7, VAR_0, 0, 0);
    FUNC_3(VAR_6 == VAR_5, "EM_SCROLL improper return value returned (i == %d). "
       "Got 0x%08x, expected 0x%08x\n", VAR_3, VAR_5, VAR_6);
    FUNC_3(VAR_9 == 0, "EM_SCROLL improper scroll. scrolled to line %d, not 1 "
       "(i == %d)\n", VAR_9, VAR_3);
  }






  for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
    if (VAR_3 == 0)
      FUNC_1(VAR_7, VAR_2, 0, (LPARAM)"a\nb\nc\nd\ne");
    else
      FUNC_1(VAR_7, VAR_2, 0, (LPARAM)
                  "a LONG LINE LONG LINE LONG LINE LONG LINE LONG LINE "
                  "LONG LINE LONG LINE LONG LINE LONG LINE LONG LINE "
                  "LONG LINE \nb\nc\nd\ne");
    for (VAR_4 = 0; VAR_4 < 12; VAR_4++)
      FUNC_1(VAR_7, VAR_1, 128, 0);


    VAR_8 = FUNC_1(VAR_7, VAR_0, 0, 0);
    VAR_5 = FUNC_1(VAR_7, VAR_1, 129, 0);


    VAR_9 = FUNC_1(VAR_7, VAR_0, 0, 0);

    FUNC_3(((VAR_5 & 0xffffff00) == 0x00010000) &&
       ((VAR_5 & 0x000000ff) != 0x00000000),
       "EM_SCROLL page down didn't scroll by a small positive number of "
       "lines (r == 0x%08x)\n", VAR_5);
    FUNC_3(VAR_9 > VAR_8, "EM_SCROLL page down not functioning "
       "(line %d scrolled to line %d\n", VAR_8, VAR_9);

    VAR_8 = VAR_9;

    VAR_5 = FUNC_1(VAR_7, VAR_1, 128, 0);
    VAR_9 = FUNC_1(VAR_7, VAR_0, 0, 0);
    FUNC_3(((VAR_5 & 0xffffff00) == 0x0001ff00),
       "EM_SCROLL page up didn't scroll by a small negative number of lines "
       "(r == 0x%08x)\n", VAR_5);
    FUNC_3(VAR_9 < VAR_8, "EM_SCROLL page up not functioning (line "
       "%d scrolled to line %d\n", VAR_8, VAR_9);

    VAR_8 = VAR_9;

    VAR_5 = FUNC_1(VAR_7, VAR_1, 131, 0);

    VAR_9 = FUNC_1(VAR_7, VAR_0, 0, 0);

    FUNC_3(VAR_5 == 0x00010001, "EM_SCROLL line down didn't scroll by one line "
       "(r == 0x%08x)\n", VAR_5);
    FUNC_3(VAR_9 -1 == VAR_8, "EM_SCROLL line down didn't go down by "
       "1 line (%d scrolled to %d)\n", VAR_8, VAR_9);

    VAR_8 = VAR_9;

    VAR_5 = FUNC_1(VAR_7, VAR_1, 130, 0);

    VAR_9 = FUNC_1(VAR_7, VAR_0, 0, 0);

    FUNC_3(VAR_5 == 0x0001ffff, "EM_SCROLL line up didn't scroll by one line "
       "(r == 0x%08x)\n", VAR_5);
    FUNC_3(VAR_9 +1 == VAR_8, "EM_SCROLL line up didn't go up by 1 "
       "line (%d scrolled to %d)\n", VAR_8, VAR_9);

    VAR_8 = VAR_9;

    VAR_5 = FUNC_1(VAR_7, VAR_1,
                    130, 0);

    VAR_9 = FUNC_1(VAR_7, VAR_0, 0, 0);

    FUNC_3(VAR_5 == 0x00010000,
       "EM_SCROLL line up returned indicating movement (0x%08x)\n", VAR_5);
    FUNC_3(VAR_8 == VAR_9,
       "EM_SCROLL line up beyond top worked (%d)\n", VAR_9);

    VAR_8 = VAR_9;

    VAR_5 = FUNC_1(VAR_7, VAR_1,
                    128, 0);

    VAR_9 = FUNC_1(VAR_7, VAR_0, 0, 0);

    FUNC_3(VAR_5 == 0x00010000,
       "EM_SCROLL page up returned indicating movement (0x%08x)\n", VAR_5);
    FUNC_3(VAR_8 == VAR_9,
       "EM_SCROLL page up beyond top worked (%d)\n", VAR_9);

    for (VAR_4 = 0; VAR_4 < 12; VAR_4++)
      FUNC_1(VAR_7, VAR_1, 129, 0);
    VAR_8 = FUNC_1(VAR_7, VAR_0, 0, 0);
    VAR_5 = FUNC_1(VAR_7, VAR_1,
                    129, 0);
    VAR_9 = FUNC_1(VAR_7, VAR_0, 0, 0);

    FUNC_3(VAR_5 == 0x00010000,
       "EM_SCROLL page down returned indicating movement (0x%08x)\n", VAR_5);
    FUNC_3(VAR_8 == VAR_9,
       "EM_SCROLL page down beyond bottom worked (%d -> %d)\n",
       VAR_8, VAR_9);

    VAR_8 = FUNC_1(VAR_7, VAR_0, 0, 0);
    VAR_5 = FUNC_1(VAR_7, VAR_1, 131, 0);
    VAR_9 = FUNC_1(VAR_7, VAR_0, 0, 0);

    FUNC_3(VAR_5 == 0x00010000,
       "EM_SCROLL line down returned indicating movement (0x%08x)\n", VAR_5);
    FUNC_3(VAR_8 == VAR_9,
       "EM_SCROLL line down beyond bottom worked (%d -> %d)\n",
       VAR_8, VAR_9);
  }
  FUNC_0(VAR_7);
}
