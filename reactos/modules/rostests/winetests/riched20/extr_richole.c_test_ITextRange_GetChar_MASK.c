
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef char LONG ;
typedef int ITextRange ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef char HRESULT ;
typedef char CHAR ;


 char VAR_0 ;
 char VAR_1 ;
 char FUNC_0 (int *,int,int,int **) ;
 char FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 char VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,int **,int **,int *) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int *,int **,int **,int *) ;

__attribute__((used)) static void FUNC_7(void)
{
  HWND VAR_4;
  IRichEditOle *VAR_5 = ((void*)0);
  ITextDocument *VAR_6 = ((void*)0);
  ITextRange *VAR_7 = ((void*)0);
  HRESULT VAR_8;
  LONG VAR_9;
  int VAR_10, VAR_11;
  static const CHAR VAR_12[] = "TestSomeText";

  VAR_10 = 0, VAR_11 = 4;
  FUNC_4(&VAR_4, &VAR_5, &VAR_6, ((void*)0));
  FUNC_3(VAR_4, VAR_3, 0, (LPARAM)VAR_12);
  VAR_8 = FUNC_0(VAR_6, VAR_10, VAR_11, &VAR_7);
  FUNC_5(VAR_8 == VAR_2, "got 0x%08x\n", VAR_8);
  VAR_9 = 0xdeadbeef;
  VAR_8 = FUNC_1(VAR_7, &VAR_9);
  FUNC_5(VAR_8 == VAR_2, "ITextRange_GetChar\n");
  FUNC_5(VAR_9 == 'T', "got wrong char: %c\n", VAR_9);
  FUNC_2(VAR_7);
  FUNC_6(&VAR_4, &VAR_5, &VAR_6, ((void*)0));

  VAR_10 = 0, VAR_11 = 0;
  FUNC_4(&VAR_4, &VAR_5, &VAR_6, ((void*)0));
  FUNC_3(VAR_4, VAR_3, 0, (LPARAM)VAR_12);
  VAR_8 = FUNC_0(VAR_6, VAR_10, VAR_11, &VAR_7);
  FUNC_5(VAR_8 == VAR_2, "got 0x%08x\n", VAR_8);
  VAR_9 = 0xdeadbeef;
  VAR_8 = FUNC_1(VAR_7, &VAR_9);
  FUNC_5(VAR_8 == VAR_2, "ITextRange_GetChar\n");
  FUNC_5(VAR_9 == 'T', "got wrong char: %c\n", VAR_9);
  FUNC_2(VAR_7);
  FUNC_6(&VAR_4, &VAR_5, &VAR_6, ((void*)0));

  VAR_10 = 12, VAR_11 = 12;
  FUNC_4(&VAR_4, &VAR_5, &VAR_6, ((void*)0));
  FUNC_3(VAR_4, VAR_3, 0, (LPARAM)VAR_12);
  VAR_8 = FUNC_0(VAR_6, VAR_10, VAR_11, &VAR_7);
  FUNC_5(VAR_8 == VAR_2, "got 0x%08x\n", VAR_8);
  VAR_9 = 0xdeadbeef;
  VAR_8 = FUNC_1(VAR_7, &VAR_9);
  FUNC_5(VAR_8 == VAR_2, "ITextRange_GetChar\n");
  FUNC_5(VAR_9 == '\r', "got wrong char: %c\n", VAR_9);
  FUNC_2(VAR_7);
  FUNC_6(&VAR_4, &VAR_5, &VAR_6, ((void*)0));

  VAR_10 = 13, VAR_11 = 13;
  FUNC_4(&VAR_4, &VAR_5, &VAR_6, ((void*)0));
  FUNC_3(VAR_4, VAR_3, 0, (LPARAM)VAR_12);
  VAR_8 = FUNC_0(VAR_6, VAR_10, VAR_11, &VAR_7);
  FUNC_5(VAR_8 == VAR_2, "got 0x%08x\n", VAR_8);
  VAR_9 = 0xdeadbeef;
  VAR_8 = FUNC_1(VAR_7, &VAR_9);
  FUNC_5(VAR_8 == VAR_2, "ITextRange_GetChar\n");
  FUNC_5(VAR_9 == '\r', "got wrong char: %c\n", VAR_9);
  FUNC_2(VAR_7);
  FUNC_6(&VAR_4, &VAR_5, &VAR_6, ((void*)0));

  FUNC_4(&VAR_4, &VAR_5, &VAR_6, ((void*)0));
  FUNC_3(VAR_4, VAR_3, 0, (LPARAM)VAR_12);
  VAR_10 = 12, VAR_11 = 12;
  VAR_8 = FUNC_0(VAR_6, VAR_10, VAR_11, &VAR_7);
  FUNC_5(VAR_8 == VAR_2, "got 0x%08x\n", VAR_8);
  VAR_8 = FUNC_1(VAR_7, ((void*)0));
  FUNC_5(VAR_8 == VAR_1, "ITextRange_GetChar\n");

  FUNC_6(&VAR_4, &VAR_5, &VAR_6, ((void*)0));

  VAR_8 = FUNC_1(VAR_7, ((void*)0));
  FUNC_5(VAR_8 == VAR_0, "got 0x%08x\n", VAR_8);

  VAR_8 = FUNC_1(VAR_7, &VAR_9);
  FUNC_5(VAR_8 == VAR_0, "got 0x%08x\n", VAR_8);

  FUNC_2(VAR_7);
}
