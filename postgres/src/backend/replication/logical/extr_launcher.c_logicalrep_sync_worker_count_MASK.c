
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* workers; } ;
struct TYPE_3__ {scalar_t__ subid; int relid; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ LogicalRepWorker ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;

int
FUNC_3(Oid VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 FUNC_0(FUNC_1(VAR_1));


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  LogicalRepWorker *VAR_6 = &VAR_0->workers[VAR_4];

  if (VAR_6->subid == VAR_3 && FUNC_2(VAR_6->relid))
   VAR_5++;
 }

 return VAR_5;
}
