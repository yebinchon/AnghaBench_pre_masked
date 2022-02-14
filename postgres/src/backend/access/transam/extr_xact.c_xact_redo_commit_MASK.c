
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xinfo; scalar_t__ nrels; int xnodes; int origin_lsn; int subxacts; int nsubxacts; int tsId; int dbId; int nmsgs; int msgs; int xact_time; int origin_timestamp; } ;
typedef TYPE_1__ xl_xact_parsed_commit ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
typedef int TimestampTz ;
typedef int RepOriginId ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,int ,int ,int,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_18(xl_xact_parsed_commit *VAR_5,
     TransactionId VAR_6,
     XLogRecPtr VAR_7,
     RepOriginId VAR_8)
{
 TransactionId VAR_9;
 TimestampTz VAR_10;

 FUNC_1(FUNC_9(VAR_6));

 VAR_9 = FUNC_10(VAR_6, VAR_5->nsubxacts, VAR_5->subxacts);


 FUNC_0(VAR_9);

 FUNC_1(((VAR_5->xinfo & VAR_3) == 0) ==
     (VAR_8 == VAR_0));

 if (VAR_5->xinfo & VAR_3)
  VAR_10 = VAR_5->origin_timestamp;
 else
  VAR_10 = VAR_5->xact_time;


 FUNC_11(VAR_6, VAR_5->nsubxacts, VAR_5->subxacts,
           VAR_10, VAR_8, 0);

 if (VAR_4 == VAR_1)
 {



  FUNC_8(VAR_6, VAR_5->nsubxacts, VAR_5->subxacts);
 }
 else
 {
  FUNC_5(VAR_9);
  FUNC_7(
          VAR_6, VAR_5->nsubxacts, VAR_5->subxacts, VAR_7);




  FUNC_3(
             VAR_6, VAR_5->nsubxacts, VAR_5->subxacts, VAR_9);






  FUNC_4(
            VAR_5->msgs, VAR_5->nmsgs,
            FUNC_16(VAR_5->xinfo),
            VAR_5->dbId, VAR_5->tsId);






  if (VAR_5->xinfo & VAR_2)
   FUNC_6(VAR_6, VAR_5->nsubxacts, VAR_5->subxacts);
 }

 if (VAR_5->xinfo & VAR_3)
 {

  FUNC_17(VAR_8, VAR_5->origin_lsn, VAR_7,
         0 , 0 );
 }


 if (VAR_5->nrels > 0)
 {
  FUNC_12(VAR_7);


  FUNC_2(VAR_5->xnodes, VAR_5->nrels, 1);
 }
 if (FUNC_15(VAR_5->xinfo))
  FUNC_12(VAR_7);






 if (FUNC_14(VAR_5->xinfo))
  FUNC_13();
}
