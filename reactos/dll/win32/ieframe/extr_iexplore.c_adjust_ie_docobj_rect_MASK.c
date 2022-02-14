
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ top; scalar_t__ bottom; } ;
typedef TYPE_1__ RECT ;
typedef int INT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(HWND VAR_3, RECT* VAR_4)
{
    HWND VAR_5 = FUNC_1(VAR_3, VAR_0);
    HWND VAR_6 = FUNC_1(VAR_3, VAR_1);
    INT VAR_7 = FUNC_4(VAR_5, VAR_2, 0, 0);

    FUNC_2(VAR_4, 0, -VAR_7);

    if(FUNC_3(VAR_6))
    {
        RECT VAR_8;

        FUNC_0(VAR_6, &VAR_8);
        VAR_4->bottom -= VAR_8.bottom - VAR_8.top;
    }
}
