
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
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_9(void)
{
  static const CHAR VAR_7[] = "TestSomeText";
  IRichEditOle *VAR_8 = ((void*)0);
  ITextDocument *VAR_9 = ((void*)0);
  ITextSelection *VAR_10;
  ITextRange *VAR_11;
  LONG VAR_12;
  HRESULT VAR_13;
  HWND VAR_14;

  FUNC_6(&VAR_14, &VAR_8, &VAR_9, &VAR_10);
  FUNC_5(VAR_14, VAR_4, 0, (LPARAM)VAR_7);
  FUNC_5(VAR_14, VAR_1, 1, 2);

  VAR_13 = FUNC_0(VAR_9, 0, 4, &VAR_11);
  FUNC_7(VAR_13 == VAR_3, "got 0x%08x\n", VAR_13);

  VAR_13 = FUNC_1(VAR_11, ((void*)0));
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);

  VAR_12 = VAR_5;
  VAR_13 = FUNC_1(VAR_11, &VAR_12);
  FUNC_7(VAR_13 == VAR_3, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_12 == VAR_6, "got %d\n", VAR_12);

  VAR_13 = FUNC_3(VAR_10, ((void*)0));
  FUNC_7(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);

  VAR_12 = VAR_5;
  VAR_13 = FUNC_3(VAR_10, &VAR_12);
  FUNC_7(VAR_13 == VAR_3, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_12 == VAR_6, "got %d\n", VAR_12);

  FUNC_8(&VAR_14, &VAR_8, &VAR_9, ((void*)0));

  VAR_13 = FUNC_1(VAR_11, ((void*)0));
  FUNC_7(VAR_13 == VAR_0, "got 0x%08x\n", VAR_13);

  VAR_12 = 123;
  VAR_13 = FUNC_1(VAR_11, &VAR_12);
  FUNC_7(VAR_13 == VAR_0, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_12 == 123, "got %d\n", VAR_12);

  VAR_13 = FUNC_3(VAR_10, ((void*)0));
  FUNC_7(VAR_13 == VAR_0, "got 0x%08x\n", VAR_13);

  VAR_12 = 123;
  VAR_13 = FUNC_3(VAR_10, &VAR_12);
  FUNC_7(VAR_13 == VAR_0, "got 0x%08x\n", VAR_13);
  FUNC_7(VAR_12 == 123, "got %d\n", VAR_12);

  FUNC_2(VAR_11);
  FUNC_4(VAR_10);
}
