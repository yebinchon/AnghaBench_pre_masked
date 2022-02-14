
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int refs; int (* drop ) (TYPE_3__*,TYPE_2__*) ;} ;
typedef TYPE_2__ fz_storable ;
struct TYPE_14__ {TYPE_1__* store; } ;
typedef TYPE_3__ fz_context ;
struct TYPE_12__ {scalar_t__ max; scalar_t__ size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;

void
FUNC_5(fz_context *VAR_2, const fz_storable *VAR_3)
{


 fz_storable *VAR_4 = (fz_storable *)VAR_3;
 int VAR_5;

 if (VAR_4 == ((void*)0))
  return;

 FUNC_1(VAR_2, VAR_0);


 if (VAR_4->refs > 0)
 {
  (void)FUNC_0(VAR_4);
  VAR_5 = --VAR_4->refs;
 }
 else
  VAR_5 = -1;






 if (VAR_2->store->max != VAR_1)
  if (VAR_5 == 1 && VAR_2->store->size > VAR_2->store->max)
   FUNC_3(VAR_2, VAR_2->store->size - VAR_2->store->max);
 FUNC_2(VAR_2, VAR_0);







 if (VAR_5 == 0)
  VAR_4->drop(VAR_2, VAR_4);
}
