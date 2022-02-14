
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* workers; } ;
struct TYPE_4__ {scalar_t__ subid; scalar_t__ proc; scalar_t__ in_use; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ LogicalRepWorker ;
typedef int List ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_2 (int *,TYPE_1__*) ;
 int VAR_3 ;

List *
FUNC_3(Oid VAR_4, bool VAR_5)
{
 int VAR_6;
 List *VAR_7 = VAR_2;

 FUNC_0(FUNC_1(VAR_1));


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  LogicalRepWorker *VAR_8 = &VAR_0->workers[VAR_6];

  if (VAR_8->in_use && VAR_8->subid == VAR_4 && (!VAR_5 || VAR_8->proc))
   VAR_7 = FUNC_2(VAR_7, VAR_8);
 }

 return VAR_7;
}
