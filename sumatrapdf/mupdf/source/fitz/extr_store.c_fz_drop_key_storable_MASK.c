
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ refs; int (* drop ) (TYPE_3__*,TYPE_5__*) ;} ;
struct TYPE_13__ {scalar_t__ store_key_refs; TYPE_5__ storable; } ;
typedef TYPE_2__ fz_key_storable ;
struct TYPE_14__ {TYPE_1__* store; } ;
typedef TYPE_3__ fz_context ;
struct TYPE_12__ {scalar_t__ defer_reap_count; int needs_reaping; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*) ;

void FUNC_5(fz_context *VAR_1, const fz_key_storable *VAR_2)
{


 fz_key_storable *VAR_3 = (fz_key_storable *)VAR_2;
 int VAR_4;
 int VAR_5 = 1;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_2(VAR_1, VAR_0);
 if (VAR_3->storable.refs > 0)
 {
  (void)FUNC_0(VAR_3);
  VAR_4 = --VAR_3->storable.refs == 0;
  if (!VAR_4 && VAR_3->storable.refs == VAR_3->store_key_refs)
  {
   if (VAR_1->store->defer_reap_count > 0)
   {
    VAR_1->store->needs_reaping = 1;
   }
   else
   {
    FUNC_1(VAR_1);
    VAR_5 = 0;
   }
  }
 }
 else
  VAR_4 = 0;
 if (VAR_5)
  FUNC_3(VAR_1, VAR_0);







 if (VAR_4)
  VAR_3->storable.drop(VAR_1, &VAR_3->storable);
}
