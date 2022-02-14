
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int uint32 ;
typedef int instr_time ;
struct TYPE_27__ {int blk_read_time; int shared_blks_read; int shared_blks_written; int shared_blks_hit; int local_blks_read; int local_blks_written; int local_blks_hit; } ;
struct TYPE_23__ {int relNode; int dbNode; int spcNode; } ;
struct TYPE_26__ {int backend; TYPE_1__ node; } ;
struct TYPE_25__ {int state; } ;
struct TYPE_24__ {TYPE_7__ smgr_rnode; } ;
typedef TYPE_2__* SMgrRelation ;
typedef scalar_t__ ReadBufferMode ;
typedef int Page ;
typedef int ForkNumber ;
typedef TYPE_3__ BufferDesc ;
typedef int BufferAccessStrategy ;
typedef int Buffer ;
typedef int BlockNumber ;
typedef scalar_t__ Block ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,char,int ,int ,int ,int*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 TYPE_3__* FUNC_11 (TYPE_2__*,int ,int ,int*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int ,int ) ;
 int VAR_6 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_3__*,int) ;
 int FUNC_20 (int ,int ,int ,int ,int ,int ,int,int) ;
 int FUNC_21 (int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_22 (TYPE_3__*,int,int) ;
 int FUNC_23 (TYPE_3__*,int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (char*) ;
 int FUNC_27 (char*,int ,int ) ;
 TYPE_8__ VAR_19 ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,int) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (TYPE_7__,int ) ;
 int FUNC_32 (TYPE_2__*,int ,int ,char*,int) ;
 int FUNC_33 (TYPE_2__*,int ) ;
 int FUNC_34 (TYPE_2__*,int ,int ,char*) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;

__attribute__((used)) static Buffer
FUNC_35(SMgrRelation VAR_22, char VAR_23, ForkNumber VAR_24,
      BlockNumber VAR_25, ReadBufferMode VAR_26,
      BufferAccessStrategy VAR_27, bool *VAR_28)
{
 BufferDesc *VAR_29;
 Block VAR_30;
 bool VAR_31;
 bool VAR_32;
 bool VAR_33 = FUNC_18(VAR_22);

 *VAR_28 = 0;


 FUNC_17(VAR_2);

 VAR_32 = (VAR_25 == VAR_6);

 FUNC_21(VAR_24, VAR_25,
            VAR_22->smgr_rnode.node.spcNode,
            VAR_22->smgr_rnode.node.dbNode,
            VAR_22->smgr_rnode.node.relNode,
            VAR_22->smgr_rnode.backend,
            VAR_32);


 if (VAR_32)
  VAR_25 = FUNC_33(VAR_22, VAR_24);

 if (VAR_33)
 {
  VAR_29 = FUNC_11(VAR_22, VAR_24, VAR_25, &VAR_31);
  if (VAR_31)
   VAR_19.local_blks_hit++;
  else if (VAR_32)
   VAR_19.local_blks_written++;
  else if (VAR_26 == VAR_7 || VAR_26 == VAR_8 ||
     VAR_26 == VAR_11)
   VAR_19.local_blks_read++;
 }
 else
 {




  VAR_29 = FUNC_2(VAR_22, VAR_23, VAR_24, VAR_25,
        VAR_27, &VAR_31);
  if (VAR_31)
   VAR_19.shared_blks_hit++;
  else if (VAR_32)
   VAR_19.shared_blks_written++;
  else if (VAR_26 == VAR_7 || VAR_26 == VAR_8 ||
     VAR_26 == VAR_11)
   VAR_19.shared_blks_read++;
 }




 if (VAR_31)
 {
  if (!VAR_32)
  {

   *VAR_28 = 1;
   VAR_16++;

   if (VAR_12)
    VAR_13 += VAR_14;

   FUNC_20(VAR_24, VAR_25,
             VAR_22->smgr_rnode.node.spcNode,
             VAR_22->smgr_rnode.node.dbNode,
             VAR_22->smgr_rnode.node.relNode,
             VAR_22->smgr_rnode.backend,
             VAR_32,
             VAR_31);





   if (!VAR_33)
   {
    if (VAR_26 == VAR_10)
     FUNC_9(FUNC_4(VAR_29),
          VAR_5);
    else if (VAR_26 == VAR_9)
     FUNC_13(FUNC_3(VAR_29));
   }

   return FUNC_3(VAR_29);
  }
  VAR_30 = VAR_33 ? FUNC_10(VAR_29) : FUNC_1(VAR_29);
  if (!FUNC_15((Page) VAR_30))
   FUNC_24(VAR_4,
     (FUNC_27("unexpected data beyond EOF in block %u of relation %s",
       VAR_25, FUNC_31(VAR_22->smgr_rnode, VAR_24)),
      FUNC_26("This has been seen to occur with buggy kernels; consider updating your system.")));







  if (VAR_33)
  {

   uint32 VAR_34 = FUNC_28(&VAR_29->state);

   FUNC_0(VAR_34 & VAR_1);
   VAR_34 &= ~VAR_1;
   FUNC_29(&VAR_29->state, VAR_34);
  }
  else
  {





   do
   {
    uint32 VAR_35 = FUNC_12(VAR_29);

    FUNC_0(VAR_35 & VAR_1);
    VAR_35 &= ~VAR_1;
    FUNC_23(VAR_29, VAR_35);
   } while (!FUNC_19(VAR_29, 1));
  }
 }
 FUNC_0(!(FUNC_28(&VAR_29->state) & VAR_1));

 VAR_30 = VAR_33 ? FUNC_10(VAR_29) : FUNC_1(VAR_29);

 if (VAR_32)
 {

  FUNC_14((char *) VAR_30, 0, VAR_0);

  FUNC_32(VAR_22, VAR_24, VAR_25, (char *) VAR_30, 0);







 }
 else
 {




  if (VAR_26 == VAR_10 || VAR_26 == VAR_9)
   FUNC_14((char *) VAR_30, 0, VAR_0);
  else
  {
   instr_time VAR_36,
      VAR_37;

   if (VAR_20)
    FUNC_7(VAR_36);

   FUNC_34(VAR_22, VAR_24, VAR_25, (char *) VAR_30);

   if (VAR_20)
   {
    FUNC_7(VAR_37);
    FUNC_8(VAR_37, VAR_36);
    FUNC_30(FUNC_6(VAR_37));
    FUNC_5(VAR_19.blk_read_time, VAR_37);
   }


   if (!FUNC_16((Page) VAR_30, VAR_25))
   {
    if (VAR_26 == VAR_11 || VAR_21)
    {
     FUNC_24(VAR_18,
       (FUNC_25(VAR_3),
        FUNC_27("invalid page in block %u of relation %s; zeroing out page",
         VAR_25,
         FUNC_31(VAR_22->smgr_rnode, VAR_24))));
     FUNC_14((char *) VAR_30, 0, VAR_0);
    }
    else
     FUNC_24(VAR_4,
       (FUNC_25(VAR_3),
        FUNC_27("invalid page in block %u of relation %s",
         VAR_25,
         FUNC_31(VAR_22->smgr_rnode, VAR_24))));
   }
  }
 }
 if ((VAR_26 == VAR_10 || VAR_26 == VAR_9) &&
  !VAR_33)
 {
  FUNC_9(FUNC_4(VAR_29), VAR_5);
 }

 if (VAR_33)
 {

  uint32 VAR_38 = FUNC_28(&VAR_29->state);

  VAR_38 |= VAR_1;
  FUNC_29(&VAR_29->state, VAR_38);
 }
 else
 {

  FUNC_22(VAR_29, 0, VAR_1);
 }

 VAR_17++;
 if (VAR_12)
  VAR_13 += VAR_15;

 FUNC_20(VAR_24, VAR_25,
           VAR_22->smgr_rnode.node.spcNode,
           VAR_22->smgr_rnode.node.dbNode,
           VAR_22->smgr_rnode.node.relNode,
           VAR_22->smgr_rnode.backend,
           VAR_32,
           VAR_31);

 return FUNC_3(VAR_29);
}
