
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsISupports ;
typedef int nsIDOMNode ;
typedef int nsIDOMComment ;
typedef int nsAString ;
struct TYPE_4__ {int nsdoc; } ;
typedef int PRUnichar ;
typedef TYPE_1__ HTMLDocumentNode ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const**) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,void**) ;
 int FUNC_11 (int ,int *,int *) ;

__attribute__((used)) static nsresult FUNC_12(HTMLDocumentNode *VAR_2, nsISupports *VAR_3, nsISupports *VAR_4)
{
    const PRUnichar *VAR_5;
    nsIDOMComment *VAR_6;
    PRUnichar *VAR_7;
    nsAString VAR_8;
    nsresult VAR_9;

    VAR_9 = FUNC_10(VAR_3, &VAR_0, (void**)&VAR_6);
    if(FUNC_2(VAR_9)) {
        FUNC_0("Could not get nsIDOMComment iface:%08x\n", VAR_9);
        return VAR_9;
    }

    FUNC_7(&VAR_8, ((void*)0));
    VAR_9 = FUNC_8(VAR_6, &VAR_8);
    if(FUNC_2(VAR_9))
        return VAR_9;

    FUNC_6(&VAR_8, &VAR_5);
    VAR_7 = FUNC_3(VAR_2, VAR_5);
    FUNC_5(&VAR_8);

    if(VAR_7) {
        HRESULT VAR_10;

        VAR_10 = FUNC_11(VAR_2->nsdoc, (nsIDOMNode*)VAR_6, VAR_7);
        FUNC_4(VAR_7);
        if(FUNC_1(VAR_10))
            VAR_9 = VAR_1;
    }


    FUNC_9(VAR_6);
    return VAR_9;
}
