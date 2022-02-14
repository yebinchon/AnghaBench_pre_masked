
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ head; } ;
typedef TYPE_1__ fz_store ;
struct TYPE_8__ {TYPE_1__* store; } ;
typedef TYPE_2__ fz_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

void
FUNC_3(fz_context *VAR_1)
{
 fz_store *VAR_2 = VAR_1->store;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_1(VAR_1, VAR_0);

 while (VAR_2->head)
  FUNC_0(VAR_1, VAR_2->head);
 FUNC_2(VAR_1, VAR_0);
}
