
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int ITextRange ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;
typedef char CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *,int,int,int ,int) ;
 int FUNC_5 (int *,int **,int **,int *) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (int *,int **,int **,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(void)
{
  HWND VAR_4;
  IRichEditOle *VAR_5 = ((void*)0);
  ITextDocument *VAR_6 = ((void*)0);
  ITextRange *VAR_7 = ((void*)0);
  HRESULT VAR_8;
  static const CHAR VAR_9[] = "1\n2\n3\n4\n5\n6\n7\n8\n9\n10";

  FUNC_5(&VAR_4, &VAR_5, &VAR_6, ((void*)0));
  FUNC_3(VAR_4, VAR_2, 0, (LPARAM)VAR_9);


  FUNC_4(VAR_4, VAR_6, 0, 1, VAR_3, 0);


  FUNC_4(VAR_4, VAR_6, 19, 20, VAR_3, 1);


  FUNC_4(VAR_4, VAR_6, 0, 1, VAR_3, 0);


  FUNC_4(VAR_4, VAR_6, 0, 20, VAR_3, 0);

  VAR_8 = FUNC_0(VAR_6, 0, 0, &VAR_7);
  FUNC_6(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);
  FUNC_7(&VAR_4, &VAR_5, &VAR_6, ((void*)0));
  VAR_8 = FUNC_2(VAR_7, VAR_3);
  FUNC_6(VAR_8 == VAR_0, "got 0x%08x\n", VAR_8);
  FUNC_1(VAR_7);
}
