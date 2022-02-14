
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nid; } ;
typedef TYPE_1__ ASN1_STRING_TABLE ;



__attribute__((used)) static int FUNC_0(const ASN1_STRING_TABLE *const *VAR_0,
                        const ASN1_STRING_TABLE *const *VAR_1)
{
    return (*VAR_0)->nid - (*VAR_1)->nid;
}
