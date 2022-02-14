
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int originname ;
typedef int XLogRecPtr ;
struct TYPE_8__ {int publication_names; int proto_version; } ;
struct TYPE_9__ {TYPE_1__ logical; } ;
struct TYPE_10__ {int logical; char* slotname; TYPE_2__ proto; int startpoint; } ;
typedef TYPE_3__ WalRcvStreamOptions ;
typedef int TimeLineID ;
struct TYPE_12__ {char* subid; int relid; int userid; int dbid; int reply_time; int last_recv_time; int last_send_time; } ;
struct TYPE_11__ {char* name; char* synccommit; char* slotname; int oid; int publications; int conninfo; int enabled; } ;
typedef int RepOriginId ;
typedef int MemoryContext ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 () ;
 TYPE_5__* FUNC_7 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 TYPE_6__* VAR_6 ;
 TYPE_5__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (char*,char*,int ,int ) ;
 int FUNC_13 () ;
 int VAR_17 ;
 scalar_t__ FUNC_14 () ;
 int VAR_18 ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (int ) ;
 int VAR_19 ;
 int FUNC_19 (char*,int) ;
 int FUNC_20 (int) ;
 int VAR_20 ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ) ;
 char* FUNC_24 (char*) ;
 int FUNC_25 (char*,int) ;
 int FUNC_26 (char*) ;
 int FUNC_27 (int) ;
 int VAR_21 ;
 int FUNC_28 (int ) ;
 int FUNC_29 (char*,int,char*,int) ;
 int VAR_22 ;
 int * FUNC_30 (int ,int,char*,char**) ;
 int FUNC_31 (int *,int *) ;
 int FUNC_32 (int *,TYPE_3__*) ;
 int * VAR_23 ;

void
FUNC_33(Datum VAR_24)
{
 int VAR_25 = FUNC_5(VAR_24);
 MemoryContext VAR_26;
 char VAR_27[VAR_9];
 XLogRecPtr VAR_28;
 char *VAR_29;
 WalRcvStreamOptions VAR_30;


 FUNC_20(VAR_25);


 FUNC_22(VAR_13, VAR_20);
 FUNC_22(VAR_14, VAR_18);
 FUNC_2();







 VAR_6->last_send_time = VAR_6->last_recv_time =
  VAR_6->reply_time = FUNC_6();


 FUNC_19("libpqwalreceiver", 0);


 FUNC_12("session_replication_role", "replica",
     VAR_11, VAR_12);


 FUNC_1(VAR_6->dbid,
             VAR_6->userid,
             0);


 VAR_1 = FUNC_0(VAR_17,
           "ApplyContext",
           VAR_0);
 FUNC_13();
 VAR_26 = FUNC_10(VAR_1);

 VAR_7 = FUNC_7(VAR_6->subid, 1);
 if (!VAR_7)
 {
  FUNC_16(VAR_4,
    (FUNC_17("logical replication apply worker for subscription %u will not "
      "start because the subscription was removed during startup",
      VAR_6->subid)));
  FUNC_23(0);
 }

 VAR_8 = 1;
 FUNC_10(VAR_26);

 if (!VAR_7->enabled)
 {
  FUNC_16(VAR_4,
    (FUNC_17("logical replication apply worker for subscription \"%s\" will not "
      "start because the subscription was disabled during startup",
      VAR_7->name)));

  FUNC_23(0);
 }


 FUNC_12("synchronous_commit", VAR_7->synccommit,
     VAR_10, VAR_12);


 FUNC_3(VAR_15,
          VAR_22,
          (Datum) 0);

 if (FUNC_14())
  FUNC_16(VAR_4,
    (FUNC_17("logical replication table synchronization worker for subscription \"%s\", table \"%s\" has started",
      VAR_7->name, FUNC_18(VAR_6->relid))));
 else
  FUNC_16(VAR_4,
    (FUNC_17("logical replication apply worker for subscription \"%s\" has started",
      VAR_7->name)));

 FUNC_4();


 FUNC_15(VAR_2, "connecting to publisher using connection string \"%s\"",
   VAR_7->conninfo);

 if (FUNC_14())
 {
  char *VAR_31;


  VAR_31 = FUNC_9(&VAR_28);


  VAR_26 = FUNC_10(VAR_1);
  VAR_29 = FUNC_24(VAR_31);
  FUNC_10(VAR_26);

  FUNC_21(VAR_31);
 }
 else
 {

  RepOriginId VAR_32;
  TimeLineID VAR_33;
  char *VAR_34;

  VAR_29 = VAR_7->slotname;






  if (!VAR_29)
   FUNC_16(VAR_3,
     (FUNC_17("subscription has no replication slot set")));


  FUNC_13();
  FUNC_29(VAR_27, sizeof(VAR_27), "pg_%u", VAR_7->oid);
  VAR_32 = FUNC_25(VAR_27, 1);
  if (!FUNC_11(VAR_32))
   VAR_32 = FUNC_26(VAR_27);
  FUNC_28(VAR_32);
  VAR_21 = VAR_32;
  VAR_28 = FUNC_27(0);
  FUNC_4();

  VAR_23 = FUNC_30(VAR_7->conninfo, 1, VAR_7->name,
        &VAR_34);
  if (VAR_23 == ((void*)0))
   FUNC_16(VAR_3,
     (FUNC_17("could not connect to the publisher: %s", VAR_34)));





  (void) FUNC_31(VAR_23, &VAR_33);

 }





 FUNC_3(VAR_16,
          VAR_19,
          (Datum) 0);


 VAR_30.logical = 1;
 VAR_30.startpoint = VAR_28;
 VAR_30.slotname = VAR_29;
 VAR_30.proto.logical.proto_version = VAR_5;
 VAR_30.proto.logical.publication_names = VAR_7->publications;


 FUNC_32(VAR_23, &VAR_30);


 FUNC_8(VAR_28);

 FUNC_23(0);
}
