
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int xinfo; } ;
typedef TYPE_1__ xl_xact_xinfo ;
struct TYPE_15__ {int xid; } ;
typedef TYPE_2__ xl_xact_twophase ;
struct TYPE_16__ {int nsubxacts; int subxacts; } ;
typedef TYPE_3__ xl_xact_subxacts ;
struct TYPE_17__ {int nrels; int xnodes; } ;
typedef TYPE_4__ xl_xact_relfilenodes ;
struct TYPE_18__ {int xinfo; int nsubxacts; int nrels; int nmsgs; int origin_timestamp; int origin_lsn; int twophase_gid; int twophase_xid; int msgs; int xnodes; int subxacts; int tsId; int dbId; int xact_time; } ;
typedef TYPE_5__ xl_xact_parsed_commit ;
struct TYPE_19__ {int origin_timestamp; int origin_lsn; } ;
typedef TYPE_6__ xl_xact_origin ;
struct TYPE_20__ {int nmsgs; int msgs; } ;
typedef TYPE_7__ xl_xact_invals ;
struct TYPE_21__ {int tsId; int dbId; } ;
typedef TYPE_8__ xl_xact_dbinfo ;
struct TYPE_22__ {int xact_time; } ;
typedef TYPE_9__ xl_xact_commit ;
typedef int xl_origin ;
typedef int uint8 ;
typedef int TransactionId ;
typedef int SharedInvalidationMessage ;
typedef int RelFileNode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_6__*,char*,int) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (char*) ;

void
FUNC_4(uint8 VAR_12, xl_xact_commit *VAR_13, xl_xact_parsed_commit *VAR_14)
{
 char *VAR_15 = ((char *) VAR_13) + VAR_0;

 FUNC_1(VAR_14, 0, sizeof(*VAR_14));

 VAR_14->xinfo = 0;


 VAR_14->xact_time = VAR_13->xact_time;

 if (VAR_12 & VAR_11)
 {
  xl_xact_xinfo *VAR_16 = (xl_xact_xinfo *) VAR_15;

  VAR_14->xinfo = VAR_16->xinfo;

  VAR_15 += sizeof(xl_xact_xinfo);
 }

 if (VAR_14->xinfo & VAR_4)
 {
  xl_xact_dbinfo *VAR_17 = (xl_xact_dbinfo *) VAR_15;

  VAR_14->dbId = VAR_17->dbId;
  VAR_14->tsId = VAR_17->tsId;

  VAR_15 += sizeof(xl_xact_dbinfo);
 }

 if (VAR_14->xinfo & VAR_9)
 {
  xl_xact_subxacts *VAR_18 = (xl_xact_subxacts *) VAR_15;

  VAR_14->nsubxacts = VAR_18->nsubxacts;
  VAR_14->subxacts = VAR_18->subxacts;

  VAR_15 += VAR_3;
  VAR_15 += VAR_14->nsubxacts * sizeof(TransactionId);
 }

 if (VAR_14->xinfo & VAR_8)
 {
  xl_xact_relfilenodes *VAR_19 = (xl_xact_relfilenodes *) VAR_15;

  VAR_14->nrels = VAR_19->nrels;
  VAR_14->xnodes = VAR_19->xnodes;

  VAR_15 += VAR_2;
  VAR_15 += VAR_19->nrels * sizeof(RelFileNode);
 }

 if (VAR_14->xinfo & VAR_6)
 {
  xl_xact_invals *VAR_20 = (xl_xact_invals *) VAR_15;

  VAR_14->nmsgs = VAR_20->nmsgs;
  VAR_14->msgs = VAR_20->msgs;

  VAR_15 += VAR_1;
  VAR_15 += VAR_20->nmsgs * sizeof(SharedInvalidationMessage);
 }

 if (VAR_14->xinfo & VAR_10)
 {
  xl_xact_twophase *VAR_21 = (xl_xact_twophase *) VAR_15;

  VAR_14->twophase_xid = VAR_21->xid;

  VAR_15 += sizeof(xl_xact_twophase);

  if (VAR_14->xinfo & VAR_5)
  {
   FUNC_2(VAR_14->twophase_gid, VAR_15, sizeof(VAR_14->twophase_gid));
   VAR_15 += FUNC_3(VAR_15) + 1;
  }
 }



 if (VAR_14->xinfo & VAR_7)
 {
  xl_xact_origin VAR_22;


  FUNC_0(&VAR_22, VAR_15, sizeof(VAR_22));

  VAR_14->origin_lsn = VAR_22.origin_lsn;
  VAR_14->origin_timestamp = VAR_22.origin_timestamp;

  VAR_15 += sizeof(xl_xact_origin);
 }
}
