
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* bmBits; } ;
typedef TYPE_1__* LPBITMAP ;
typedef int HGLOBAL ;
typedef int HBITMAP ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;
typedef int BITMAP ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_8(HANDLE VAR_4, DWORD VAR_5, DWORD VAR_6)
{
    HGLOBAL VAR_7;
    HBITMAP VAR_8;
    LPBITMAP VAR_9;

    VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);
    if (!VAR_7)
    {
        return VAR_2;
    }

    VAR_9 = FUNC_4(VAR_7);
    if (!VAR_9)
    {
        FUNC_3(VAR_7);
        return VAR_2;
    }

    VAR_9->bmBits = VAR_9 + sizeof(BITMAP) + 1;

    VAR_8 = FUNC_1(VAR_9);

    FUNC_5(VAR_7);
    FUNC_3(VAR_7);

    if (!VAR_8)
    {
        FUNC_7(VAR_1);
        return VAR_2;
    }

    if (!FUNC_6(VAR_0, VAR_8))
    {
        FUNC_2(VAR_8);
        return VAR_2;
    }

    return VAR_3;
}
