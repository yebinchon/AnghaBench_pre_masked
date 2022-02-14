
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int twophase_xid; } ;
typedef TYPE_1__ xl_xact_parsed_commit ;
struct TYPE_16__ {int twophase_xid; } ;
typedef TYPE_2__ xl_xact_parsed_abort ;
typedef int xl_xact_commit ;
struct TYPE_17__ {int xsub; int nsubxacts; int xtop; } ;
typedef TYPE_3__ xl_xact_assignment ;
typedef int xl_xact_abort ;
typedef scalar_t__ uint8 ;
struct TYPE_18__ {int EndRecPtr; int ReadRecPtr; } ;
typedef TYPE_4__ XLogReaderState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int *,TYPE_2__*) ;
 int FUNC_4 (scalar_t__,int *,TYPE_1__*) ;
 int FUNC_5 (scalar_t__,int ,int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_14 (TYPE_2__*,int ) ;
 int FUNC_15 (TYPE_1__*,int ,int ,int ) ;

void
FUNC_16(XLogReaderState *VAR_12)
{
 uint8 VAR_13 = FUNC_9(VAR_12) & VAR_9;


 FUNC_0(!FUNC_12(VAR_12));

 if (VAR_13 == VAR_7)
 {
  xl_xact_commit *VAR_14 = (xl_xact_commit *) FUNC_8(VAR_12);
  xl_xact_parsed_commit VAR_15;

  FUNC_4(FUNC_9(VAR_12), VAR_14, &VAR_15);
  FUNC_15(&VAR_15, FUNC_11(VAR_12),
       VAR_12->EndRecPtr, FUNC_10(VAR_12));
 }
 else if (VAR_13 == VAR_8)
 {
  xl_xact_commit *VAR_16 = (xl_xact_commit *) FUNC_8(VAR_12);
  xl_xact_parsed_commit VAR_17;

  FUNC_4(FUNC_9(VAR_12), VAR_16, &VAR_17);
  FUNC_15(&VAR_17, VAR_17.twophase_xid,
       VAR_12->EndRecPtr, FUNC_10(VAR_12));


  FUNC_1(VAR_3, VAR_0);
  FUNC_6(VAR_17.twophase_xid, 0);
  FUNC_2(VAR_3);
 }
 else if (VAR_13 == VAR_4)
 {
  xl_xact_abort *VAR_18 = (xl_xact_abort *) FUNC_8(VAR_12);
  xl_xact_parsed_abort VAR_19;

  FUNC_3(FUNC_9(VAR_12), VAR_18, &VAR_19);
  FUNC_14(&VAR_19, FUNC_11(VAR_12));
 }
 else if (VAR_13 == VAR_5)
 {
  xl_xact_abort *VAR_20 = (xl_xact_abort *) FUNC_8(VAR_12);
  xl_xact_parsed_abort VAR_21;

  FUNC_3(FUNC_9(VAR_12), VAR_20, &VAR_21);
  FUNC_14(&VAR_21, VAR_21.twophase_xid);


  FUNC_1(VAR_3, VAR_0);
  FUNC_6(VAR_21.twophase_xid, 0);
  FUNC_2(VAR_3);
 }
 else if (VAR_13 == VAR_10)
 {




  FUNC_1(VAR_3, VAR_0);
  FUNC_5(FUNC_8(VAR_12),
        VAR_12->ReadRecPtr,
        VAR_12->EndRecPtr,
        FUNC_10(VAR_12));
  FUNC_2(VAR_3);
 }
 else if (VAR_13 == VAR_6)
 {
  xl_xact_assignment *VAR_22 = (xl_xact_assignment *) FUNC_8(VAR_12);

  if (VAR_11 >= VAR_2)
   FUNC_7(VAR_22->xtop,
          VAR_22->nsubxacts, VAR_22->xsub);
 }
 else
  FUNC_13(VAR_1, "xact_redo: unknown op code %u", VAR_13);
}
