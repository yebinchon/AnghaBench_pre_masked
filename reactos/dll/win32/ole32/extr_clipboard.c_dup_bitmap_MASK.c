
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bmHeight; int bmWidth; } ;
typedef int HRESULT ;
typedef scalar_t__ HGDIOBJ ;
typedef int HDC ;
typedef scalar_t__ HBITMAP ;
typedef TYPE_1__ BITMAP ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (scalar_t__,int,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_6(HBITMAP VAR_3, HBITMAP *VAR_4)
{
    HDC VAR_5;
    HGDIOBJ VAR_6;
    BITMAP VAR_7;
    HBITMAP VAR_8;

    VAR_5 = FUNC_2(((void*)0));
    VAR_6 = FUNC_5(VAR_5, VAR_3);
    FUNC_4(VAR_3, sizeof VAR_7, &VAR_7);
    VAR_8 = FUNC_1(VAR_5, VAR_7.bmWidth, VAR_7.bmHeight);
    if (VAR_8)
    {
        HDC VAR_9 = FUNC_2(((void*)0));
        HGDIOBJ VAR_10 = FUNC_5(VAR_9, VAR_8);
        FUNC_0(VAR_9, 0, 0, VAR_7.bmWidth, VAR_7.bmHeight, VAR_5, 0, 0, VAR_1);
        FUNC_5(VAR_9, VAR_10);
        FUNC_3(VAR_9);
    }
    FUNC_5(VAR_5, VAR_6);
    FUNC_3(VAR_5);
    *VAR_4 = VAR_8;
    return VAR_8 ? VAR_2 : VAR_0;
}
