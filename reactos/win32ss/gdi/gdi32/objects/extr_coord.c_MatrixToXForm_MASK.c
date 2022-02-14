
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* eDy; void* eDx; void* eM22; void* eM21; void* eM12; void* eM11; } ;
typedef TYPE_1__ XFORML ;
typedef int XFORM ;
struct TYPE_5__ {int efDy; int efDx; int efM22; int efM21; int efM12; int efM11; } ;
typedef TYPE_2__ MATRIX ;


 void* FUNC_0 (int *) ;

void
FUNC_1(XFORM *VAR_0, const MATRIX *VAR_1)
{
    XFORML *VAR_2 = (XFORML*)VAR_0;
    VAR_2->eM11 = FUNC_0(&VAR_1->efM11);
    VAR_2->eM12 = FUNC_0(&VAR_1->efM12);
    VAR_2->eM21 = FUNC_0(&VAR_1->efM21);
    VAR_2->eM22 = FUNC_0(&VAR_1->efM22);
    VAR_2->eDx = FUNC_0(&VAR_1->efDx);
    VAR_2->eDy = FUNC_0(&VAR_1->efDy);
}
