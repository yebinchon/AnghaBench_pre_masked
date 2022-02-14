
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_5__ {scalar_t__ pd_prune_xid; } ;
struct TYPE_4__ {scalar_t__ new_prune_xid; int nredirected; int ndead; int nunused; int latestRemovedXid; int nowunused; int nowdead; int redirected; scalar_t__* marked; } ;
typedef int Relation ;
typedef TYPE_1__ PruneState ;
typedef TYPE_2__* PageHeader ;
typedef scalar_t__ Page ;
typedef size_t OffsetNumber ;
typedef int ItemId ;
typedef int Buffer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 size_t FUNC_6 (size_t) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,size_t) ;
 size_t FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ,scalar_t__,int ,int,int ,scalar_t__) ;
 scalar_t__ FUNC_15 (int ,int ,size_t,int ,TYPE_1__*) ;
 int FUNC_16 (int ,int ,int ,scalar_t__,int ,int,int ,scalar_t__,int ) ;
 int FUNC_17 (scalar_t__*,int ,int) ;
 int FUNC_18 (int ,int) ;

int
FUNC_19(Relation VAR_2, Buffer VAR_3, TransactionId VAR_4,
    bool VAR_5, TransactionId *VAR_6)
{
 int VAR_7 = 0;
 Page VAR_8 = FUNC_0(VAR_3);
 OffsetNumber VAR_9,
    VAR_10;
 PruneState VAR_11;
 VAR_11.new_prune_xid = VAR_1;
 VAR_11.latestRemovedXid = *VAR_6;
 VAR_11.nredirected = VAR_11.ndead = VAR_11.nunused = 0;
 FUNC_17(VAR_11.marked, 0, sizeof(VAR_11.marked));


 VAR_10 = FUNC_9(VAR_8);
 for (VAR_9 = VAR_0;
   VAR_9 <= VAR_10;
   VAR_9 = FUNC_6(VAR_9))
 {
  ItemId VAR_12;


  if (VAR_11.marked[VAR_9])
   continue;


  VAR_12 = FUNC_8(VAR_8, VAR_9);
  if (!FUNC_3(VAR_12) || FUNC_2(VAR_12))
   continue;


  VAR_7 += FUNC_15(VAR_2, VAR_3, VAR_9,
          VAR_4,
          &VAR_11);
 }


 FUNC_13();


 if (VAR_11.nredirected > 0 || VAR_11.ndead > 0 || VAR_11.nunused > 0)
 {




  FUNC_14(VAR_3,
        VAR_11.redirected, VAR_11.nredirected,
        VAR_11.nowdead, VAR_11.ndead,
        VAR_11.nowunused, VAR_11.nunused);





  ((PageHeader) VAR_8)->pd_prune_xid = VAR_11.new_prune_xid;






  FUNC_7(VAR_8);

  FUNC_4(VAR_3);




  if (FUNC_12(VAR_2))
  {
   XLogRecPtr VAR_13;

   VAR_13 = FUNC_16(VAR_2, VAR_3,
         VAR_11.redirected, VAR_11.nredirected,
         VAR_11.nowdead, VAR_11.ndead,
         VAR_11.nowunused, VAR_11.nunused,
         VAR_11.latestRemovedXid);

   FUNC_11(FUNC_0(VAR_3), VAR_13);
  }
 }
 else
 {
  if (((PageHeader) VAR_8)->pd_prune_xid != VAR_11.new_prune_xid ||
   FUNC_10(VAR_8))
  {
   ((PageHeader) VAR_8)->pd_prune_xid = VAR_11.new_prune_xid;
   FUNC_7(VAR_8);
   FUNC_5(VAR_3, 1);
  }
 }

 FUNC_1();






 if (VAR_5 && VAR_7 > VAR_11.ndead)
  FUNC_18(VAR_2, VAR_7 - VAR_11.ndead);

 *VAR_6 = VAR_11.latestRemovedXid;
 return VAR_7;
}
