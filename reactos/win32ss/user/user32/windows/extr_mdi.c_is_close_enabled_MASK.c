
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int HWND ;
typedef scalar_t__ HMENU ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static BOOL FUNC_3(HWND VAR_8, HMENU VAR_9)
{
    if (FUNC_0(VAR_8, VAR_2) & VAR_0) return VAR_1;

    if (!VAR_9) VAR_9 = FUNC_2(VAR_8, VAR_1);
    if (VAR_9)
    {
        UINT VAR_10 = FUNC_1(VAR_9, VAR_6, VAR_3);
        if (VAR_10 == 0xFFFFFFFF || (VAR_10 & (VAR_4 | VAR_5)))
            return VAR_1;
    }
    return VAR_7;
}
