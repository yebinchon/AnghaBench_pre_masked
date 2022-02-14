
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int LONG ;
typedef int ITextRange ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;
typedef char CHAR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ,int **) ;
 scalar_t__ FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int **,int **,int *) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *,int **,int **,int *) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(void)
{
  HWND VAR_3;
  IRichEditOle *VAR_4 = ((void*)0);
  ITextDocument *VAR_5 = ((void*)0);
  ITextRange *VAR_6 = ((void*)0);
  HRESULT VAR_7;
  LONG VAR_8;
  static const CHAR VAR_9[] = "TestSomeText";
  int VAR_10 = FUNC_8(VAR_9) + 1;

  FUNC_5(&VAR_3, &VAR_4, &VAR_5, ((void*)0));
  FUNC_4(VAR_3, VAR_2, 0, (LPARAM)VAR_9);
  FUNC_0(VAR_5, 0, 0, &VAR_6);

  VAR_7 = FUNC_1(VAR_6, &VAR_8);
  FUNC_6(VAR_7 == VAR_1, "ITextRange_GetStoryLength\n");
  FUNC_6(VAR_8 == VAR_10, "got wrong length: %d\n", VAR_8);

  FUNC_3(VAR_6, 1, 2);
  VAR_7 = FUNC_1(VAR_6, &VAR_8);
  FUNC_6(VAR_7 == VAR_1, "ITextRange_GetStoryLength\n");
  FUNC_6(VAR_8 == VAR_10, "got wrong length: %d\n", VAR_8);

  VAR_7 = FUNC_1(VAR_6, ((void*)0));
  FUNC_6(VAR_7 == VAR_0, "ITextRange_GetStoryLength\n");

  FUNC_2(VAR_6);
  FUNC_7(&VAR_3, &VAR_4, &VAR_5, ((void*)0));
}
