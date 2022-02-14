
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nKeys; int abbrevNext; TYPE_2__* sortKeys; TYPE_2__* onlyKey; int tupDesc; int readtup; int writetup; int copytup; int comparetup; int sortcontext; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int TupleDesc ;
struct TYPE_8__ {int ssup_nulls_first; int abbreviate; int abbrev_converter; scalar_t__ ssup_attno; scalar_t__ ssup_collation; int ssup_cxt; } ;
typedef int SortSupportData ;
typedef TYPE_2__* SortSupport ;
typedef int SortCoordinate ;
typedef scalar_t__ Oid ;
typedef int MemoryContext ;
typedef scalar_t__ AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__,TYPE_2__*) ;
 int FUNC_4 (int ,int,int,int,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,char*,int,int,char) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_7 (int,int ,int) ;
 int VAR_7 ;

Tuplesortstate *
FUNC_8(TupleDesc VAR_8,
      int VAR_9, AttrNumber *VAR_10,
      Oid *VAR_11, Oid *VAR_12,
      bool *VAR_13,
      int VAR_14, SortCoordinate VAR_15, bool VAR_16)
{
 Tuplesortstate *VAR_17 = FUNC_7(VAR_14, VAR_15,
               VAR_16);
 MemoryContext VAR_18;
 int VAR_19;

 VAR_18 = FUNC_1(VAR_17->sortcontext);

 FUNC_0(VAR_9 > 0);
 VAR_17->nKeys = VAR_9;

 FUNC_4(VAR_1,
        0,
        VAR_9,
        VAR_14,
        VAR_16,
        FUNC_2(VAR_17));

 VAR_17->comparetup = VAR_3;
 VAR_17->copytup = VAR_4;
 VAR_17->writetup = VAR_7;
 VAR_17->readtup = VAR_5;

 VAR_17->tupDesc = VAR_8;
 VAR_17->abbrevNext = 10;


 VAR_17->sortKeys = (SortSupport) FUNC_6(VAR_9 * sizeof(SortSupportData));

 for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++)
 {
  SortSupport VAR_20 = VAR_17->sortKeys + VAR_19;

  FUNC_0(VAR_10[VAR_19] != 0);
  FUNC_0(VAR_11[VAR_19] != 0);

  VAR_20->ssup_cxt = VAR_0;
  VAR_20->ssup_collation = VAR_12[VAR_19];
  VAR_20->ssup_nulls_first = VAR_13[VAR_19];
  VAR_20->ssup_attno = VAR_10[VAR_19];

  VAR_20->abbreviate = (VAR_19 == 0);

  FUNC_3(VAR_11[VAR_19], VAR_20);
 }







 if (VAR_9 == 1 && !VAR_17->sortKeys->abbrev_converter)
  VAR_17->onlyKey = VAR_17->sortKeys;

 FUNC_1(VAR_18);

 return VAR_17;
}
