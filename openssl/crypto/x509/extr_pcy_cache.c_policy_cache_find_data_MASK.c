
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * valid_policy; } ;
typedef TYPE_1__ X509_POLICY_DATA ;
struct TYPE_8__ {int data; } ;
typedef TYPE_2__ X509_POLICY_CACHE ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int) ;

X509_POLICY_DATA *FUNC_2(const X509_POLICY_CACHE *VAR_0,
                                         const ASN1_OBJECT *VAR_1)
{
    int VAR_2;
    X509_POLICY_DATA VAR_3;
    VAR_3.valid_policy = (ASN1_OBJECT *)VAR_1;
    VAR_2 = FUNC_0(VAR_0->data, &VAR_3);
    return FUNC_1(VAR_0->data, VAR_2);
}
