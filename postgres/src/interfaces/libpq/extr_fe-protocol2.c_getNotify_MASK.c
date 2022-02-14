
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int data; } ;
struct TYPE_8__ {TYPE_1__* notifyTail; TYPE_1__* notifyHead; TYPE_3__ workBuffer; } ;
struct TYPE_7__ {char* relname; char* extra; int be_pid; struct TYPE_7__* next; } ;
typedef TYPE_1__ PGnotify ;
typedef TYPE_2__ PGconn ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(PGconn *VAR_1)
{
 int VAR_2;
 int VAR_3;
 PGnotify *VAR_4;

 if (FUNC_1(&VAR_2, 4, VAR_1))
  return VAR_0;
 if (FUNC_2(&VAR_1->workBuffer, VAR_1))
  return VAR_0;






 VAR_3 = FUNC_4(VAR_1->workBuffer.data);
 VAR_4 = (PGnotify *) FUNC_0(sizeof(PGnotify) + VAR_3 + 1);
 if (VAR_4)
 {
  VAR_4->relname = (char *) VAR_4 + sizeof(PGnotify);
  FUNC_3(VAR_4->relname, VAR_1->workBuffer.data);

  VAR_4->extra = VAR_4->relname + VAR_3;
  VAR_4->be_pid = VAR_2;
  VAR_4->next = ((void*)0);
  if (VAR_1->notifyTail)
   VAR_1->notifyTail->next = VAR_4;
  else
   VAR_1->notifyHead = VAR_4;
  VAR_1->notifyTail = VAR_4;
 }

 return 0;
}
