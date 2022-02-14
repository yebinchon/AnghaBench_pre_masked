
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ windingNumber; } ;
struct TYPE_7__ {scalar_t__ windingNumber; int inside; TYPE_1__* eUp; } ;
struct TYPE_6__ {scalar_t__ winding; } ;
typedef int GLUtesselator ;
typedef TYPE_2__ ActiveRegion ;


 int FUNC_0 (int *,scalar_t__) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2( GLUtesselator *VAR_0, ActiveRegion *VAR_1 )
{
  VAR_1->windingNumber = FUNC_1(VAR_1)->windingNumber + VAR_1->eUp->winding;
  VAR_1->inside = FUNC_0( VAR_0, VAR_1->windingNumber );
}
