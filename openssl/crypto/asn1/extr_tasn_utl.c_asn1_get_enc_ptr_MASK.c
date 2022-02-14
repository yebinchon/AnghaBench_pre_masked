
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; int enc_offset; } ;
struct TYPE_4__ {TYPE_2__* funcs; } ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_ITEM ;
typedef int ASN1_ENCODING ;
typedef TYPE_2__ ASN1_AUX ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;

__attribute__((used)) static ASN1_ENCODING *FUNC_1(ASN1_VALUE **VAR_1, const ASN1_ITEM *VAR_2)
{
    const ASN1_AUX *VAR_3;

    if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0))
        return ((void*)0);
    VAR_3 = VAR_2->funcs;
    if (VAR_3 == ((void*)0) || (VAR_3->flags & VAR_0) == 0)
        return ((void*)0);
    return FUNC_0(*VAR_1, VAR_3->enc_offset);
}
