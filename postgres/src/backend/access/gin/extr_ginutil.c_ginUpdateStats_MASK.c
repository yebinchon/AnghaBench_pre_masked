
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int metadata; int prevTail; int newRightlink; scalar_t__ ntuples; int node; } ;
typedef TYPE_1__ ginxlogUpdateMeta ;
typedef int XLogRecPtr ;
struct TYPE_16__ {int nEntries; int nDataPages; int nEntryPages; int nTotalPages; } ;
struct TYPE_15__ {int nEntries; int nDataPages; int nEntryPages; int nTotalPages; } ;
struct TYPE_14__ {int pd_lower; } ;
struct TYPE_13__ {int rd_node; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* PageHeader ;
typedef scalar_t__ Page ;
typedef TYPE_4__ GinStatsData ;
typedef TYPE_5__ GinMetaPageData ;
typedef int Buffer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (int *,TYPE_5__*,int) ;

void
FUNC_15(Relation VAR_7, const GinStatsData *VAR_8, bool VAR_9)
{
 Buffer VAR_10;
 Page VAR_11;
 GinMetaPageData *VAR_12;

 VAR_10 = FUNC_6(VAR_7, VAR_1);
 FUNC_3(VAR_10, VAR_0);
 VAR_11 = FUNC_0(VAR_10);
 VAR_12 = FUNC_2(VAR_11);

 FUNC_8();

 VAR_12->nTotalPages = VAR_8->nTotalPages;
 VAR_12->nEntryPages = VAR_8->nEntryPages;
 VAR_12->nDataPages = VAR_8->nDataPages;
 VAR_12->nEntries = VAR_8->nEntries;
 ((PageHeader) VAR_11)->pd_lower =
  ((char *) VAR_12 + sizeof(GinMetaPageData)) - (char *) VAR_11;

 FUNC_4(VAR_10);

 if (FUNC_7(VAR_7) && !VAR_9)
 {
  XLogRecPtr VAR_13;
  ginxlogUpdateMeta VAR_14;

  VAR_14.node = VAR_7->rd_node;
  VAR_14.ntuples = 0;
  VAR_14.newRightlink = VAR_14.prevTail = VAR_2;
  FUNC_14(&VAR_14.metadata, VAR_12, sizeof(GinMetaPageData));

  FUNC_10();
  FUNC_13((char *) &VAR_14, sizeof(ginxlogUpdateMeta));
  FUNC_12(0, VAR_10, VAR_4 | VAR_3);

  VAR_13 = FUNC_11(VAR_5, VAR_6);
  FUNC_5(VAR_11, VAR_13);
 }

 FUNC_9(VAR_10);

 FUNC_1();
}
