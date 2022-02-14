
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LRESULT ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int *,int ,scalar_t__*,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static LRESULT FUNC_3(HWND VAR_9)
{
    DWORD VAR_10,VAR_11;
    WCHAR VAR_12[256],VAR_13[256];

    FUNC_0(VAR_7, ((void*)0), 2, ((void*)0), 0, &VAR_10, &VAR_11);
    if(VAR_10 == 0)
    {
          FUNC_0(VAR_6, ((void*)0), 2, ((void*)0), 0, &VAR_10, &VAR_11);
    }
    if(VAR_10 > 0)
          return VAR_8;
    else
    {
          FUNC_1(VAR_0, VAR_4,VAR_13, 255);
          FUNC_1(VAR_0, VAR_5,VAR_12, 255);
          FUNC_2(VAR_9, VAR_13, VAR_12,VAR_3 | VAR_2);
          return VAR_1;
    }
}
