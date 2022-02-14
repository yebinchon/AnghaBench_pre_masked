
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {char* data; } ;
struct TYPE_8__ {TYPE_1__* notifyTail; TYPE_1__* notifyHead; TYPE_3__ workBuffer; } ;
struct TYPE_7__ {char* relname; char* extra; int be_pid; struct TYPE_7__* next; } ;
typedef TYPE_1__ PGnotify ;
typedef TYPE_2__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int*,int,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(PGconn *VAR_1)
{
 int VAR_2;
 char *VAR_3;
 int VAR_4;
 int VAR_5;
 PGnotify *VAR_6;

 if (FUNC_2(&VAR_2, 4, VAR_1))
  return VAR_0;
 if (FUNC_3(&VAR_1->workBuffer, VAR_1))
  return VAR_0;

 VAR_3 = FUNC_5(VAR_1->workBuffer.data);
 if (!VAR_3)
  return VAR_0;
 if (FUNC_3(&VAR_1->workBuffer, VAR_1))
 {
  FUNC_0(VAR_3);
  return VAR_0;
 }






 VAR_4 = FUNC_6(VAR_3);
 VAR_5 = FUNC_6(VAR_1->workBuffer.data);
 VAR_6 = (PGnotify *) FUNC_1(sizeof(PGnotify) + VAR_4 + VAR_5 + 2);
 if (VAR_6)
 {
  VAR_6->relname = (char *) VAR_6 + sizeof(PGnotify);
  FUNC_4(VAR_6->relname, VAR_3);
  VAR_6->extra = VAR_6->relname + VAR_4 + 1;
  FUNC_4(VAR_6->extra, VAR_1->workBuffer.data);
  VAR_6->be_pid = VAR_2;
  VAR_6->next = ((void*)0);
  if (VAR_1->notifyTail)
   VAR_1->notifyTail->next = VAR_6;
  else
   VAR_1->notifyHead = VAR_6;
  VAR_1->notifyTail = VAR_6;
 }

 FUNC_0(VAR_3);
 return 0;
}
