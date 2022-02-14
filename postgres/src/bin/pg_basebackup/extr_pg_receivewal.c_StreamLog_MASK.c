
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef int stream ;
typedef int XLogRecPtr ;
typedef int TimeLineID ;
struct TYPE_7__ {int (* finish ) () ;} ;
struct TYPE_6__ {int startpos; int mark_done; char* partial_suffix; TYPE_2__* walmethod; int replication_slot; int do_sync; int synchronous; int standby_message_timeout; int stop_socket; int stream_stop; int timeline; } ;
typedef TYPE_1__ StreamCtl ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int * FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,int *,int *,int*,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 () ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_14(void)
{
 XLogRecPtr VAR_12;
 TimeLineID VAR_13;
 StreamCtl VAR_14;

 FUNC_5(&VAR_14, 0, sizeof(VAR_14));




 if (VAR_5 == ((void*)0))
  VAR_5 = FUNC_4();
 if (!VAR_5)

  return;

 if (!FUNC_0(VAR_5))
 {





  FUNC_10(1);
 }






 if (!FUNC_8(VAR_5, ((void*)0), &VAR_13, &VAR_12, ((void*)0)))
  FUNC_10(1);




 VAR_14.startpos = FUNC_2(&VAR_14.timeline);
 if (VAR_14.startpos == VAR_0)
 {
  VAR_14.startpos = VAR_12;
  VAR_14.timeline = VAR_13;
 }




 VAR_14.startpos -= FUNC_9(VAR_14.startpos, VAR_2);




 if (VAR_11)
  FUNC_12("starting log streaming at %X/%X (timeline %u)",
     (uint32) (VAR_14.startpos >> 32), (uint32) VAR_14.startpos,
     VAR_14.timeline);

 VAR_14.stream_stop = VAR_9;
 VAR_14.stop_socket = VAR_1;
 VAR_14.standby_message_timeout = VAR_8;
 VAR_14.synchronous = VAR_10;
 VAR_14.do_sync = VAR_6;
 VAR_14.mark_done = 0;
 VAR_14.walmethod = FUNC_1(VAR_3, VAR_4,
            VAR_14.do_sync);
 VAR_14.partial_suffix = ".partial";
 VAR_14.replication_slot = VAR_7;

 FUNC_7(VAR_5, &VAR_14);

 if (!VAR_14.walmethod->finish())
 {
  FUNC_12("could not finish writing WAL files: %m");
  return;
 }

 FUNC_6(VAR_5);
 VAR_5 = ((void*)0);

 FUNC_3();
 FUNC_11(VAR_14.walmethod);

 VAR_5 = ((void*)0);
}
