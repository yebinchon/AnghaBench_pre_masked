
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_4__ {int num_heap_tuples; int index; } ;
typedef int Relation ;
typedef TYPE_1__ IndexVacuumInfo ;
typedef int IndexBulkDeleteResult ;
typedef int IndexBulkDeleteCallback ;
typedef int BTCycleId ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int *,int ,void*,int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

IndexBulkDeleteResult *
FUNC_8(IndexVacuumInfo *VAR_1, IndexBulkDeleteResult *VAR_2,
    IndexBulkDeleteCallback VAR_3, void *VAR_4)
{
 Relation VAR_5 = VAR_1->index;
 BTCycleId VAR_6;


 if (VAR_2 == ((void*)0))
  VAR_2 = (IndexBulkDeleteResult *) FUNC_7(sizeof(IndexBulkDeleteResult));



 FUNC_1(VAR_0, FUNC_2(VAR_5));
 {
  TransactionId VAR_7;

  VAR_6 = FUNC_4(VAR_5);

  FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6,
      &VAR_7);






  FUNC_5(VAR_1->index, VAR_7,
          VAR_1->num_heap_tuples);
 }
 FUNC_0(VAR_0, FUNC_2(VAR_5));
 FUNC_3(VAR_5);

 return VAR_2;
}
