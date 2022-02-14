
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int IOleInPlaceSite ;
typedef int IOleClientSite ;
typedef scalar_t__ HWND ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (scalar_t__*,int **,int **,int *) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (scalar_t__*,int **,int **,int *) ;

__attribute__((used)) static void FUNC_8(void)
{
  HWND VAR_3;
  IRichEditOle *VAR_4 = ((void*)0);
  ITextDocument *VAR_5 = ((void*)0);
  IOleClientSite *VAR_6 = ((void*)0);
  IOleInPlaceSite *VAR_7 = ((void*)0);
  HRESULT VAR_8;
  HWND VAR_9;

  FUNC_5(&VAR_3, &VAR_4, &VAR_5, ((void*)0));
  VAR_8 = FUNC_4(VAR_4, &VAR_6);
  FUNC_6(VAR_8 == VAR_2, "IRichEditOle_QueryInterface: 0x%08x\n", VAR_8);

  VAR_8 = FUNC_0(VAR_6, &VAR_1, (void **)&VAR_7);
  FUNC_6(VAR_8 == VAR_2, "IOleClientSite_QueryInterface: 0x%08x\n", VAR_8);
  VAR_8 = FUNC_2(VAR_7, &VAR_9);
  FUNC_6(VAR_8 == VAR_2, "IOleInPlaceSite_GetWindow: 0x%08x\n", VAR_8);
  FUNC_6(VAR_3 == VAR_9, "got wrong pointer.\n");

  VAR_8 = FUNC_2(VAR_7, ((void*)0));
  FUNC_6(VAR_8 == VAR_0, "IOleInPlaceSite_GetWindow: 0x%08x\n", VAR_8);

  FUNC_3(VAR_7);
  FUNC_1(VAR_6);
  FUNC_7(&VAR_3, &VAR_4, &VAR_5, ((void*)0));
}
