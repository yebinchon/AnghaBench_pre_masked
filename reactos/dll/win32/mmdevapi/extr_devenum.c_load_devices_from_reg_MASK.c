
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int pwszVal; } ;
struct TYPE_5__ {scalar_t__ vt; TYPE_1__ u; int member_0; } ;
typedef TYPE_2__ PROPVARIANT ;
typedef int PROPERTYKEY ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int * HKEY ;
typedef int GUID ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int * VAR_6 ;
 int * FUNC_4 (int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int *,int *,int,int ,int ) ;
 int FUNC_6 (int *,int,int const*,TYPE_2__*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int *,int ,int,int *,int **,int *) ;
 scalar_t__ FUNC_9 (int *,int ,int *,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (char*,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static HRESULT FUNC_14(void)
{
    DWORD VAR_20 = 0;
    HKEY VAR_21, VAR_22;
    LONG VAR_23;
    DWORD VAR_24;

    VAR_23 = FUNC_8(VAR_6, VAR_19, 0, ((void*)0), 0, VAR_9|VAR_7|VAR_8, ((void*)0), &VAR_21, ((void*)0));
    if (VAR_23 == VAR_3)
        VAR_23 = FUNC_8(VAR_21, VAR_17, 0, ((void*)0), 0, VAR_7|VAR_9|VAR_8, ((void*)0), &VAR_15, ((void*)0));
    if (VAR_23 == VAR_3)
        VAR_23 = FUNC_8(VAR_21, VAR_18, 0, ((void*)0), 0, VAR_7|VAR_9|VAR_8, ((void*)0), &VAR_16, ((void*)0));
    FUNC_7(VAR_21);
    VAR_22 = VAR_15;
    VAR_24 = VAR_13;
    if (VAR_23 != VAR_3)
    {
        FUNC_7(VAR_15);
        VAR_16 = VAR_15 = ((void*)0);
        FUNC_11("Couldn't create key: %u\n", VAR_23);
        return VAR_4;
    }

    do {
        WCHAR VAR_25[39];
        GUID VAR_26;
        DWORD VAR_27;
        PROPVARIANT VAR_28 = { VAR_11 };

        VAR_27 = FUNC_0(VAR_25);
        VAR_23 = FUNC_9(VAR_22, VAR_20++, VAR_25, &VAR_27, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if (VAR_23 == VAR_2)
        {
            if (VAR_22 == VAR_15)
            {
                VAR_22 = VAR_16;
                VAR_24 = VAR_14;
                VAR_20 = 0;
                continue;
            }
            break;
        }
        if (VAR_23 != VAR_3)
            continue;
        if (FUNC_10(FUNC_1(VAR_25, &VAR_26))
            && FUNC_10(FUNC_6(&VAR_26, VAR_24, (const PROPERTYKEY*)&VAR_1, &VAR_28))
            && VAR_28.vt == VAR_12)
        {
            DWORD VAR_29 = (FUNC_12(VAR_28.u.pwszVal) + 1) * sizeof(WCHAR);
            WCHAR *VAR_30 = FUNC_4(FUNC_3(), 0, VAR_29);
            FUNC_13(VAR_30, VAR_28.u.pwszVal, VAR_29);
            FUNC_5(VAR_30, &VAR_26, VAR_24,
                    VAR_0, VAR_5);
            FUNC_2(VAR_28.u.pwszVal);
        }
    } while (1);

    return VAR_10;
}
