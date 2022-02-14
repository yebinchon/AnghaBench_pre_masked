
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; struct TYPE_4__* data; } ;
typedef TYPE_1__ ASN1_STRING ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(ASN1_STRING *VAR_1, int VAR_2)
{
    if (VAR_1 == ((void*)0))
        return;
    if (!(VAR_1->flags & VAR_0))
        FUNC_0(VAR_1->data);
    if (VAR_2 == 0)
        FUNC_0(VAR_1);
}
