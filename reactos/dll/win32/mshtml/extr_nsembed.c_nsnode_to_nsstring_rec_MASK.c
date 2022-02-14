
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsIDocument ;
typedef int nsIDOMNodeList ;
typedef int nsIDOMNode ;
typedef int nsIContentSerializer ;
typedef int nsIContent ;
typedef int nsAString ;
typedef scalar_t__ cpp_bool ;
typedef scalar_t__ UINT32 ;
typedef int UINT16 ;
typedef int HRESULT ;







 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;

 int FUNC_4 (int *,int *,int ,int,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *,int *,int *) ;
 int FUNC_9 (int *,int *,int ,int,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__*) ;
 int FUNC_12 (int *,scalar_t__,int **) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int **) ;
 int FUNC_15 (int *,int*) ;
 int FUNC_16 (int *,scalar_t__*) ;
 int FUNC_17 (int *,int *,void**) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static HRESULT FUNC_20(nsIContentSerializer *VAR_5, nsIDOMNode *VAR_6, nsAString *VAR_7)
{
    nsIDOMNodeList *VAR_8 = ((void*)0);
    cpp_bool VAR_9 = VAR_1;
    nsIContent *VAR_10;
    UINT16 VAR_11;
    nsresult VAR_12;

    FUNC_16(VAR_6, &VAR_9);

    VAR_12 = FUNC_15(VAR_6, &VAR_11);
    if(FUNC_2(VAR_12)) {
        FUNC_0("GetType failed: %08x\n", VAR_12);
        return VAR_0;
    }

    if(VAR_11 != 131) {
        VAR_12 = FUNC_17(VAR_6, &VAR_2, (void**)&VAR_10);
        if(FUNC_2(VAR_12)) {
            FUNC_0("Could not get nsIContent interface: %08x\n", VAR_12);
            return VAR_0;
        }
    }

    switch(VAR_11) {
    case 129:
        FUNC_8(VAR_5, VAR_10, VAR_10, VAR_7);
        break;
    case 128:
        FUNC_9(VAR_5, VAR_10, 0, -1, VAR_7);
        break;
    case 133:
        VAR_12 = FUNC_4(VAR_5, VAR_10, 0, -1, VAR_7);
        break;
    case 131: {
        nsIDocument *VAR_13;
        FUNC_17(VAR_6, &VAR_3, (void**)&VAR_13);
        FUNC_6(VAR_5, VAR_13, VAR_7);
        FUNC_19(VAR_13);
        break;
    }
    case 130:
        FUNC_5(VAR_5, VAR_10, VAR_7);
        break;
    case 132:
        break;
    default:
        FUNC_1("Unhandled type %u\n", VAR_11);
    }

    if(VAR_9) {
        UINT32 VAR_14, VAR_15;
        nsIDOMNode *VAR_16;

        FUNC_14(VAR_6, &VAR_8);
        FUNC_11(VAR_8, &VAR_14);

        for(VAR_15=0; VAR_15<VAR_14; VAR_15++) {
            VAR_12 = FUNC_12(VAR_8, VAR_15, &VAR_16);
            if(FUNC_3(VAR_12)) {
                FUNC_20(VAR_5, VAR_16, VAR_7);
                FUNC_18(VAR_16);
            }else {
                FUNC_0("Item failed: %08x\n", VAR_12);
            }
        }

        FUNC_13(VAR_8);
    }

    if(VAR_11 == 129)
        FUNC_7(VAR_5, VAR_10, VAR_7);

    if(VAR_11 != 131)
        FUNC_10(VAR_10);
    return VAR_4;
}
