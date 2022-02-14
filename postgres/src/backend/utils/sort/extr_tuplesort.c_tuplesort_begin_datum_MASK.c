
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_7__ {int nKeys; int abbrevNext; int tuples; TYPE_2__* sortKeys; TYPE_2__* onlyKey; int datumTypeLen; void* datumType; int readtup; int writetup; int copytup; int comparetup; int sortcontext; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_8__ {int ssup_nulls_first; int abbreviate; int abbrev_converter; void* ssup_collation; int ssup_cxt; } ;
typedef int SortSupportData ;
typedef TYPE_2__* SortSupport ;
typedef int SortCoordinate ;
typedef void* Oid ;
typedef int MemoryContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (void*,TYPE_2__*) ;
 int FUNC_3 (int ,int,int,int,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int,char) ;
 int FUNC_5 (void*,int *,int*) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_7 (int,int ,int) ;
 int VAR_7 ;

Tuplesortstate *
FUNC_8(Oid VAR_8, Oid VAR_9, Oid VAR_10,
       bool VAR_11, int VAR_12,
       SortCoordinate VAR_13, bool VAR_14)
{
 Tuplesortstate *VAR_15 = FUNC_7(VAR_12, VAR_13,
               VAR_14);
 MemoryContext VAR_16;
 int16 VAR_17;
 bool VAR_18;

 VAR_16 = FUNC_0(VAR_15->sortcontext);
 VAR_15->nKeys = 1;

 FUNC_3(VAR_1,
        0,
        1,
        VAR_12,
        VAR_14,
        FUNC_1(VAR_15));

 VAR_15->comparetup = VAR_3;
 VAR_15->copytup = VAR_4;
 VAR_15->writetup = VAR_7;
 VAR_15->readtup = VAR_5;
 VAR_15->abbrevNext = 10;

 VAR_15->datumType = VAR_8;


 FUNC_5(VAR_8, &VAR_17, &VAR_18);
 VAR_15->datumTypeLen = VAR_17;
 VAR_15->tuples = !VAR_18;


 VAR_15->sortKeys = (SortSupport) FUNC_6(sizeof(SortSupportData));

 VAR_15->sortKeys->ssup_cxt = VAR_0;
 VAR_15->sortKeys->ssup_collation = VAR_10;
 VAR_15->sortKeys->ssup_nulls_first = VAR_11;
 VAR_15->sortKeys->abbreviate = !VAR_18;

 FUNC_2(VAR_9, VAR_15->sortKeys);







 if (!VAR_15->sortKeys->abbrev_converter)
  VAR_15->onlyKey = VAR_15->sortKeys;

 FUNC_0(VAR_16);

 return VAR_15;
}
