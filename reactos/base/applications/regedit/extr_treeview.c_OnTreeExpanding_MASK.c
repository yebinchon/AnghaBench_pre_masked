
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int state; scalar_t__ hItem; } ;
struct TYPE_5__ {TYPE_1__ itemNew; } ;
typedef TYPE_2__ NMTREEVIEW ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__* LPCWSTR ;
typedef int LPARAM ;
typedef scalar_t__ LONG ;
typedef int HWND ;
typedef int HKEY ;
typedef int HCURSOR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,scalar_t__,scalar_t__*,int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_1 (int ,scalar_t__,int *) ;
 int FUNC_2 () ;
 scalar_t__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int,scalar_t__*,int*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__*,int ,int ,int *) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ,int*,int*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int,int ) ;
 int FUNC_11 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

BOOL FUNC_12(HWND VAR_9, NMTREEVIEW* VAR_10)
{
    DWORD VAR_11, VAR_12, VAR_13;
    HKEY VAR_14, VAR_15, VAR_16;
    LPCWSTR VAR_17;
    LPWSTR VAR_18;
    LONG VAR_19;
    HCURSOR VAR_20;

    static int VAR_21;
    if (VAR_21) return VAR_1;
    if (VAR_10->itemNew.state & VAR_6 )
    {
        return VAR_5;
    }
    VAR_21 = VAR_5;
    VAR_20 = FUNC_11(FUNC_5(((void*)0), VAR_2));
    FUNC_10(VAR_9, VAR_8, VAR_1, 0);

    VAR_17 = FUNC_1(VAR_9, VAR_10->itemNew.hItem, &VAR_14);
    if (!VAR_17) goto done;

    if (*VAR_17)
    {
        VAR_19 = FUNC_8(VAR_14, VAR_17, 0, VAR_4, &VAR_15);
        if (VAR_19 != VAR_0) goto done;
    }
    else
    {
        VAR_15 = VAR_14;
    }

    VAR_19 = FUNC_9(VAR_15, 0, 0, 0, &VAR_11, &VAR_13, 0, 0, 0, 0, 0, 0);
    if (VAR_19 != VAR_0) goto done;
    VAR_13++;
    VAR_18 = FUNC_3(FUNC_2(), 0, VAR_13 * sizeof(WCHAR));
    if (!VAR_18) goto done;

    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
    {
        DWORD VAR_22 = VAR_13, VAR_23;

        VAR_19 = FUNC_7(VAR_15, VAR_12, VAR_18, &VAR_22, 0, 0, 0, 0);
        if (VAR_19 != VAR_0) continue;
        VAR_19 = FUNC_8(VAR_15, VAR_18, 0, VAR_3, &VAR_16);
        if (VAR_19 == VAR_0)
        {
            VAR_19 = FUNC_9(VAR_16, 0, 0, 0, &VAR_23, 0, 0, 0, 0, 0, 0, 0);
            FUNC_6(VAR_16);
        }
        if (VAR_19 != VAR_0) VAR_23 = 0;
        FUNC_0(VAR_9, VAR_10->itemNew.hItem, VAR_18, ((void*)0), VAR_23);
    }

    FUNC_10(VAR_9, VAR_7, 0, (LPARAM)VAR_10->itemNew.hItem);

    FUNC_6(VAR_15);
    FUNC_4(FUNC_2(), 0, VAR_18);

done:
    FUNC_10(VAR_9, VAR_8, VAR_5, 0);
    FUNC_11(VAR_20);
    VAR_21 = VAR_1;

    return VAR_5;
}
