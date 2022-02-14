
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int LONG ;
typedef int ITextSelection ;
typedef int ITextRange ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef int HRESULT ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int,int **) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,int,int) ;
 int VAR_4 ;
 int FUNC_6 (int *,int **,int **,int **) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int *,int **,int **,int *) ;

__attribute__((used)) static void FUNC_9(void)
{
  static const CHAR VAR_5[] = "TestSomeText";
  IRichEditOle *VAR_6 = ((void*)0);
  ITextDocument *VAR_7 = ((void*)0);
  ITextSelection *VAR_8;
  ITextRange *VAR_9;
  LONG VAR_10;
  HRESULT VAR_11;
  HWND VAR_12;

  FUNC_6(&VAR_12, &VAR_6, &VAR_7, &VAR_8);
  FUNC_5(VAR_12, VAR_4, 0, (LPARAM)VAR_5);
  FUNC_5(VAR_12, VAR_1, 1, 2);

  VAR_11 = FUNC_0(VAR_7, 0, 4, &VAR_9);
  FUNC_7(VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);

  VAR_11 = FUNC_1(VAR_9, ((void*)0));
  FUNC_7(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);

  VAR_10 = 0;
  VAR_11 = FUNC_1(VAR_9, &VAR_10);
  FUNC_7(VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);
  FUNC_7(VAR_10 == 13, "got %d\n", VAR_10);

  VAR_11 = FUNC_3(VAR_8, ((void*)0));
  FUNC_7(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);

  VAR_10 = 0;
  VAR_11 = FUNC_3(VAR_8, &VAR_10);
  FUNC_7(VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);
  FUNC_7(VAR_10 == 13, "got %d\n", VAR_10);

  FUNC_5(VAR_12, VAR_4, 0, (LPARAM)"");

  VAR_10 = 0;
  VAR_11 = FUNC_1(VAR_9, &VAR_10);
  FUNC_7(VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);
  FUNC_7(VAR_10 == 1, "got %d\n", VAR_10);

  VAR_10 = 0;
  VAR_11 = FUNC_3(VAR_8, &VAR_10);
  FUNC_7(VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);
  FUNC_7(VAR_10 == 1, "got %d\n", VAR_10);

  FUNC_8(&VAR_12, &VAR_6, &VAR_7, ((void*)0));

  VAR_11 = FUNC_1(VAR_9, ((void*)0));
  FUNC_7(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

  VAR_10 = 100;
  VAR_11 = FUNC_1(VAR_9, &VAR_10);
  FUNC_7(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);
  FUNC_7(VAR_10 == 100, "got %d\n", VAR_10);

  VAR_11 = FUNC_3(VAR_8, ((void*)0));
  FUNC_7(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

  VAR_10 = 100;
  VAR_11 = FUNC_3(VAR_8, &VAR_10);
  FUNC_7(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);
  FUNC_7(VAR_10 == 100, "got %d\n", VAR_10);

  FUNC_4(VAR_8);
  FUNC_2(VAR_9);
}
