
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef scalar_t__ LONG ;
typedef int ITextRange ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;
typedef char CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,scalar_t__,int **) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *,int **,int **,int *) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int *,int **,int **,int *) ;

__attribute__((used)) static void FUNC_9(void)
{
  HWND VAR_4;
  IRichEditOle *VAR_5 = ((void*)0);
  ITextDocument *VAR_6 = ((void*)0);
  ITextRange *VAR_7 = ((void*)0);
  ITextRange *VAR_8 = ((void*)0);
  HRESULT VAR_9;
  LONG VAR_10, VAR_11, VAR_12, VAR_13;
  static const CHAR VAR_14[] = "TestSomeText";

  FUNC_6(&VAR_4, &VAR_5, &VAR_6, ((void*)0));
  FUNC_5(VAR_4, VAR_3, 0, (LPARAM)VAR_14);
  VAR_10 = 0, VAR_11 = 4;
  VAR_9 = FUNC_0(VAR_6, VAR_10, VAR_11, &VAR_7);
  FUNC_7(VAR_9 == VAR_2, "ITextDocument_Range fails 0x%x.\n", VAR_9);

  VAR_9 = FUNC_1(VAR_7, &VAR_8);
  FUNC_7(VAR_9 == VAR_2, "ITextRange_GetDuplicate\n");
  FUNC_7(VAR_8 != VAR_7, "A new pointer should be returned\n");
  VAR_9 = FUNC_3(VAR_8, &VAR_12);
  FUNC_7(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_12 == VAR_10, "got wrong value: %d\n", VAR_12);
  VAR_9 = FUNC_2(VAR_8, &VAR_13);
  FUNC_7(VAR_9 == VAR_2, "got 0x%08x\n", VAR_9);
  FUNC_7(VAR_13 == VAR_11, "got wrong value: %d\n", VAR_13);

  FUNC_4(VAR_8);

  VAR_9 = FUNC_1(VAR_7, ((void*)0));
  FUNC_7(VAR_9 == VAR_1, "ITextRange_GetDuplicate\n");

  FUNC_8(&VAR_4, &VAR_5, &VAR_6, ((void*)0));

  VAR_9 = FUNC_1(VAR_7, ((void*)0));
  FUNC_7(VAR_9 == VAR_0, "got 0x%08x\n", VAR_9);

  VAR_9 = FUNC_1(VAR_7, &VAR_8);
  FUNC_7(VAR_9 == VAR_0, "got 0x%08x\n", VAR_9);

  FUNC_4(VAR_7);
}
