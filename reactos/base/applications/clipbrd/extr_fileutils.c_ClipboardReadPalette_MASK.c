
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPLOGPALETTE ;
typedef int HPALETTE ;
typedef int HGLOBAL ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_8(HANDLE VAR_4, DWORD VAR_5, DWORD VAR_6)
{
    LPLOGPALETTE VAR_7;
    HPALETTE VAR_8;
    HGLOBAL VAR_9;

    VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6);
    if (!VAR_9)
    {
        return VAR_2;
    }

    VAR_7 = FUNC_4(VAR_9);
    if (!VAR_7)
    {
        FUNC_3(VAR_9);
        return VAR_2;
    }

    VAR_8 = FUNC_1(VAR_7);
    if (!VAR_8)
    {
        FUNC_5(VAR_9);
        FUNC_3(VAR_9);
        FUNC_7(VAR_1);
        return VAR_2;
    }

    FUNC_5(VAR_9);
    FUNC_3(VAR_9);

    if (!FUNC_6(VAR_0, VAR_8))
    {
        FUNC_2(VAR_8);
        return VAR_2;
    }

    return VAR_3;
}
