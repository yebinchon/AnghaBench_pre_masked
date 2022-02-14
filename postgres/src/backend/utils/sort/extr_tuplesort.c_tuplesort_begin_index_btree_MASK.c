
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_11__ {int nKeys; int abbrevNext; int enforceUnique; TYPE_2__* sortKeys; void* indexRel; void* heapRel; int readtup; int writetup; int copytup; int comparetup; int sortcontext; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_14__ {TYPE_3__* scankeys; } ;
struct TYPE_13__ {int sk_flags; scalar_t__ sk_attno; int sk_collation; } ;
struct TYPE_12__ {int ssup_nulls_first; scalar_t__ ssup_attno; int abbreviate; int ssup_collation; int ssup_cxt; } ;
typedef int SortSupportData ;
typedef TYPE_2__* SortSupport ;
typedef int SortCoordinate ;
typedef TYPE_3__* ScanKey ;
typedef void* Relation ;
typedef int MemoryContext ;
typedef TYPE_4__* BTScanInsert ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (void*,int ,TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int,int,int,int,int ) ;
 TYPE_4__* FUNC_6 (void*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ,char*,char,int,char) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_4__*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_1__* FUNC_10 (int,int ,int) ;
 int VAR_11 ;

Tuplesortstate *
FUNC_11(Relation VAR_12,
       Relation VAR_13,
       bool VAR_14,
       int VAR_15,
       SortCoordinate VAR_16,
       bool VAR_17)
{
 Tuplesortstate *VAR_18 = FUNC_10(VAR_15, VAR_16,
               VAR_17);
 BTScanInsert VAR_19;
 MemoryContext VAR_20;
 int VAR_21;

 VAR_20 = FUNC_2(VAR_18->sortcontext);
 VAR_18->nKeys = FUNC_1(VAR_13);

 FUNC_5(VAR_3,
        VAR_14,
        VAR_18->nKeys,
        VAR_15,
        VAR_17,
        FUNC_3(VAR_18));

 VAR_18->comparetup = VAR_7;
 VAR_18->copytup = VAR_8;
 VAR_18->writetup = VAR_11;
 VAR_18->readtup = VAR_9;
 VAR_18->abbrevNext = 10;

 VAR_18->heapRel = VAR_12;
 VAR_18->indexRel = VAR_13;
 VAR_18->enforceUnique = VAR_14;

 VAR_19 = FUNC_6(VAR_13, ((void*)0));


 VAR_18->sortKeys = (SortSupport) FUNC_8(VAR_18->nKeys *
           sizeof(SortSupportData));

 for (VAR_21 = 0; VAR_21 < VAR_18->nKeys; VAR_21++)
 {
  SortSupport VAR_22 = VAR_18->sortKeys + VAR_21;
  ScanKey VAR_23 = VAR_19->scankeys + VAR_21;
  int16 VAR_24;

  VAR_22->ssup_cxt = VAR_2;
  VAR_22->ssup_collation = VAR_23->sk_collation;
  VAR_22->ssup_nulls_first =
   (VAR_23->sk_flags & VAR_6) != 0;
  VAR_22->ssup_attno = VAR_23->sk_attno;

  VAR_22->abbreviate = (VAR_21 == 0);

  FUNC_0(VAR_22->ssup_attno != 0);

  VAR_24 = (VAR_23->sk_flags & VAR_5) != 0 ?
   VAR_0 : VAR_1;

  FUNC_4(VAR_13, VAR_24, VAR_22);
 }

 FUNC_9(VAR_19);

 FUNC_2(VAR_20);

 return VAR_18;
}
