
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int length; int data; int type; } ;
typedef TYPE_1__ ASN1_STRING ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

int FUNC_1(ASN1_STRING *VAR_1, const ASN1_STRING *VAR_2)
{
    if (VAR_2 == ((void*)0))
        return 0;
    VAR_1->type = VAR_2->type;
    if (!FUNC_0(VAR_1, VAR_2->data, VAR_2->length))
        return 0;

    VAR_1->flags &= VAR_0;
    VAR_1->flags |= VAR_2->flags & ~VAR_0;
    return 1;
}
