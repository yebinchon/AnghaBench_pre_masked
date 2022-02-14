
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int use_proxy ;
typedef int connection_settings ;
typedef int WPARAM ;
typedef char WCHAR ;
struct TYPE_3__ {scalar_t__ code; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ PSHNOTIFY ;
typedef scalar_t__ LRESULT ;
typedef scalar_t__ LPARAM ;
typedef int INT_PTR ;
typedef int HWND ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int *,int) ;
 int FUNC_8 (char*,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (int,char*,int,int,char*,int **) ;
 int VAR_18 ;
 int FUNC_10 (int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static INT_PTR FUNC_12(HWND VAR_22, WPARAM VAR_23, LPARAM VAR_24)
{
    connection_settings *VAR_25;
    WCHAR VAR_26[VAR_10];
    WCHAR VAR_27[VAR_10];
    PSHNOTIFY *VAR_28 = (PSHNOTIFY*)VAR_24;
    DWORD VAR_29, VAR_30, VAR_31;
    DWORD VAR_32, VAR_33, VAR_34, VAR_35;
    LRESULT VAR_36;
    HKEY VAR_37, VAR_38;

    if(VAR_28->hdr.code != VAR_12)
        return VAR_2;

    VAR_36 = FUNC_6(VAR_3, VAR_19, &VAR_37);
    if(VAR_36)
        return VAR_2;

    VAR_32 = FUNC_2(VAR_22, VAR_8);
    VAR_36 = FUNC_7(VAR_37, VAR_20, 0, VAR_14,
            (BYTE*)&VAR_32, sizeof(VAR_32));
    if(VAR_36)
    {
        FUNC_3(VAR_37);
        return VAR_2;
    }
    FUNC_8("ProxyEnable set to %x\n", VAR_32);

    VAR_29 = FUNC_1(VAR_22, VAR_6, VAR_26, FUNC_0(VAR_26));
    if(VAR_29)
    {
        VAR_26[VAR_29++] = ':';
        VAR_30 = FUNC_1(VAR_22, VAR_5, VAR_26+VAR_29,
                FUNC_0(VAR_26)-VAR_29);
        if(!VAR_30)
        {
            VAR_26[VAR_29++] = '8';
            VAR_26[VAR_29++] = '0';
            VAR_26[VAR_29] = 0;
        }

        VAR_36 = FUNC_7(VAR_37, VAR_21, 0, VAR_15,
                (BYTE*)VAR_26, (VAR_29+VAR_30)*sizeof(WCHAR));
    }
    else
    {
        VAR_36 = FUNC_5(VAR_37, VAR_21);
        if(VAR_36 == VAR_0)
            VAR_36 = VAR_1;
    }
    if(VAR_36)
    {
        FUNC_3(VAR_37);
        return VAR_2;
    }
    FUNC_8("ProxtServer set to %s\n", FUNC_11(VAR_26));

    VAR_33 = FUNC_2(VAR_22, VAR_7);
    VAR_31 = FUNC_1(VAR_22, VAR_4,
            VAR_27, FUNC_0(VAR_27));
    if(!VAR_31) VAR_33 = VAR_2;
    if(VAR_33)
    {
        VAR_36 = FUNC_7(VAR_37, VAR_16, 0, VAR_15,
                (BYTE*)VAR_27, VAR_31*sizeof(WCHAR));
    }
    else
    {
        VAR_36 = FUNC_5(VAR_37, VAR_16);
        if(VAR_36 == VAR_0)
            VAR_36 = VAR_1;
    }
    if(VAR_36)
    {
        FUNC_3(VAR_37);
        return VAR_2;
    }
    FUNC_8("AutoConfigURL set to %s\n", FUNC_11(VAR_33 ? VAR_27 : ((void*)0)));

    VAR_34 = FUNC_2(VAR_22, VAR_9);

    VAR_36 = FUNC_4(VAR_37, VAR_17, 0, ((void*)0), 0, VAR_11, ((void*)0), &VAR_38, ((void*)0));
    FUNC_3(VAR_37);
    if(VAR_36)
        return VAR_2;

    VAR_35 = FUNC_9(VAR_32, VAR_26, VAR_34,
        VAR_33, VAR_27, &VAR_25);
    if(!VAR_35)
    {
        FUNC_3(VAR_38);
        return VAR_2;
    }

    VAR_36 = FUNC_7(VAR_38, VAR_18, 0, VAR_13,
            (BYTE*)VAR_25, VAR_35);
    FUNC_10(VAR_25);
    FUNC_3(VAR_38);
    return !VAR_36;
}
