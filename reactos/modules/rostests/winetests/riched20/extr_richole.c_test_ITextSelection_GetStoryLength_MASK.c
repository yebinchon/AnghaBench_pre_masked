
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int LONG ;
typedef int ITextSelection ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;
typedef char CHAR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,int **,int **,int **) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int *,int **,int **,int **) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(void)
{
  HWND VAR_4;
  IRichEditOle *VAR_5 = ((void*)0);
  ITextDocument *VAR_6 = ((void*)0);
  ITextSelection *VAR_7 = ((void*)0);
  HRESULT VAR_8;
  LONG VAR_9;
  static const CHAR VAR_10[] = "TestSomeText";
  int VAR_11 = FUNC_5(VAR_10) + 1;

  FUNC_2(&VAR_4, &VAR_5, &VAR_6, &VAR_7);
  FUNC_1(VAR_4, VAR_3, 0, (LPARAM)VAR_10);

  VAR_8 = FUNC_0(VAR_7, &VAR_9);
  FUNC_3(VAR_8 == VAR_2, "ITextSelection_GetStoryLength\n");
  FUNC_3(VAR_9 == VAR_11, "got wrong length: %d\n", VAR_9);

  FUNC_1(VAR_4, VAR_0, 1, 2);
  VAR_8 = FUNC_0(VAR_7, &VAR_9);
  FUNC_3(VAR_8 == VAR_2, "ITextSelection_GetStoryLength\n");
  FUNC_3(VAR_9 == VAR_11, "got wrong length: %d\n", VAR_9);

  VAR_8 = FUNC_0(VAR_7, ((void*)0));
  FUNC_3(VAR_8 == VAR_1, "ITextSelection_GetStoryLength\n");

  FUNC_4(&VAR_4, &VAR_5, &VAR_6, &VAR_7);
}
