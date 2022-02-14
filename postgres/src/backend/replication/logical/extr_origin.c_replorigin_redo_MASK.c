
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int force; int remote_lsn; int node_id; } ;
typedef TYPE_1__ xl_replorigin_set ;
struct TYPE_10__ {int node_id; } ;
typedef TYPE_2__ xl_replorigin_drop ;
typedef int uint8 ;
struct TYPE_11__ {int EndRecPtr; } ;
typedef TYPE_3__ XLogReaderState ;
struct TYPE_12__ {void* local_lsn; void* remote_lsn; int roident; } ;
typedef TYPE_4__ ReplicationState ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ,int) ;

void
FUNC_4(XLogReaderState *VAR_6)
{
 uint8 VAR_7 = FUNC_1(VAR_6) & ~VAR_3;

 switch (VAR_7)
 {
  case 128:
   {
    xl_replorigin_set *VAR_8 =
    (xl_replorigin_set *) FUNC_0(VAR_6);

    FUNC_3(VAR_8->node_id,
           VAR_8->remote_lsn, VAR_6->EndRecPtr,
           VAR_8->force ,
           0 );
    break;
   }
  case 129:
   {
    xl_replorigin_drop *VAR_9;
    int VAR_10;

    VAR_9 = (xl_replorigin_drop *) FUNC_0(VAR_6);

    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
    {
     ReplicationState *VAR_11 = &VAR_5[VAR_10];


     if (VAR_11->roident == VAR_9->node_id)
     {

      VAR_11->roident = VAR_0;
      VAR_11->remote_lsn = VAR_1;
      VAR_11->local_lsn = VAR_1;
      break;
     }
    }
    break;
   }
  default:
   FUNC_2(VAR_2, "replorigin_redo: unknown op code %u", VAR_7);
 }
}
