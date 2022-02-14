
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_4__ {TYPE_1__* replication_slots; } ;
struct TYPE_3__ {int mutex; int effective_catalog_xmin; int effective_xmin; int in_use; } ;
typedef TYPE_1__ ReplicationSlot ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_4 ;

void
FUNC_8(bool VAR_5)
{
 int VAR_6;
 TransactionId VAR_7 = VAR_0;
 TransactionId VAR_8 = VAR_0;

 FUNC_0(VAR_3 != ((void*)0));

 FUNC_1(VAR_2, VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  ReplicationSlot *VAR_9 = &VAR_3->replication_slots[VAR_6];
  TransactionId VAR_10;
  TransactionId VAR_11;

  if (!VAR_9->in_use)
   continue;

  FUNC_4(&VAR_9->mutex);
  VAR_10 = VAR_9->effective_xmin;
  VAR_11 = VAR_9->effective_catalog_xmin;
  FUNC_5(&VAR_9->mutex);


  if (FUNC_6(VAR_10) &&
   (!FUNC_6(VAR_7) ||
    FUNC_7(VAR_10, VAR_7)))
   VAR_7 = VAR_10;


  if (FUNC_6(VAR_11) &&
   (!FUNC_6(VAR_8) ||
    FUNC_7(VAR_11, VAR_8)))
   VAR_8 = VAR_11;
 }

 FUNC_2(VAR_2);

 FUNC_3(VAR_7, VAR_8, VAR_5);
}
