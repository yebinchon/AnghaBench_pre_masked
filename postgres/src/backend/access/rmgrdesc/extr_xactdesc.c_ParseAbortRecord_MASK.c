
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int xinfo; } ;
typedef TYPE_1__ xl_xact_xinfo ;
struct TYPE_14__ {int xid; } ;
typedef TYPE_2__ xl_xact_twophase ;
struct TYPE_15__ {int nsubxacts; int subxacts; } ;
typedef TYPE_3__ xl_xact_subxacts ;
struct TYPE_16__ {int nrels; int xnodes; } ;
typedef TYPE_4__ xl_xact_relfilenodes ;
struct TYPE_17__ {int xinfo; int nsubxacts; int nrels; int origin_timestamp; int origin_lsn; int twophase_gid; int twophase_xid; int xnodes; int subxacts; int tsId; int dbId; int xact_time; } ;
typedef TYPE_5__ xl_xact_parsed_abort ;
struct TYPE_18__ {int origin_timestamp; int origin_lsn; } ;
typedef TYPE_6__ xl_xact_origin ;
struct TYPE_19__ {int tsId; int dbId; } ;
typedef TYPE_7__ xl_xact_dbinfo ;
struct TYPE_20__ {int xact_time; } ;
typedef TYPE_8__ xl_xact_abort ;
typedef int xl_origin ;
typedef int uint8 ;
typedef int TransactionId ;
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
 int FUNC_0 (TYPE_6__*,char*,int) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (char*) ;

void
FUNC_4(uint8 VAR_10, xl_xact_abort *VAR_11, xl_xact_parsed_abort *VAR_12)
{
 char *VAR_13 = ((char *) VAR_11) + VAR_0;

 FUNC_1(VAR_12, 0, sizeof(*VAR_12));

 VAR_12->xinfo = 0;


 VAR_12->xact_time = VAR_11->xact_time;

 if (VAR_10 & VAR_9)
 {
  xl_xact_xinfo *VAR_14 = (xl_xact_xinfo *) VAR_13;

  VAR_12->xinfo = VAR_14->xinfo;

  VAR_13 += sizeof(xl_xact_xinfo);
 }

 if (VAR_12->xinfo & VAR_3)
 {
  xl_xact_dbinfo *VAR_15 = (xl_xact_dbinfo *) VAR_13;

  VAR_12->dbId = VAR_15->dbId;
  VAR_12->tsId = VAR_15->tsId;

  VAR_13 += sizeof(xl_xact_dbinfo);
 }

 if (VAR_12->xinfo & VAR_7)
 {
  xl_xact_subxacts *VAR_16 = (xl_xact_subxacts *) VAR_13;

  VAR_12->nsubxacts = VAR_16->nsubxacts;
  VAR_12->subxacts = VAR_16->subxacts;

  VAR_13 += VAR_2;
  VAR_13 += VAR_12->nsubxacts * sizeof(TransactionId);
 }

 if (VAR_12->xinfo & VAR_6)
 {
  xl_xact_relfilenodes *VAR_17 = (xl_xact_relfilenodes *) VAR_13;

  VAR_12->nrels = VAR_17->nrels;
  VAR_12->xnodes = VAR_17->xnodes;

  VAR_13 += VAR_1;
  VAR_13 += VAR_17->nrels * sizeof(RelFileNode);
 }

 if (VAR_12->xinfo & VAR_8)
 {
  xl_xact_twophase *VAR_18 = (xl_xact_twophase *) VAR_13;

  VAR_12->twophase_xid = VAR_18->xid;

  VAR_13 += sizeof(xl_xact_twophase);

  if (VAR_12->xinfo & VAR_4)
  {
   FUNC_2(VAR_12->twophase_gid, VAR_13, sizeof(VAR_12->twophase_gid));
   VAR_13 += FUNC_3(VAR_13) + 1;
  }
 }



 if (VAR_12->xinfo & VAR_5)
 {
  xl_xact_origin VAR_19;


  FUNC_0(&VAR_19, VAR_13, sizeof(VAR_19));

  VAR_12->origin_lsn = VAR_19.origin_lsn;
  VAR_12->origin_timestamp = VAR_19.origin_timestamp;

  VAR_13 += sizeof(xl_xact_origin);
 }
}
