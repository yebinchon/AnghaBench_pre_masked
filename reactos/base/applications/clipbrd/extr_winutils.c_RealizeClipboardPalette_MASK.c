
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPALETTE ;
typedef int HDC ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

BOOL FUNC_4(HDC VAR_3)
{
    BOOL VAR_4;
    HPALETTE VAR_5, VAR_6;

    if (!FUNC_1(VAR_0))
        return VAR_1;

    VAR_5 = FUNC_0(VAR_0);
    if (!VAR_5)
        return VAR_1;

    VAR_6 = FUNC_3(VAR_3, VAR_5, VAR_1);
    if (!VAR_6)
        return VAR_1;

    VAR_4 = (FUNC_2(VAR_3) != VAR_2);

    FUNC_3(VAR_3, VAR_6, VAR_1);

    return VAR_4;
}
