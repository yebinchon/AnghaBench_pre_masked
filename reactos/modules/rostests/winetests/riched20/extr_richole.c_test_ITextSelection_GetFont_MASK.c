
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int LONG ;
typedef int IUnknown ;
typedef int ITextSelection ;
typedef int ITextFont ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;
typedef char CHAR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ,int,int) ;
 int VAR_3 ;
 int FUNC_4 (int *,int **,int **,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *,int **,int **,int **) ;

__attribute__((used)) static void FUNC_8(void)
{
  HWND VAR_4;
  IRichEditOle *VAR_5 = ((void*)0);
  ITextDocument *VAR_6 = ((void*)0);
  ITextSelection *VAR_7 = ((void*)0);
  ITextFont *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
  HRESULT VAR_10;
  int VAR_11, VAR_12;
  int VAR_13;
  static const CHAR VAR_14[] = "TestSomeText";
  LONG VAR_15;

  FUNC_4(&VAR_4, &VAR_5, &VAR_6, &VAR_7);
  FUNC_3(VAR_4, VAR_3, 0, (LPARAM)VAR_14);

  VAR_11 = 4, VAR_12 = 4;
  FUNC_3(VAR_4, VAR_1, VAR_11, VAR_12);
  VAR_13 = FUNC_5((IUnknown *)VAR_7);
  FUNC_6(VAR_13 == 2, "got wrong ref count: %d\n", VAR_13);

  VAR_10 = FUNC_2(VAR_7, &VAR_8);
  FUNC_6(VAR_10 == VAR_2, "ITextSelection_GetFont\n");
  VAR_13 = FUNC_5((IUnknown *)VAR_8);
  FUNC_6(VAR_13 == 1, "got wrong ref count: %d\n", VAR_13);
  VAR_13 = FUNC_5((IUnknown *)VAR_7);
  FUNC_6(VAR_13 == 3, "got wrong ref count: %d\n", VAR_13);

  VAR_10 = FUNC_2(VAR_7, &VAR_9);
  FUNC_6(VAR_10 == VAR_2, "ITextSelection_GetFont\n");
  FUNC_6(VAR_9 != VAR_8, "A new pointer should be return\n");
  VAR_13 = FUNC_5((IUnknown *)VAR_9);
  FUNC_6(VAR_13 == 1, "got wrong ref count: %d\n", VAR_13);
  FUNC_1(VAR_9);
  VAR_13 = FUNC_5((IUnknown *)VAR_7);
  FUNC_6(VAR_13 == 3, "got wrong ref count: %d\n", VAR_13);

  FUNC_7(&VAR_4, &VAR_5, &VAR_6, &VAR_7);

  VAR_10 = FUNC_0(VAR_8, &VAR_15);
  FUNC_6(VAR_10 == VAR_0, "ITextFont after ITextDocument destroyed\n");

  FUNC_1(VAR_8);
}
