
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;
typedef scalar_t__ COLORREF ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int,int,int) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_2(HDC VAR_2)
{
    COLORREF VAR_3 = FUNC_0(VAR_2, FUNC_1(0, 0, 0));
    COLORREF VAR_4 = FUNC_0(VAR_2, FUNC_1(255, 255, 255));

    if (VAR_3 != FUNC_1(0, 0, 0) || VAR_4 != FUNC_1(255, 255, 255))
        return VAR_1;

    return VAR_0;
}
