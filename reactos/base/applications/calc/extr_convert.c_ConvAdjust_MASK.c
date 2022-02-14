
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ unit; } ;
typedef TYPE_1__ conv_t ;
struct TYPE_11__ {int hInstance; } ;
struct TYPE_10__ {scalar_t__ category; TYPE_1__* items; } ;
typedef TYPE_2__ TCHAR ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,scalar_t__,TYPE_2__*,unsigned int) ;
 unsigned int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 TYPE_4__ VAR_7 ;
 TYPE_2__* VAR_8 ;

void FUNC_6(HWND VAR_9, int VAR_10)
{
    TCHAR VAR_11[128];
    TCHAR VAR_12[128];
    HWND VAR_13 = FUNC_0(VAR_9, VAR_5);
    HWND VAR_14 = FUNC_0(VAR_9, VAR_6);
    const conv_t *VAR_15;
    unsigned int VAR_16;

    FUNC_3(VAR_9, VAR_4, VAR_1, VAR_10, (LPARAM)VAR_12);
    for (VAR_16=0; VAR_16<FUNC_2(VAR_8); VAR_16++) {
        VAR_15 = VAR_8[VAR_16].items;
        FUNC_1(VAR_7.hInstance, VAR_8[VAR_16].category, VAR_11, FUNC_2(VAR_11));
        if (!FUNC_5(VAR_12, VAR_11))
            break;
    }

    FUNC_4(VAR_13, VAR_2, 0, 0);
    FUNC_4(VAR_14, VAR_2, 0, 0);
    while (VAR_15->unit) {
        FUNC_1(VAR_7.hInstance, VAR_15->unit, VAR_11, FUNC_2(VAR_11));
        FUNC_4(VAR_13, VAR_0, 0, (LPARAM)VAR_11);
        FUNC_4(VAR_14, VAR_0, 0, (LPARAM)VAR_11);
        VAR_15++;
    }
    FUNC_4(VAR_13, VAR_3, 0, 0);
    FUNC_4(VAR_14, VAR_3, 0, 0);
}
