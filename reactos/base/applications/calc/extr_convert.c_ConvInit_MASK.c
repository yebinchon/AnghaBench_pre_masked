
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int hInstance; } ;
struct TYPE_6__ {int category; } ;
typedef TYPE_1__ TCHAR ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,TYPE_1__*,unsigned int) ;
 unsigned int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 TYPE_3__ VAR_3 ;
 TYPE_1__* VAR_4 ;

void FUNC_5(HWND VAR_5)
{
    HWND VAR_6 = FUNC_1(VAR_5, VAR_2);
    TCHAR VAR_7[128];
    unsigned int VAR_8;


    for (VAR_8=0; VAR_8<FUNC_3(VAR_4); VAR_8++) {
        FUNC_2(VAR_3.hInstance, VAR_4[VAR_8].category, VAR_7, FUNC_3(VAR_7));
        FUNC_4(VAR_6, VAR_0, 0, (LPARAM)VAR_7);
    }
    FUNC_4(VAR_6, VAR_1, 0, 0);
    FUNC_0(VAR_5, 0);
}
