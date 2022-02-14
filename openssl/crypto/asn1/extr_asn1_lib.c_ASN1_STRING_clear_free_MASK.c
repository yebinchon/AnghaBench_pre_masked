
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int length; scalar_t__ data; } ;
typedef TYPE_1__ ASN1_STRING ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(ASN1_STRING *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;
    if (VAR_1->data && !(VAR_1->flags & VAR_0))
        FUNC_1(VAR_1->data, VAR_1->length);
    FUNC_0(VAR_1);
}
