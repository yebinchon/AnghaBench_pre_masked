
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bindf; int request; int protocol_sink; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
typedef int IWindowForBindingUI ;
typedef int IServiceProvider ;
typedef int IID ;
typedef int IHttpSecurity ;
typedef TYPE_2__ HttpProtocol ;
typedef int * HWND ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;


 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,int *,void**) ;
 int FUNC_6 (int *,int *,int *,void**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*,int **) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int,int,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_12 (char*,TYPE_2__*,...) ;
 scalar_t__ VAR_20 ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int ) ;

__attribute__((used)) static HRESULT FUNC_15(HttpProtocol *VAR_21, DWORD VAR_22)
{
    IServiceProvider *VAR_23;
    IWindowForBindingUI *VAR_24;
    IHttpSecurity *VAR_25;
    BOOL VAR_26;
    DWORD VAR_27;
    HWND VAR_28;
    DWORD VAR_29;
    HRESULT VAR_30;

    FUNC_12("(%p %u)\n", VAR_21, VAR_22);

    switch(VAR_22) {
    case 133:
    case 134:
    case 136:
    case 137:
    case 135:
    case 138:
    case 128:
    case 132:
    case 129:
    case 131:
    case 130:
    case 139:
        VAR_26 = VAR_20;
        break;
    default:
        VAR_26 = VAR_5;
    }

    VAR_30 = FUNC_5(VAR_21->base.protocol_sink, &VAR_11,
                                                (void**)&VAR_23);
    if(FUNC_1(VAR_30)) {
        FUNC_0("Failed to get IServiceProvider.\n");
        return VAR_4;
    }

    if(VAR_26) {
        VAR_30 = FUNC_6(VAR_23, &VAR_10, &VAR_10,
                                             (void**)&VAR_25);
        if(FUNC_11(VAR_30)) {
            VAR_30 = FUNC_3(VAR_25, VAR_22);
            FUNC_4(VAR_25);

            FUNC_12("OnSecurityProblem returned %08x\n", VAR_30);

            if(VAR_30 != VAR_18)
            {
                BOOL VAR_31 = VAR_5;

                FUNC_7(VAR_23);

                if(VAR_30 == VAR_19) {
                    if(VAR_22 == 133)
                        VAR_31 = FUNC_14(VAR_21, VAR_15);
                    else if(VAR_22 == 134)
                        VAR_31 = FUNC_14(VAR_21, VAR_14);
                    else if(VAR_22 == 135)
                        VAR_31 = FUNC_14(VAR_21, VAR_17);

                    if(VAR_31)
                        return VAR_13;

                    FUNC_2("Don't know how to ignore error %d\n", VAR_22);
                    return VAR_4;
                }

                if(VAR_30 == VAR_4)
                    return VAR_4;
                if(VAR_30 == VAR_13)
                    return VAR_13;

                return FUNC_13(VAR_22);
            }
        }
    }

    switch(VAR_22) {
    case 129:
        if(VAR_30 != VAR_18) {

            FUNC_14(VAR_21, VAR_16);
            VAR_30 = VAR_13;
            break;
        }

    default:
        VAR_30 = FUNC_6(VAR_23, &VAR_12, &VAR_12, (void**)&VAR_24);
        if(FUNC_11(VAR_30)) {
            const IID *VAR_32;

            if(VAR_26)
                VAR_32 = &VAR_10;
            else if(VAR_22 == VAR_2)
                VAR_32 = &VAR_9;
            else
                VAR_32 = &VAR_12;

            VAR_30 = FUNC_8(VAR_24, VAR_32, &VAR_28);
            FUNC_9(VAR_24);
        }

        if(FUNC_1(VAR_30)) VAR_28 = ((void*)0);

        VAR_27 = VAR_6 | VAR_7;
        if(VAR_21->base.bindf & VAR_0)
            VAR_27 |= VAR_8;

        VAR_29 = FUNC_10(VAR_28, VAR_21->base.request, VAR_22, VAR_27, ((void*)0));
        VAR_30 = VAR_29 == VAR_1 || VAR_29 == VAR_3 ? VAR_13 : FUNC_13(VAR_22);
    }

    FUNC_7(VAR_23);
    return VAR_30;
}
