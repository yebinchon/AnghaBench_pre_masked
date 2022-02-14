
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef char LONG ;
typedef int ITextSelection ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef char HRESULT ;
typedef char CHAR ;


 char VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 char VAR_3 ;
 int FUNC_2 (int ,int ,int,int) ;
 int VAR_4 ;
 int FUNC_3 (int *,int **,int **,int **) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int *,int **,int **,int *) ;

__attribute__((used)) static void FUNC_6(void)
{
  HWND VAR_5;
  IRichEditOle *VAR_6 = ((void*)0);
  ITextDocument *VAR_7 = ((void*)0);
  ITextSelection *VAR_8 = ((void*)0);
  HRESULT VAR_9;
  LONG VAR_10;
  int VAR_11, VAR_12;
  static const CHAR VAR_13[] = "TestSomeText";

  FUNC_3(&VAR_5, &VAR_6, &VAR_7, &VAR_8);
  FUNC_2(VAR_5, VAR_4, 0, (LPARAM)VAR_13);

  VAR_11 = 0, VAR_12 = 4;
  FUNC_2(VAR_5, VAR_1, VAR_11, VAR_12);
  VAR_10 = 0xdeadbeef;
  VAR_9 = FUNC_0(VAR_8, &VAR_10);
  FUNC_4(VAR_9 == VAR_3, "ITextSelection_GetChar\n");
  FUNC_4(VAR_10 == 'T', "got wrong char: %c\n", VAR_10);

  VAR_11 = 0, VAR_12 = 0;
  FUNC_2(VAR_5, VAR_1, VAR_11, VAR_12);
  VAR_10 = 0xdeadbeef;
  VAR_9 = FUNC_0(VAR_8, &VAR_10);
  FUNC_4(VAR_9 == VAR_3, "ITextSelection_GetChar\n");
  FUNC_4(VAR_10 == 'T', "got wrong char: %c\n", VAR_10);

  VAR_11 = 12, VAR_12 = 12;
  FUNC_2(VAR_5, VAR_1, VAR_11, VAR_12);
  VAR_10 = 0xdeadbeef;
  VAR_9 = FUNC_0(VAR_8, &VAR_10);
  FUNC_4(VAR_9 == VAR_3, "ITextSelection_GetChar\n");
  FUNC_4(VAR_10 == '\r', "got wrong char: %c\n", VAR_10);

  VAR_11 = 13, VAR_12 = 13;
  FUNC_2(VAR_5, VAR_1, VAR_11, VAR_12);
  VAR_10 = 0xdeadbeef;
  VAR_9 = FUNC_0(VAR_8, &VAR_10);
  FUNC_4(VAR_9 == VAR_3, "ITextSelection_GetChar\n");
  FUNC_4(VAR_10 == '\r', "got wrong char: %c\n", VAR_10);

  VAR_9 = FUNC_0(VAR_8, ((void*)0));
  FUNC_4(VAR_9 == VAR_2, "ITextSelection_GetChar\n");

  FUNC_5(&VAR_5, &VAR_6, &VAR_7, ((void*)0));

  VAR_9 = FUNC_0(VAR_8, ((void*)0));
  FUNC_4(VAR_9 == VAR_0, "got 0x%08x\n", VAR_9);

  VAR_9 = FUNC_0(VAR_8, &VAR_10);
  FUNC_4(VAR_9 == VAR_0, "got 0x%08x\n", VAR_9);

  FUNC_1(VAR_8);
}
