
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* TransactionId ;
struct TYPE_2__ {void* replication_slot_catalog_xmin; void* replication_slot_xmin; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_4(TransactionId VAR_3, TransactionId VAR_4,
        bool VAR_5)
{
 FUNC_0(!VAR_5 || FUNC_2(VAR_1));

 if (!VAR_5)
  FUNC_1(VAR_1, VAR_0);

 VAR_2->replication_slot_xmin = VAR_3;
 VAR_2->replication_slot_catalog_xmin = VAR_4;

 if (!VAR_5)
  FUNC_3(VAR_1);
}
