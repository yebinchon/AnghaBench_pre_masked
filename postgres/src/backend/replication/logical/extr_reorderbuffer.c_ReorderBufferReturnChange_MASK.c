
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * relids; } ;
struct TYPE_9__ {TYPE_5__* message; TYPE_5__* prefix; } ;
struct TYPE_8__ {int * oldtuple; int * newtuple; } ;
struct TYPE_11__ {TYPE_3__ truncate; int * snapshot; TYPE_2__ msg; TYPE_1__ tp; } ;
struct TYPE_12__ {int action; TYPE_4__ data; } ;
typedef TYPE_5__ ReorderBufferChange ;
typedef int ReorderBuffer ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_5__*) ;

void
FUNC_4(ReorderBuffer *VAR_0, ReorderBufferChange *VAR_1)
{

 switch (VAR_1->action)
 {
  case 136:
  case 128:
  case 137:
  case 132:
   if (VAR_1->data.tp.newtuple)
   {
    FUNC_2(VAR_0, VAR_1->data.tp.newtuple);
    VAR_1->data.tp.newtuple = ((void*)0);
   }

   if (VAR_1->data.tp.oldtuple)
   {
    FUNC_2(VAR_0, VAR_1->data.tp.oldtuple);
    VAR_1->data.tp.oldtuple = ((void*)0);
   }
   break;
  case 130:
   if (VAR_1->data.msg.prefix != ((void*)0))
    FUNC_3(VAR_1->data.msg.prefix);
   VAR_1->data.msg.prefix = ((void*)0);
   if (VAR_1->data.msg.message != ((void*)0))
    FUNC_3(VAR_1->data.msg.message);
   VAR_1->data.msg.message = ((void*)0);
   break;
  case 134:
   if (VAR_1->data.snapshot)
   {
    FUNC_0(VAR_0, VAR_1->data.snapshot);
    VAR_1->data.snapshot = ((void*)0);
   }
   break;

  case 129:
   if (VAR_1->data.truncate.relids != ((void*)0))
   {
    FUNC_1(VAR_0, VAR_1->data.truncate.relids);
    VAR_1->data.truncate.relids = ((void*)0);
   }
   break;
  case 133:
  case 135:
  case 131:
   break;
 }

 FUNC_3(VAR_1);
}
