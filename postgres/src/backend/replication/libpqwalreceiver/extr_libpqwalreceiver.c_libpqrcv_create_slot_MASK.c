
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_7__ {int streamConn; scalar_t__ logical; } ;
typedef TYPE_1__ WalReceiverConn ;
struct TYPE_8__ {int data; } ;
typedef TYPE_2__ StringInfoData ;
typedef int PGresult ;
typedef int CRSSnapshotAction ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,char*,char const*) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,char const*,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int * FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_3 ;
 char* FUNC_16 (int ) ;

__attribute__((used)) static char *
FUNC_17(WalReceiverConn *VAR_4, const char *VAR_5,
      bool VAR_6, CRSSnapshotAction VAR_7,
      XLogRecPtr *VAR_8)
{
 PGresult *VAR_9;
 StringInfoData VAR_10;
 char *VAR_11;

 FUNC_12(&VAR_10);

 FUNC_8(&VAR_10, "CREATE_REPLICATION_SLOT \"%s\"", VAR_5);

 if (VAR_6)
  FUNC_9(&VAR_10, " TEMPORARY");

 if (VAR_4->logical)
 {
  FUNC_9(&VAR_10, " LOGICAL pgoutput");
  switch (VAR_7)
  {
   case 130:
    FUNC_9(&VAR_10, " EXPORT_SNAPSHOT");
    break;
   case 129:
    FUNC_9(&VAR_10, " NOEXPORT_SNAPSHOT");
    break;
   case 128:
    FUNC_9(&VAR_10, " USE_SNAPSHOT");
    break;
  }
 }

 VAR_9 = FUNC_13(VAR_4->streamConn, VAR_10.data);
 FUNC_15(VAR_10.data);

 if (FUNC_7(VAR_9) != VAR_2)
 {
  FUNC_3(VAR_9);
  FUNC_10(VAR_0,
    (FUNC_11("could not create replication slot \"%s\": %s",
      VAR_5, FUNC_14(FUNC_4(VAR_4->streamConn)))));
 }

 *VAR_8 = FUNC_1(FUNC_2(VAR_3, VAR_1,
              FUNC_0(FUNC_6(VAR_9, 0, 1))));
 if (!FUNC_5(VAR_9, 0, 2))
  VAR_11 = FUNC_16(FUNC_6(VAR_9, 0, 2));
 else
  VAR_11 = ((void*)0);

 FUNC_3(VAR_9);

 return VAR_11;
}
