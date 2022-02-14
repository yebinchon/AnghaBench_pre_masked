
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509_POLICY_NODE ;
struct TYPE_8__ {int * anyPolicy; int nodes; } ;
typedef TYPE_1__ X509_POLICY_LEVEL ;
struct TYPE_9__ {int valid_policy; } ;
typedef TYPE_2__ X509_POLICY_DATA ;


 int * FUNC_0 (TYPE_1__*,TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(X509_POLICY_LEVEL *VAR_0,
                                    X509_POLICY_DATA *VAR_1)
{
    X509_POLICY_LEVEL *VAR_2 = VAR_0 - 1;
    int VAR_3, VAR_4 = 0;


    for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_2->nodes); VAR_3++) {
        X509_POLICY_NODE *VAR_5 = FUNC_3(VAR_2->nodes, VAR_3);

        if (FUNC_1(VAR_2, VAR_5, VAR_1->valid_policy)) {
            if (FUNC_0(VAR_0, VAR_1, VAR_5, ((void*)0)) == ((void*)0))
                return 0;
            VAR_4 = 1;
        }
    }
    if (!VAR_4 && VAR_2->anyPolicy) {
        if (FUNC_0(VAR_0, VAR_1, VAR_2->anyPolicy, ((void*)0)) == ((void*)0))
            return 0;
    }
    return 1;
}
