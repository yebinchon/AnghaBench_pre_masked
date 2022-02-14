
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_POLICY_NODE ;
struct TYPE_3__ {int nodes; int * anyPolicy; } ;
typedef TYPE_1__ X509_POLICY_LEVEL ;


 int * FUNC_0 (int ,int) ;

X509_POLICY_NODE *FUNC_1(X509_POLICY_LEVEL *VAR_0, int VAR_1)
{
    if (!VAR_0)
        return ((void*)0);
    if (VAR_0->anyPolicy) {
        if (VAR_1 == 0)
            return VAR_0->anyPolicy;
        VAR_1--;
    }
    return FUNC_0(VAR_0->nodes, VAR_1);
}
