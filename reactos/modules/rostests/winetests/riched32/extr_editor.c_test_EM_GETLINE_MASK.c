
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int line; int buffer_len; scalar_t__ text; scalar_t__ broken_text; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,int,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,int,int const) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*,scalar_t__) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int const) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
  int VAR_6;
  HWND VAR_7 = FUNC_6(((void*)0));
  static const int VAR_8 = 1024;
  char VAR_9[1024], VAR_10[1024];
  LRESULT VAR_11;
  const char VAR_12[] = "foo bar\r\n"
      "\r"
      "\r\r\n"
      "bar\n";
  BOOL VAR_13 = VAR_2;
  BOOL VAR_14 = FUNC_3();

  FUNC_2(VAR_7, VAR_4, 0, (LPARAM)VAR_12);
  VAR_11 = FUNC_2(VAR_7, VAR_1, 0, 0);
  if (VAR_11 == 4)
  {
    VAR_13 = VAR_3;
    FUNC_11("Win9x, WinME and NT4 handle '\\r only' differently\n");
  }

  FUNC_4(VAR_10, 0xBB, VAR_8);
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++)
  {
    int VAR_15, VAR_16, VAR_17;
    char VAR_18[1024];

    if (VAR_5[VAR_6].line >= VAR_11)
      continue;

    if (VAR_13 && VAR_5[VAR_6].broken_text)

      FUNC_8(VAR_18, VAR_5[VAR_6].broken_text);
    else
      FUNC_8(VAR_18, VAR_5[VAR_6].text);

    VAR_16 = FUNC_5(VAR_5[VAR_6].buffer_len, FUNC_9(VAR_18));

    VAR_17 = FUNC_5(VAR_5[VAR_6].buffer_len, FUNC_9(VAR_18) + (VAR_13 ? 0 : 1));

    FUNC_4(VAR_9, 0xBB, VAR_8);
    *(WORD *) VAR_9 = VAR_5[VAR_6].buffer_len;



    VAR_15 = FUNC_2(VAR_7, VAR_0, VAR_5[VAR_6].line, (LPARAM)VAR_9);
    FUNC_7(VAR_15 == VAR_16, "%d: %d!=%d\n", VAR_6, VAR_15,
       VAR_16);

    if (VAR_5[VAR_6].buffer_len == 0)
      FUNC_7(!VAR_9[0] && !VAR_9[1] && !FUNC_10(VAR_9+2, VAR_10+2, VAR_8-2),
         "buffer_len=0\n");
    else if (VAR_5[VAR_6].buffer_len == 1)
      FUNC_7(VAR_9[0] == VAR_18[0] && !VAR_9[1] &&
         !FUNC_10(VAR_9+2, VAR_10+2, VAR_8-2), "buffer_len=1\n");
    else
    {
      FUNC_7(!FUNC_10(VAR_9, VAR_18, VAR_17),
         "%d: expected_bytes_written=%d\n", VAR_6, VAR_17);
      if (! VAR_14 || VAR_17 == VAR_5[VAR_6].buffer_len)
        FUNC_7(!FUNC_10(VAR_9 + VAR_17, VAR_10
                    + VAR_17, VAR_8 - VAR_17),
           "%d: expected_bytes_written=%d\n", VAR_6, VAR_17);
      else
        FUNC_7(VAR_9[VAR_17] == 0 &&
           !FUNC_10(VAR_9 + VAR_17 + 1, VAR_10
                    + VAR_17 + 1, VAR_8 - (VAR_17 + 1)),
           "%d: expected_bytes_written=%d\n", VAR_6, VAR_17);
    }
  }

  FUNC_1(VAR_7);
}
