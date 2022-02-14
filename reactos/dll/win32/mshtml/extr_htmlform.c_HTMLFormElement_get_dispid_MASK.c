
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMNode ;
typedef int nsIDOMHTMLElement ;
typedef int nsIDOMHTMLCollection ;
typedef int nsAString ;
typedef int WCHAR ;
typedef scalar_t__ UINT32 ;
struct TYPE_4__ {int nsform; } ;
typedef char PRUnichar ;
typedef TYPE_1__ HTMLFormElement ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ DISPID ;
typedef char* BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (char*,TYPE_1__*,int ,int ,scalar_t__*) ;
 int FUNC_4 (int *,char const*,int *,char const**) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char const**) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,scalar_t__*) ;
 int FUNC_10 (int *,scalar_t__,int **) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int **) ;
 int FUNC_15 (int *,int *,void**) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char const*,char*) ;
 scalar_t__ FUNC_18 (char*,int **,int) ;
 int FUNC_19 (char*) ;

__attribute__((used)) static HRESULT FUNC_20(HTMLDOMNode *VAR_6,
        BSTR VAR_7, DWORD VAR_8, DISPID *VAR_9)
{
    HTMLFormElement *VAR_10 = FUNC_5(VAR_6);
    nsIDOMHTMLCollection *VAR_11;
    nsAString VAR_12, VAR_13;
    UINT32 VAR_14, VAR_15;
    nsresult VAR_16;
    HRESULT VAR_17 = VAR_0;

    static const PRUnichar VAR_18[] = {'n','a','m','e',0};

    FUNC_3("(%p)->(%s %x %p)\n", VAR_10, FUNC_19(VAR_7), VAR_8, VAR_9);

    VAR_16 = FUNC_14(VAR_10->nsform, &VAR_11);
    if(FUNC_1(VAR_16)) {
        FUNC_0("GetElements failed: 0x%08x\n", VAR_16);
        return VAR_1;
    }

    VAR_16 = FUNC_9(VAR_11, &VAR_14);
    if(FUNC_1(VAR_16)) {
        FUNC_0("GetLength failed: 0x%08x\n", VAR_16);
        FUNC_11(VAR_11);
        return VAR_1;
    }

    if(VAR_14 > VAR_3)
        VAR_14 = VAR_3;


    if('0' <= *VAR_7 && *VAR_7 <= '9') {
        WCHAR *VAR_19;

        VAR_15 = FUNC_18(VAR_7, &VAR_19, 10);
        if(!*VAR_19 && VAR_15 < VAR_14) {
            *VAR_9 = VAR_4 + VAR_15;
            return VAR_5;
        }
    }

    FUNC_8(&VAR_12, ((void*)0));
    for(VAR_15 = 0; VAR_15 < VAR_14; ++VAR_15) {
        nsIDOMNode *VAR_20;
        nsIDOMHTMLElement *VAR_21;
        const PRUnichar *VAR_22;

        VAR_16 = FUNC_10(VAR_11, VAR_15, &VAR_20);
        if(FUNC_1(VAR_16)) {
            FUNC_0("Item failed: 0x%08x\n", VAR_16);
            VAR_17 = VAR_1;
            break;
        }

        VAR_16 = FUNC_15(VAR_20, &VAR_2, (void**)&VAR_21);
        FUNC_16(VAR_20);
        if(FUNC_1(VAR_16)) {
            FUNC_0("Failed to get nsIDOMHTMLNode interface: 0x%08x\n", VAR_16);
            VAR_17 = VAR_1;
            break;
        }


        VAR_16 = FUNC_12(VAR_21, &VAR_12);
        if(FUNC_1(VAR_16)) {
            FUNC_0("GetId failed: 0x%08x\n", VAR_16);
            FUNC_13(VAR_21);
            VAR_17 = VAR_1;
            break;
        }
        FUNC_7(&VAR_12, &VAR_22);
        if(!FUNC_17(VAR_22, VAR_7)) {
            FUNC_13(VAR_21);

            *VAR_9 = VAR_4 + VAR_15;
            VAR_17 = VAR_5;
            break;
        }


        VAR_16 = FUNC_4(VAR_21, VAR_18, &VAR_13, &VAR_22);
        FUNC_13(VAR_21);
        if(FUNC_2(VAR_16)) {
            if(!FUNC_17(VAR_22, VAR_7)) {
                FUNC_6(&VAR_13);

                *VAR_9 = VAR_4 + VAR_15;
                VAR_17 = VAR_5;
                break;
            }
            FUNC_6(&VAR_13);
        }
    }

    FUNC_6(&VAR_12);
    FUNC_11(VAR_11);
    return VAR_17;
}
