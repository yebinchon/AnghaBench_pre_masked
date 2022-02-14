
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int IExplorerBrowser ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,int *,int *) ;
 int FUNC_1 (int *,int ,int ,int,int) ;
 int VAR_0 ;

__attribute__((used)) static HRESULT FUNC_2(IExplorerBrowser *VAR_1)
{
    RECT VAR_2;
    FUNC_1(&VAR_2, 0, 0, 500, 500);
    return FUNC_0(VAR_1, VAR_0, &VAR_2, ((void*)0));
}
