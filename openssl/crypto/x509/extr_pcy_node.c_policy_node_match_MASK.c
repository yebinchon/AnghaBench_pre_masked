
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* data; } ;
typedef TYPE_1__ X509_POLICY_NODE ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_2__ X509_POLICY_LEVEL ;
struct TYPE_8__ {int flags; int expected_policy_set; int * valid_policy; } ;
typedef TYPE_3__ X509_POLICY_DATA ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int) ;

int FUNC_3(const X509_POLICY_LEVEL *VAR_2,
                      const X509_POLICY_NODE *VAR_3, const ASN1_OBJECT *VAR_4)
{
    int VAR_5;
    ASN1_OBJECT *VAR_6;
    const X509_POLICY_DATA *VAR_7 = VAR_3->data;

    if ((VAR_2->flags & VAR_1)
        || !(VAR_7->flags & VAR_0)) {
        if (!FUNC_0(VAR_7->valid_policy, VAR_4))
            return 1;
        return 0;
    }

    for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_7->expected_policy_set); VAR_5++) {
        VAR_6 = FUNC_2(VAR_7->expected_policy_set, VAR_5);
        if (!FUNC_0(VAR_6, VAR_4))
            return 1;
    }
    return 0;

}
