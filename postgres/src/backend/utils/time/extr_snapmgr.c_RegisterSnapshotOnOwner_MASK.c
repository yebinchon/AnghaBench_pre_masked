
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int regd_count; int ph_node; scalar_t__ copied; } ;
typedef TYPE_1__* Snapshot ;
typedef int ResourceOwner ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;

Snapshot
FUNC_4(Snapshot VAR_2, ResourceOwner VAR_3)
{
 Snapshot VAR_4;

 if (VAR_2 == VAR_0)
  return VAR_0;


 VAR_4 = VAR_2->copied ? VAR_2 : FUNC_0(VAR_2);


 FUNC_1(VAR_3);
 VAR_4->regd_count++;
 FUNC_2(VAR_3, VAR_4);

 if (VAR_4->regd_count == 1)
  FUNC_3(&VAR_1, &VAR_4->ph_node);

 return VAR_4;
}
