
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* store; } ;
typedef TYPE_2__ fz_context ;
struct TYPE_7__ {scalar_t__ defer_reap_count; scalar_t__ needs_reaping; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

void FUNC_3(fz_context *VAR_1)
{
 int VAR_2;

 if (VAR_1->store == ((void*)0))
  return;

 FUNC_1(VAR_1, VAR_0);
 --VAR_1->store->defer_reap_count;
 VAR_2 = VAR_1->store->defer_reap_count == 0 && VAR_1->store->needs_reaping;
 if (VAR_2)
  FUNC_0(VAR_1);
 else
  FUNC_2(VAR_1, VAR_0);
}
