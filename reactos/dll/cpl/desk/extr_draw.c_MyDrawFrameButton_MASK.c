
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int LPRECT ;
typedef int HDC ;
typedef int COLOR_SCHEME ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,int,int *) ;

__attribute__((used)) static BOOL
FUNC_1(HDC VAR_7, LPRECT VAR_8, UINT VAR_9, COLOR_SCHEME *VAR_10)
{
    UINT VAR_11;
    if (VAR_9 & (VAR_4 | VAR_2 | VAR_3))
        VAR_11 = VAR_6;
    else
        VAR_11 = VAR_5;
    return FUNC_0(VAR_7, VAR_8, VAR_11, (VAR_9 & VAR_3) | VAR_0 | VAR_1, VAR_10);
}
