
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* parent; } ;
typedef TYPE_1__ HTMLOuterWindow ;



void FUNC_0(HTMLOuterWindow *VAR_0, HTMLOuterWindow **VAR_1)
{
    HTMLOuterWindow *VAR_2;

    for(VAR_2 = VAR_0; VAR_2->parent; VAR_2 = VAR_2->parent);
    *VAR_1 = VAR_2;
}
