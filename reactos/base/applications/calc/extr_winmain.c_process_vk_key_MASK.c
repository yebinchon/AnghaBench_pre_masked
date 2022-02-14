
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int key; int mask; int idc; } ;
typedef TYPE_1__ key2code_t ;
typedef int WPARAM ;
struct TYPE_8__ {scalar_t__ layout; scalar_t__ base; int hWnd; } ;
typedef int LPARAM ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int * FUNC_0 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_5__ VAR_13 ;
 TYPE_1__* VAR_14 ;
 TYPE_1__* VAR_15 ;
 TYPE_1__* VAR_16 ;
 int FUNC_4 (int,int ) ;
 unsigned short FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(WPARAM VAR_17, LPARAM VAR_18)
{
    const key2code_t *VAR_19;
    unsigned int VAR_20;
    unsigned short int VAR_21;

    VAR_21 = FUNC_5(FUNC_1(VAR_17));
    if ((VAR_18 & VAR_10)) {

        if (VAR_21 == (VAR_3|VAR_4)) {
            FUNC_3(VAR_13.hWnd, VAR_12, VAR_7, 0);
            return 1;
        }

        if (VAR_21 == (VAR_5|VAR_4)) {
            FUNC_3(VAR_13.hWnd, VAR_12, VAR_8, 0);
            return 1;
        }

        if (FUNC_1(VAR_17) == VAR_11) {
            FUNC_3(VAR_13.hWnd, VAR_12, VAR_9, 0);
            return 1;
        }
    }

    for (VAR_20=0; VAR_20<FUNC_2(VAR_14); VAR_20++) {
        int VAR_22 = VAR_14[VAR_20].key;
        if (VAR_14[VAR_20].mask & VAR_1)
            VAR_22 |= VAR_4;
        if ((VAR_22 == VAR_21 && (VAR_14[VAR_20].mask & VAR_0)) ||
            (VAR_22 == FUNC_1(VAR_17) && !(VAR_14[VAR_20].mask & VAR_0))
           ) {
            if (FUNC_0(VAR_13.hWnd, VAR_14[VAR_20].idc) == ((void*)0))
                continue;
            return FUNC_4(VAR_18, VAR_14[VAR_20].idc);
        }
    }
    if (VAR_13.layout == VAR_2) {
        if (VAR_13.base == VAR_6) {
            VAR_19 = VAR_15;
            VAR_20 = FUNC_2(VAR_15);
        } else {
            VAR_19 = VAR_16;
            VAR_20 = FUNC_2(VAR_16);
        }
        do {
            if (VAR_19->key == FUNC_1(VAR_17)) {
                return FUNC_4(VAR_18, VAR_19->idc);
            }
            VAR_19++;
        } while (--VAR_20);
    }
    return 0;
}
