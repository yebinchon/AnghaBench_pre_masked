
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int offset_test1 ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*,int,int,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
  HWND VAR_3 = FUNC_2(((void*)0));
  const char * VAR_4 =
        "richedit1\r"
        "richedit1\n"
        "richedit1\r\n"
        "richedit1";
  int VAR_5[10][2] = {
        {0, 9},
        {5, 9},
        {10, 9},
        {15, 9},
        {20, 9},
        {25, 9},
        {30, 9},
        {35, 9},
        {40, 0},
        {45, 0},
  };
  int VAR_6;
  LRESULT VAR_7;

  FUNC_1(VAR_3, VAR_1, 0, (LPARAM)VAR_4);

  for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {
    VAR_7 = FUNC_1(VAR_3, VAR_0, VAR_5[VAR_6][0], 0);
    FUNC_3(VAR_7 == VAR_5[VAR_6][1], "Length of line at offset %d is %ld, expected %d\n",
        VAR_5[VAR_6][0], VAR_7, VAR_5[VAR_6][1]);
  }


  if (!VAR_2)
    FUNC_4("Skip multibyte character tests on non-Japanese platform\n");
  else
  {
    const char *VAR_8 =
          "wine\n"
          "richedit\x8e\xf0\n"
          "wine";
    int VAR_9[3][2] = {
           {0, 4},
           {5, 9},
           {15, 4},
    };
    FUNC_1(VAR_3, VAR_1, 0, (LPARAM)VAR_8);
    for (VAR_6 = 0; VAR_6 < sizeof(VAR_9)/sizeof(VAR_9[0]); VAR_6++) {
      VAR_7 = FUNC_1(VAR_3, VAR_0, VAR_9[VAR_6][0], 0);
      FUNC_3(VAR_7 == VAR_9[VAR_6][1], "Length of line at offset %d is %ld, expected %d\n",
         VAR_9[VAR_6][0], VAR_7, VAR_9[VAR_6][1]);
    }
  }

  FUNC_0(VAR_3);
}
