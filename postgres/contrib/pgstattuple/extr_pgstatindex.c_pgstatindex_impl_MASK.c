
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_12__ {double version; double level; double root_blkno; int internal_pages; int leaf_pages; int empty_pages; int deleted_pages; scalar_t__ max_avail; scalar_t__ fragments; scalar_t__ free_space; } ;
struct TYPE_11__ {double btm_version; double btm_level; double btm_root; } ;
struct TYPE_10__ {scalar_t__ btpo_next; } ;
struct TYPE_9__ {int pd_special; } ;
typedef int Relation ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef int HeapTuple ;
typedef int FunctionCallInfo ;
typedef int Datum ;
typedef int BufferAccessStrategy ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_2__* BTPageOpaque ;
typedef TYPE_3__ BTMetaPageData ;
typedef TYPE_4__ BTIndexStat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char**) ;
 int FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 char* VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int VAR_11 ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (char*,...) ;
 scalar_t__ FUNC_24 (int ,int *,int *) ;
 char* FUNC_25 (char*,double) ;
 char* FUNC_26 (char*) ;
 int FUNC_27 (int ,int ) ;

__attribute__((used)) static Datum
FUNC_28(Relation VAR_14, FunctionCallInfo VAR_15)
{
 Datum VAR_16;
 BlockNumber VAR_17;
 BlockNumber VAR_18;
 BTIndexStat VAR_19;
 BufferAccessStrategy VAR_20 = FUNC_4(VAR_1);

 if (!FUNC_7(VAR_14) || !FUNC_6(VAR_14))
  FUNC_21(VAR_7,
    (FUNC_22(VAR_6),
     FUNC_23("relation \"%s\" is not a btree index",
      FUNC_17(VAR_14))));






 if (FUNC_14(VAR_14))
  FUNC_21(VAR_7,
    (FUNC_22(VAR_5),
     FUNC_23("cannot access temporary tables of other sessions")));




 {
  Buffer VAR_21 = FUNC_15(VAR_14, VAR_9, 0, VAR_11, VAR_20);
  Page VAR_22 = FUNC_1(VAR_21);
  BTMetaPageData *VAR_23 = FUNC_0(VAR_22);

  VAR_19.version = VAR_23->btm_version;
  VAR_19.level = VAR_23->btm_level;
  VAR_19.root_blkno = VAR_23->btm_root;

  FUNC_18(VAR_21);
 }


 VAR_19.internal_pages = 0;
 VAR_19.leaf_pages = 0;
 VAR_19.empty_pages = 0;
 VAR_19.deleted_pages = 0;

 VAR_19.max_avail = 0;
 VAR_19.free_space = 0;

 VAR_19.fragments = 0;




 VAR_17 = FUNC_16(VAR_14);

 for (VAR_18 = 1; VAR_18 < VAR_17; VAR_18++)
 {
  Buffer VAR_24;
  Page VAR_25;
  BTPageOpaque VAR_26;

  FUNC_3();


  VAR_24 = FUNC_15(VAR_14, VAR_9, VAR_18, VAR_11, VAR_20);
  FUNC_8(VAR_24, VAR_3);

  VAR_25 = FUNC_1(VAR_24);
  VAR_26 = (BTPageOpaque) FUNC_13(VAR_25);



  if (FUNC_10(VAR_26))
   VAR_19.deleted_pages++;
  else if (FUNC_9(VAR_26))
   VAR_19.empty_pages++;
  else if (FUNC_11(VAR_26))
  {
   int VAR_27;

   VAR_27 = VAR_2 - (VAR_2 - ((PageHeader) VAR_25)->pd_special + VAR_12);
   VAR_19.max_avail += VAR_27;
   VAR_19.free_space += FUNC_12(VAR_25);

   VAR_19.leaf_pages++;





   if (VAR_26->btpo_next != VAR_10 && VAR_26->btpo_next < VAR_18)
    VAR_19.fragments++;
  }
  else
   VAR_19.internal_pages++;


  FUNC_8(VAR_24, VAR_4);
  FUNC_18(VAR_24);
 }

 FUNC_27(VAR_14, VAR_0);





 {
  TupleDesc VAR_28;
  int VAR_29;
  char *VAR_30[10];
  HeapTuple VAR_31;


  if (FUNC_24(VAR_15, ((void*)0), &VAR_28) != VAR_13)
   FUNC_20(VAR_7, "return type must be a row type");

  VAR_29 = 0;
  VAR_30[VAR_29++] = FUNC_25("%d", VAR_19.version);
  VAR_30[VAR_29++] = FUNC_25("%d", VAR_19.level);
  VAR_30[VAR_29++] = FUNC_25(VAR_8,
          (1 +
        VAR_19.leaf_pages +
        VAR_19.internal_pages +
        VAR_19.deleted_pages +
        VAR_19.empty_pages) * VAR_2);
  VAR_30[VAR_29++] = FUNC_25("%u", VAR_19.root_blkno);
  VAR_30[VAR_29++] = FUNC_25(VAR_8, VAR_19.internal_pages);
  VAR_30[VAR_29++] = FUNC_25(VAR_8, VAR_19.leaf_pages);
  VAR_30[VAR_29++] = FUNC_25(VAR_8, VAR_19.empty_pages);
  VAR_30[VAR_29++] = FUNC_25(VAR_8, VAR_19.deleted_pages);
  if (VAR_19.max_avail > 0)
   VAR_30[VAR_29++] = FUNC_25("%.2f",
           100.0 - (double) VAR_19.free_space / (double) VAR_19.max_avail * 100.0);
  else
   VAR_30[VAR_29++] = FUNC_26("NaN");
  if (VAR_19.leaf_pages > 0)
   VAR_30[VAR_29++] = FUNC_25("%.2f",
           (double) VAR_19.fragments / (double) VAR_19.leaf_pages * 100.0);
  else
   VAR_30[VAR_29++] = FUNC_26("NaN");

  VAR_31 = FUNC_2(FUNC_19(VAR_28),
            VAR_30);

  VAR_16 = FUNC_5(VAR_31);
 }

 return VAR_16;
}
