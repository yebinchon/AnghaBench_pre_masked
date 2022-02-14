
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* data; struct TYPE_9__ const* parent; } ;
typedef TYPE_2__ X509_POLICY_NODE ;
struct TYPE_10__ {int nodes; } ;
typedef TYPE_3__ X509_POLICY_LEVEL ;
struct TYPE_8__ {int valid_policy; } ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,int) ;

X509_POLICY_NODE *FUNC_3(const X509_POLICY_LEVEL *VAR_0,
                                  const X509_POLICY_NODE *VAR_1,
                                  const ASN1_OBJECT *VAR_2)
{
    X509_POLICY_NODE *VAR_3;
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_0->nodes); VAR_4++) {
        VAR_3 = FUNC_2(VAR_0->nodes, VAR_4);
        if (VAR_3->parent == VAR_1) {
            if (!FUNC_0(VAR_3->data->valid_policy, VAR_2))
                return VAR_3;
        }
    }
    return ((void*)0);
}
