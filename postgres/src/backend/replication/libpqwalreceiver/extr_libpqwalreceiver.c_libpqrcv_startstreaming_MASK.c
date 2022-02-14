
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_16__ {scalar_t__ logical; int streamConn; } ;
typedef TYPE_4__ WalReceiverConn ;
struct TYPE_14__ {char* startpointTLI; } ;
struct TYPE_13__ {char* proto_version; int * publication_names; } ;
struct TYPE_15__ {TYPE_2__ physical; TYPE_1__ logical; } ;
struct TYPE_17__ {scalar_t__ logical; char* slotname; int startpoint; TYPE_3__ proto; } ;
typedef TYPE_5__ WalRcvStreamOptions ;
struct TYPE_18__ {char* data; } ;
typedef TYPE_6__ StringInfoData ;
typedef int PGresult ;
typedef int List ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_6__*,char*,char*,...) ;
 int FUNC_7 (TYPE_6__*,char) ;
 int FUNC_8 (TYPE_6__*,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (TYPE_6__*) ;
 int * FUNC_12 (int ,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (int ,int *) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static bool
FUNC_17(WalReceiverConn *VAR_3,
      const WalRcvStreamOptions *VAR_4)
{
 StringInfoData VAR_5;
 PGresult *VAR_6;

 FUNC_0(VAR_4->logical == VAR_3->logical);
 FUNC_0(VAR_4->slotname || !VAR_4->logical);

 FUNC_11(&VAR_5);


 FUNC_8(&VAR_5, "START_REPLICATION");
 if (VAR_4->slotname != ((void*)0))
  FUNC_6(&VAR_5, " SLOT \"%s\"",
       VAR_4->slotname);

 if (VAR_4->logical)
  FUNC_8(&VAR_5, " LOGICAL");

 FUNC_6(&VAR_5, " %X/%X",
      (uint32) (VAR_4->startpoint >> 32),
      (uint32) VAR_4->startpoint);





 if (VAR_4->logical)
 {
  char *VAR_7;
  List *VAR_8;
  char *VAR_9;

  FUNC_8(&VAR_5, " (");

  FUNC_6(&VAR_5, "proto_version '%u'",
       VAR_4->proto.logical.proto_version);

  VAR_8 = VAR_4->proto.logical.publication_names;
  VAR_7 = FUNC_15(VAR_3->streamConn, VAR_8);
  if (!VAR_7)
   FUNC_9(VAR_0,
     (FUNC_10("could not start WAL streaming: %s",
       FUNC_13(FUNC_2(VAR_3->streamConn)))));
  VAR_9 = FUNC_3(VAR_3->streamConn, VAR_7,
             FUNC_16(VAR_7));
  if (!VAR_9)
   FUNC_9(VAR_0,
     (FUNC_10("could not start WAL streaming: %s",
       FUNC_13(FUNC_2(VAR_3->streamConn)))));
  FUNC_6(&VAR_5, ", publication_names %s", VAR_9);
  FUNC_4(VAR_9);
  FUNC_14(VAR_7);

  FUNC_7(&VAR_5, ')');
 }
 else
  FUNC_6(&VAR_5, " TIMELINE %u",
       VAR_4->proto.physical.startpointTLI);


 VAR_6 = FUNC_12(VAR_3->streamConn, VAR_5.data);
 FUNC_14(VAR_5.data);

 if (FUNC_5(VAR_6) == VAR_1)
 {
  FUNC_1(VAR_6);
  return 0;
 }
 else if (FUNC_5(VAR_6) != VAR_2)
 {
  FUNC_1(VAR_6);
  FUNC_9(VAR_0,
    (FUNC_10("could not start WAL streaming: %s",
      FUNC_13(FUNC_2(VAR_3->streamConn)))));
 }
 FUNC_1(VAR_6);
 return 1;
}
