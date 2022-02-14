
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int HMETAFILE ;
typedef int HGLOBAL ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_8(HANDLE VAR_4, DWORD VAR_5, DWORD VAR_6)
{
    HMETAFILE VAR_7;
    HGLOBAL VAR_8;
    LPVOID VAR_9;

    VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6);
    if (!VAR_8)
    {
        return VAR_2;
    }

    VAR_9 = FUNC_3(VAR_8);
    if (!VAR_9)
    {
        FUNC_2(VAR_8);
        return VAR_2;
    }

    VAR_7 = FUNC_7(VAR_6, VAR_9);

    FUNC_4(VAR_8);
    FUNC_2(VAR_8);

    if (!VAR_7)
    {
        FUNC_6(VAR_1);
        return VAR_2;
    }

    if (!FUNC_5(VAR_0, VAR_7))
    {
        FUNC_1(VAR_7);
        return VAR_2;
    }

    return VAR_3;
}
