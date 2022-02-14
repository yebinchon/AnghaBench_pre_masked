
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stg; } ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *,int,int ,int *) ;
 TYPE_1__ VAR_4 ;

HRESULT FUNC_2(HWND VAR_5)
{
    HRESULT VAR_6 = FUNC_1(((void*)0),
          VAR_2 | VAR_3 | VAR_1,
          0, &VAR_4.stg);

    FUNC_0(VAR_5, VAR_0, 0, (LPARAM)&VAR_4);
    return VAR_6;
}
