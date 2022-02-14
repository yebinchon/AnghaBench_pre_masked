
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int policies; int * default_policy; TYPE_1__* request; } ;
struct TYPE_6__ {int * policy_id; } ;
typedef TYPE_2__ TS_RESP_CTX ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,int) ;

__attribute__((used)) static ASN1_OBJECT *FUNC_6(TS_RESP_CTX *VAR_5)
{
    ASN1_OBJECT *VAR_6 = VAR_5->request->policy_id;
    ASN1_OBJECT *VAR_7 = ((void*)0);
    int VAR_8;

    if (VAR_5->default_policy == ((void*)0)) {
        FUNC_3(VAR_0, VAR_2);
        return ((void*)0);
    }
    if (!VAR_6 || !FUNC_0(VAR_6, VAR_5->default_policy))
        VAR_7 = VAR_5->default_policy;


    for (VAR_8 = 0; !VAR_7 && VAR_8 < FUNC_4(VAR_5->policies); ++VAR_8) {
        ASN1_OBJECT *VAR_9 = FUNC_5(VAR_5->policies, VAR_8);
        if (!FUNC_0(VAR_6, VAR_9))
            VAR_7 = VAR_9;
    }
    if (VAR_7 == ((void*)0)) {
        FUNC_3(VAR_0, VAR_3);
        FUNC_2(VAR_5, VAR_4,
                                    "Requested policy is not " "supported.");
        FUNC_1(VAR_5, VAR_1);
    }
    return VAR_7;
}
