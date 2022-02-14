
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nbytes; scalar_t__ dbid; int tsid; int data; } ;
typedef TYPE_1__ xl_relmap_update ;
typedef int uint8 ;
typedef int newmap ;
typedef int XLogReaderState ;
typedef int RelMapFile ;


 int FUNC_0 (int) ;
 char* FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,int *,int,int,int,scalar_t__,int ,char*) ;

void
FUNC_9(XLogReaderState *VAR_4)
{
 uint8 VAR_5 = FUNC_3(VAR_4) & ~VAR_3;


 FUNC_0(!FUNC_4(VAR_4));

 if (VAR_5 == VAR_2)
 {
  xl_relmap_update *VAR_6 = (xl_relmap_update *) FUNC_2(VAR_4);
  RelMapFile VAR_7;
  char *VAR_8;

  if (VAR_6->nbytes != sizeof(RelMapFile))
   FUNC_5(VAR_1, "relmap_redo: wrong size %u in relmap update record",
     VAR_6->nbytes);
  FUNC_6(&VAR_7, VAR_6->data, sizeof(VAR_7));


  VAR_8 = FUNC_1(VAR_6->dbid, VAR_6->tsid);
  FUNC_8((VAR_6->dbid == VAR_0), &VAR_7,
        0, 1, 0,
        VAR_6->dbid, VAR_6->tsid, VAR_8);

  FUNC_7(VAR_8);
 }
 else
  FUNC_5(VAR_1, "relmap_redo: unknown op code %u", VAR_5);
}
