
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int db; int queryFout; } ;
struct TYPE_5__ {char* extra; char* relname; int be_pid; } ;
typedef TYPE_1__ PGnotify ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*,...) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_6(void)
{
 PGnotify *VAR_1;

 FUNC_0(VAR_0.db);
 while ((VAR_1 = FUNC_2(VAR_0.db)) != ((void*)0))
 {

  if (VAR_1->extra[0])
   FUNC_5(VAR_0.queryFout, FUNC_3("Asynchronous notification \"%s\" with payload \"%s\" received from server process with PID %d.\n"),
     VAR_1->relname, VAR_1->extra, VAR_1->be_pid);
  else
   FUNC_5(VAR_0.queryFout, FUNC_3("Asynchronous notification \"%s\" received from server process with PID %d.\n"),
     VAR_1->relname, VAR_1->be_pid);
  FUNC_4(VAR_0.queryFout);
  FUNC_1(VAR_1);
  FUNC_0(VAR_0.db);
 }
}
