
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_4__ {scalar_t__ restart_lsn; } ;
struct TYPE_5__ {int mutex; TYPE_1__ data; } ;
typedef TYPE_2__ ReplicationSlot ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(XLogRecPtr VAR_2)
{
 bool VAR_3 = 0;
 ReplicationSlot *VAR_4 = VAR_1;

 FUNC_0(VAR_2 != VAR_0);
 FUNC_3(&VAR_4->mutex);
 if (VAR_4->data.restart_lsn != VAR_2)
 {
  VAR_3 = 1;
  VAR_4->data.restart_lsn = VAR_2;
 }
 FUNC_4(&VAR_4->mutex);

 if (VAR_3)
 {
  FUNC_1();
  FUNC_2();
 }







}
