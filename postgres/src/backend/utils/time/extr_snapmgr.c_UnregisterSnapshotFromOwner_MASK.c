
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ regd_count; scalar_t__ active_count; int ph_node; } ;
typedef TYPE_1__* Snapshot ;
typedef int ResourceOwner ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

void
FUNC_6(Snapshot VAR_1, ResourceOwner VAR_2)
{
 if (VAR_1 == ((void*)0))
  return;

 FUNC_0(VAR_1->regd_count > 0);
 FUNC_0(!FUNC_4(&VAR_0));

 FUNC_2(VAR_2, VAR_1);

 VAR_1->regd_count--;
 if (VAR_1->regd_count == 0)
  FUNC_5(&VAR_0, &VAR_1->ph_node);

 if (VAR_1->regd_count == 0 && VAR_1->active_count == 0)
 {
  FUNC_1(VAR_1);
  FUNC_3();
 }
}
