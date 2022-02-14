
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int LPARAM ;
typedef int * HWND ;


 int * FUNC_0 (int,int *,int,int ,int ,int,int,int *,int *,int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int,char*,int,int) ;

__attribute__((used)) static void FUNC_8(void)
{
  int VAR_9, VAR_10;
  const char VAR_11[] = "aa\n"
      "this is a long line of text that should be longer than the "
      "control's width\n"
      "cc\n"
      "dd\n"
      "ee\n"
      "ff\n"
      "gg\n"
      "hh\n";




  HWND VAR_12 = FUNC_0(VAR_2, ((void*)0),
                                   VAR_1|VAR_5|VAR_4|VAR_7|VAR_6,
                                   0, 0, 200, 80, ((void*)0), ((void*)0), VAR_8, ((void*)0));
  FUNC_7(VAR_12 != ((void*)0), "class: %s, error: %d\n", VAR_2, (int) FUNC_2());


  FUNC_3(VAR_12, VAR_0, 0, 0);

  FUNC_3(VAR_12, VAR_3, 0, (LPARAM)VAR_11);


  FUNC_5(VAR_12, 3);
  VAR_9 = FUNC_4(VAR_12);
  FUNC_3(VAR_12, VAR_0, 0, 0);
  VAR_10 = FUNC_4(VAR_12);
  FUNC_7(VAR_9 != VAR_10, "%d == %d\n", VAR_9, VAR_10);


  FUNC_6(VAR_12, sizeof(VAR_11) - 1);
  FUNC_5(VAR_12, -3);
  VAR_9 = FUNC_4(VAR_12);
  FUNC_3(VAR_12, VAR_0, 0, 0);
  VAR_10 = FUNC_4(VAR_12);
  FUNC_7(VAR_9 != VAR_10, "%d == %d\n", VAR_9, VAR_10);


  FUNC_6(VAR_12, sizeof(VAR_11) - 2);
  VAR_9 = FUNC_4(VAR_12);
  FUNC_3(VAR_12, VAR_0, 0, 0);
  VAR_10 = FUNC_4(VAR_12);
  FUNC_7(VAR_9 == VAR_10, "%d != %d\n", VAR_9, VAR_10);


  FUNC_5(VAR_12, -1);
  VAR_9 = FUNC_4(VAR_12);
  FUNC_3(VAR_12, VAR_0, 0, 0);
  VAR_10 = FUNC_4(VAR_12);
  FUNC_7(VAR_9 == VAR_10, "%d != %d\n", VAR_9, VAR_10);

  FUNC_1(VAR_12);
}
