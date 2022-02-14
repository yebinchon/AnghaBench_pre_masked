
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsIDOMNode ;
typedef int nsIContentSerializer ;
typedef int nsAString ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int *,void**) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int,int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int VAR_4 ;

HRESULT FUNC_8(nsIDOMNode *VAR_5, nsAString *VAR_6)
{
    nsIContentSerializer *VAR_7;
    nsresult VAR_8;
    HRESULT VAR_9;

    VAR_8 = FUNC_3(VAR_4,
            VAR_3, ((void*)0), &VAR_2,
            (void**)&VAR_7);
    if(FUNC_1(VAR_8)) {
        FUNC_0("Could not get nsIContentSerializer: %08x\n", VAR_8);
        return VAR_0;
    }

    VAR_8 = FUNC_5(VAR_7, 0, 100, ((void*)0), VAR_1, VAR_1 );
    if(FUNC_1(VAR_8))
        FUNC_0("Init failed: %08x\n", VAR_8);

    VAR_9 = FUNC_7(VAR_7, VAR_5, VAR_6);
    if(FUNC_2(VAR_9)) {
        VAR_8 = FUNC_4(VAR_7, VAR_6);
        if(FUNC_1(VAR_8))
            FUNC_0("Flush failed: %08x\n", VAR_8);
    }

    FUNC_6(VAR_7);
    return VAR_9;
}
