
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int namenum; scalar_t__ stored; } ;
typedef TYPE_1__ OSSL_NAMEMAP ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

void FUNC_4(OSSL_NAMEMAP *VAR_1)
{
    if (VAR_1 == ((void*)0) || VAR_1->stored)
        return;

    FUNC_2(VAR_1->namenum, VAR_0);
    FUNC_3(VAR_1->namenum);

    FUNC_0(VAR_1->lock);
    FUNC_1(VAR_1);
}
