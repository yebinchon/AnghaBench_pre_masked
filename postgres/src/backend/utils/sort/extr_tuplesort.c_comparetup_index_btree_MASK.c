
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_12__ {int nKeys; int indexRel; int heapRel; scalar_t__ enforceUnique; TYPE_3__* sortKeys; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int TupleDesc ;
struct TYPE_15__ {int t_tid; } ;
struct TYPE_14__ {scalar_t__ abbrev_converter; } ;
struct TYPE_13__ {int isnull1; scalar_t__ tuple; int datum1; } ;
typedef TYPE_2__ SortTuple ;
typedef TYPE_3__* SortSupport ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_4__* IndexTuple ;
typedef int Datum ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int ,int,int ,int,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,int,int ,int,TYPE_3__*) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int ,int *,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_4__*,int ,int *,int*) ;
 int FUNC_14 (TYPE_4__*,int,int ,int*) ;

__attribute__((used)) static int
FUNC_15(const SortTuple *VAR_3, const SortTuple *VAR_4,
        Tuplesortstate *VAR_5)
{





 SortSupport VAR_6 = VAR_5->sortKeys;
 IndexTuple VAR_7;
 IndexTuple VAR_8;
 int VAR_9;
 TupleDesc VAR_10;
 bool VAR_11 = 0;
 int VAR_12;
 int32 VAR_13;
 Datum VAR_14,
    VAR_15;
 bool VAR_16,
    VAR_17;



 VAR_13 = FUNC_1(VAR_3->datum1, VAR_3->isnull1,
          VAR_4->datum1, VAR_4->isnull1,
          VAR_6);
 if (VAR_13 != 0)
  return VAR_13;


 VAR_7 = (IndexTuple) VAR_3->tuple;
 VAR_8 = (IndexTuple) VAR_4->tuple;
 VAR_9 = VAR_5->nKeys;
 VAR_10 = FUNC_6(VAR_5->indexRel);

 if (VAR_6->abbrev_converter)
 {
  VAR_14 = FUNC_14(VAR_7, 1, VAR_10, &VAR_16);
  VAR_15 = FUNC_14(VAR_8, 1, VAR_10, &VAR_17);

  VAR_13 = FUNC_0(VAR_14, VAR_16,
            VAR_15, VAR_17,
            VAR_6);
  if (VAR_13 != 0)
   return VAR_13;
 }


 if (VAR_3->isnull1)
  VAR_11 = 1;

 VAR_6++;
 for (VAR_12 = 2; VAR_12 <= VAR_9; VAR_12++, VAR_6++)
 {
  VAR_14 = FUNC_14(VAR_7, VAR_12, VAR_10, &VAR_16);
  VAR_15 = FUNC_14(VAR_8, VAR_12, VAR_10, &VAR_17);

  VAR_13 = FUNC_1(VAR_14, VAR_16,
           VAR_15, VAR_17,
           VAR_6);
  if (VAR_13 != 0)
   return VAR_13;


  if (VAR_16)
   VAR_11 = 1;
 }
 if (VAR_5->enforceUnique && !VAR_11)
 {
  Datum VAR_18[VAR_2];
  bool VAR_19[VAR_2];
  char *VAR_20;







  FUNC_2(VAR_7 != VAR_8);

  FUNC_13(VAR_7, VAR_10, VAR_18, VAR_19);

  VAR_20 = FUNC_3(VAR_5->indexRel, VAR_18, VAR_19);

  FUNC_8(VAR_1,
    (FUNC_9(VAR_0),
     FUNC_11("could not create unique index \"%s\"",
      FUNC_7(VAR_5->indexRel)),
     VAR_20 ? FUNC_10("Key %s is duplicated.", VAR_20) :
     FUNC_10("Duplicate keys exist."),
     FUNC_12(VAR_5->heapRel,
         FUNC_7(VAR_5->indexRel))));
 }







 {
  BlockNumber VAR_21 = FUNC_4(&VAR_7->t_tid);
  BlockNumber VAR_22 = FUNC_4(&VAR_8->t_tid);

  if (VAR_21 != VAR_22)
   return (VAR_21 < VAR_22) ? -1 : 1;
 }
 {
  OffsetNumber VAR_23 = FUNC_5(&VAR_7->t_tid);
  OffsetNumber VAR_24 = FUNC_5(&VAR_8->t_tid);

  if (VAR_23 != VAR_24)
   return (VAR_23 < VAR_24) ? -1 : 1;
 }


 FUNC_2(0);

 return 0;
}
