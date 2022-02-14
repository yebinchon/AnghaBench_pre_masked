
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ formula_to; scalar_t__ formula_from; scalar_t__ unit; } ;
typedef TYPE_2__ conv_t ;
struct TYPE_13__ {TYPE_1__* Convert; int hInstance; } ;
struct TYPE_12__ {TYPE_2__* items; scalar_t__ category; } ;
struct TYPE_10__ {char* data; int wm_msg; } ;
typedef TYPE_3__ TCHAR ;
typedef int LPARAM ;
typedef int HWND ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,TYPE_3__*,size_t) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 size_t FUNC_3 (TYPE_3__*) ;
 size_t FUNC_4 (int ,int ,int ,size_t,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*) ;
 TYPE_5__ VAR_8 ;
 TYPE_3__* VAR_9 ;

void FUNC_6(HWND VAR_10)
{
    DWORD VAR_11 = (DWORD)FUNC_4(VAR_10, VAR_2, VAR_0, 0, 0);
    const conv_t *VAR_12 = ((void*)0);
    DWORD VAR_13 = FUNC_4(VAR_10, VAR_3, VAR_0, 0, 0);
    DWORD VAR_14 = FUNC_4(VAR_10, VAR_4, VAR_0, 0, 0);
    TCHAR VAR_15[128];
    TCHAR VAR_16[128];
    const conv_t *VAR_17;


    if (VAR_13 == VAR_14)
        return;


    FUNC_4(VAR_10, VAR_2, VAR_1, VAR_11, (LPARAM)VAR_15);
    for (VAR_11=0; VAR_11 < FUNC_3(VAR_9); VAR_11++) {
        FUNC_0(VAR_8.hInstance, VAR_9[VAR_11].category, VAR_16, FUNC_3(VAR_16));
        if (!FUNC_5(VAR_15, VAR_16)) {
            VAR_12 = VAR_9[VAR_11].items;
            break;
        }
    }


    VAR_17 = VAR_12;
    FUNC_4(VAR_10, VAR_3, VAR_1, VAR_13, (LPARAM)VAR_15);
    while (VAR_17->unit) {
        FUNC_0(VAR_8.hInstance, VAR_17->unit, VAR_16, FUNC_3(VAR_16));
        if (!FUNC_5(VAR_15, VAR_16)) {
            VAR_13 = VAR_17-VAR_12;
            break;
        }
        VAR_17++;
    }
    FUNC_4(VAR_10, VAR_4, VAR_1, VAR_14, (LPARAM)VAR_15);
    VAR_17 = VAR_12;
    while (VAR_17->unit) {
        FUNC_0(VAR_8.hInstance, VAR_17->unit, VAR_16, FUNC_3(VAR_16));
        if (!FUNC_5(VAR_15, VAR_16)) {
            VAR_14 = VAR_17-VAR_12;
            break;
        }
        VAR_17++;
    }

    VAR_8.Convert[0].data = (char *)VAR_12[VAR_13].formula_from;
    VAR_8.Convert[1].data = (char *)VAR_12[VAR_14].formula_to;
    VAR_8.Convert[0].wm_msg = VAR_5;
    VAR_8.Convert[1].wm_msg = VAR_6;
    FUNC_2(VAR_10, VAR_7, 0, FUNC_1(0, VAR_5));
}
