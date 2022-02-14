
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int LONG ;
typedef int IUnknown ;
typedef int ITextRange ;
typedef int ITextFont ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;
typedef char CHAR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int,int **) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (int *,int **,int **,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int *,int **,int **,int *) ;

__attribute__((used)) static void FUNC_10(void)
{
  HWND VAR_3;
  IRichEditOle *VAR_4 = ((void*)0);
  ITextDocument *VAR_5 = ((void*)0);
  ITextRange *VAR_6 = ((void*)0);
  ITextFont *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
  HRESULT VAR_9;
  int VAR_10, VAR_11;
  int VAR_12;
  static const CHAR VAR_13[] = "TestSomeText";
  LONG VAR_14;

  FUNC_6(&VAR_3, &VAR_4, &VAR_5, ((void*)0));
  FUNC_5(VAR_3, VAR_2, 0, (LPARAM)VAR_13);

  VAR_10 = 4, VAR_11 = 4;
  FUNC_0(VAR_5, VAR_10, VAR_11, &VAR_6);
  VAR_12 = FUNC_7((IUnknown *)VAR_6);
  FUNC_8(VAR_12 == 1, "got wrong ref count: %d\n", VAR_12);

  VAR_9 = FUNC_3(VAR_6, &VAR_7);
  FUNC_8(VAR_9 == VAR_1, "ITextRange_GetFont\n");
  VAR_12 = FUNC_7((IUnknown *)VAR_7);
  FUNC_8(VAR_12 == 1, "got wrong ref count: %d\n", VAR_12);
  VAR_12 = FUNC_7((IUnknown *)VAR_6);
  FUNC_8(VAR_12 == 2, "got wrong ref count: %d\n", VAR_12);

  VAR_9 = FUNC_3(VAR_6, &VAR_8);
  FUNC_8(VAR_9 == VAR_1, "ITextRange_GetFont\n");
  FUNC_8(VAR_8 != VAR_7, "A new pointer should be return\n");
  VAR_12 = FUNC_7((IUnknown *)VAR_8);
  FUNC_8(VAR_12 == 1, "got wrong ref count: %d\n", VAR_12);
  FUNC_2(VAR_8);
  VAR_12 = FUNC_7((IUnknown *)VAR_6);
  FUNC_8(VAR_12 == 2, "got wrong ref count: %d\n", VAR_12);

  FUNC_4(VAR_6);
  FUNC_9(&VAR_3, &VAR_4, &VAR_5, ((void*)0));

  VAR_9 = FUNC_1(VAR_7, &VAR_14);
  FUNC_8(VAR_9 == VAR_0, "ITextFont after ITextDocument destroyed\n");

  FUNC_2(VAR_7);
}
