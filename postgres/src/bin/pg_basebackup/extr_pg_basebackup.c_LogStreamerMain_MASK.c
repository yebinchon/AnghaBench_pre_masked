
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int stream ;
struct TYPE_9__ {int bgconn; int xlog; int sysidentifier; int timeline; int startptr; } ;
typedef TYPE_1__ logstreamer_param ;
struct TYPE_11__ {int (* finish ) () ;} ;
struct TYPE_10__ {int synchronous; int do_sync; int mark_done; TYPE_3__* walmethod; int replication_slot; int * partial_suffix; int standby_message_timeout; int stop_socket; int stream_stop; int sysidentifier; int timeline; int startpos; } ;
typedef TYPE_2__ StreamCtl ;


 TYPE_3__* FUNC_0 (int ,int ,int) ;
 TYPE_3__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int * VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(logstreamer_param *VAR_8)
{
 StreamCtl VAR_9;

 VAR_4 = 1;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.startpos = VAR_8->startptr;
 VAR_9.timeline = VAR_8->timeline;
 VAR_9.sysidentifier = VAR_8->sysidentifier;
 VAR_9.stream_stop = VAR_5;

 VAR_9.stop_socket = VAR_1[0];



 VAR_9.standby_message_timeout = VAR_7;
 VAR_9.synchronous = 0;

 VAR_9.do_sync = 0;
 VAR_9.mark_done = 1;
 VAR_9.partial_suffix = ((void*)0);
 VAR_9.replication_slot = VAR_6;

 if (VAR_3 == 'p')
  VAR_9.walmethod = FUNC_0(VAR_8->xlog, 0,
             VAR_9.do_sync);
 else
  VAR_9.walmethod = FUNC_1(VAR_8->xlog, VAR_2,
             VAR_9.do_sync);

 if (!FUNC_6(VAR_8->bgconn, &VAR_9))






  return 1;

 if (!VAR_9.walmethod->finish())
 {
  FUNC_8("could not finish writing WAL files: %m");
  return 1;
 }

 FUNC_5(VAR_8->bgconn);

 if (VAR_3 == 'p')
  FUNC_2();
 else
  FUNC_3();
 FUNC_7(VAR_9.walmethod);

 return 0;
}
