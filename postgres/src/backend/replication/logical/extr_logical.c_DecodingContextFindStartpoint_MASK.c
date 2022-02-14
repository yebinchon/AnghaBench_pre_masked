
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
typedef int XLogRecord ;
typedef int XLogRecPtr ;
struct TYPE_12__ {int EndRecPtr; } ;
struct TYPE_11__ {TYPE_4__* reader; TYPE_2__* slot; } ;
struct TYPE_9__ {int restart_lsn; int confirmed_flush; } ;
struct TYPE_10__ {int mutex; TYPE_1__ data; } ;
typedef TYPE_2__ ReplicationSlot ;
typedef TYPE_3__ LogicalDecodingContext ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_4__*,int,char**) ;
 int FUNC_6 (int ,char*,...) ;

void
FUNC_7(LogicalDecodingContext *VAR_3)
{
 XLogRecPtr VAR_4;
 ReplicationSlot *VAR_5 = VAR_3->slot;


 VAR_4 = VAR_5->data.restart_lsn;

 FUNC_6(VAR_0, "searching for logical decoding starting point, starting at %X/%X",
   (uint32) (VAR_5->data.restart_lsn >> 32),
   (uint32) VAR_5->data.restart_lsn);


 for (;;)
 {
  XLogRecord *VAR_6;
  char *VAR_7 = ((void*)0);


  VAR_6 = FUNC_5(VAR_3->reader, VAR_4, &VAR_7);
  if (VAR_7)
   FUNC_6(VAR_1, "%s", VAR_7);
  if (!VAR_6)
   FUNC_6(VAR_1, "no record found");

  VAR_4 = VAR_2;

  FUNC_2(VAR_3, VAR_3->reader);


  if (FUNC_1(VAR_3))
   break;

  FUNC_0();
 }

 FUNC_3(&VAR_5->mutex);
 VAR_5->data.confirmed_flush = VAR_3->reader->EndRecPtr;
 FUNC_4(&VAR_5->mutex);
}
