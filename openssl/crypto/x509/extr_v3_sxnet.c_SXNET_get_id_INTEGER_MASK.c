
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ids; } ;
struct TYPE_5__ {int * user; int zone; } ;
typedef TYPE_1__ SXNETID ;
typedef TYPE_2__ SXNET ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int) ;

ASN1_OCTET_STRING *FUNC_3(SXNET *VAR_0, ASN1_INTEGER *VAR_1)
{
    SXNETID *VAR_2;
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0->ids); VAR_3++) {
        VAR_2 = FUNC_2(VAR_0->ids, VAR_3);
        if (!FUNC_0(VAR_2->zone, VAR_1))
            return VAR_2->user;
    }
    return ((void*)0);
}
