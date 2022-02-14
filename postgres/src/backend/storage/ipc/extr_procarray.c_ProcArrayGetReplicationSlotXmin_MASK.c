
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_2__ {int replication_slot_catalog_xmin; int replication_slot_xmin; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_2(TransactionId *VAR_3,
        TransactionId *VAR_4)
{
 FUNC_0(VAR_1, VAR_0);

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_2->replication_slot_xmin;

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_2->replication_slot_catalog_xmin;

 FUNC_1(VAR_1);
}
