
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* store; } ;
typedef TYPE_2__ fz_context ;
struct TYPE_6__ {int defer_reap_count; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

void FUNC_2(fz_context *VAR_1)
{
 if (VAR_1->store == ((void*)0))
  return;

 FUNC_0(VAR_1, VAR_0);
 VAR_1->store->defer_reap_count++;
 FUNC_1(VAR_1, VAR_0);
}
