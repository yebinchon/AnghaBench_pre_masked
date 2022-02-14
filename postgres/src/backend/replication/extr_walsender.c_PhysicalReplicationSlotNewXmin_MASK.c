
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* TransactionId ;
struct TYPE_7__ {int xmin; } ;
struct TYPE_5__ {void* xmin; void* catalog_xmin; } ;
struct TYPE_6__ {int mutex; void* effective_catalog_xmin; TYPE_1__ data; void* effective_xmin; } ;
typedef TYPE_2__ ReplicationSlot ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*,void*) ;

__attribute__((used)) static void
FUNC_6(TransactionId VAR_3, TransactionId VAR_4)
{
 bool VAR_5 = 0;
 ReplicationSlot *VAR_6 = VAR_2;

 FUNC_2(&VAR_6->mutex);
 VAR_1->xmin = VAR_0;






 if (!FUNC_4(VAR_6->data.xmin) ||
  !FUNC_4(VAR_3) ||
  FUNC_5(VAR_6->data.xmin, VAR_3))
 {
  VAR_5 = 1;
  VAR_6->data.xmin = VAR_3;
  VAR_6->effective_xmin = VAR_3;
 }
 if (!FUNC_4(VAR_6->data.catalog_xmin) ||
  !FUNC_4(VAR_4) ||
  FUNC_5(VAR_6->data.catalog_xmin, VAR_4))
 {
  VAR_5 = 1;
  VAR_6->data.catalog_xmin = VAR_4;
  VAR_6->effective_catalog_xmin = VAR_4;
 }
 FUNC_3(&VAR_6->mutex);

 if (VAR_5)
 {
  FUNC_0();
  FUNC_1(0);
 }
}
