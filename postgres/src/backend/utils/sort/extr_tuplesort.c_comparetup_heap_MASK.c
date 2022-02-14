
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_12__ {int nKeys; int tupDesc; TYPE_3__* sortKeys; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int TupleDesc ;
struct TYPE_16__ {char* t_len; void* t_data; } ;
struct TYPE_15__ {int t_len; } ;
struct TYPE_14__ {int ssup_attno; scalar_t__ abbrev_converter; } ;
struct TYPE_13__ {int isnull1; scalar_t__ tuple; int datum1; } ;
typedef TYPE_2__ SortTuple ;
typedef TYPE_3__* SortSupport ;
typedef TYPE_4__* MinimalTuple ;
typedef void* HeapTupleHeader ;
typedef TYPE_5__ HeapTupleData ;
typedef int Datum ;
typedef int AttrNumber ;


 scalar_t__ FUNC_0 (int ,int,int ,int,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,int,int ,int,TYPE_3__*) ;
 char* VAR_0 ;
 int FUNC_2 (TYPE_5__*,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_3(const SortTuple *VAR_1, const SortTuple *VAR_2, Tuplesortstate *VAR_3)
{
 SortSupport VAR_4 = VAR_3->sortKeys;
 HeapTupleData VAR_5;
 HeapTupleData VAR_6;
 TupleDesc VAR_7;
 int VAR_8;
 int32 VAR_9;
 AttrNumber VAR_10;
 Datum VAR_11,
    VAR_12;
 bool VAR_13,
    VAR_14;



 VAR_9 = FUNC_1(VAR_1->datum1, VAR_1->isnull1,
          VAR_2->datum1, VAR_2->isnull1,
          VAR_4);
 if (VAR_9 != 0)
  return VAR_9;


 VAR_5.t_len = ((MinimalTuple) VAR_1->tuple)->t_len + VAR_0;
 VAR_5.t_data = (HeapTupleHeader) ((char *) VAR_1->tuple - VAR_0);
 VAR_6.t_len = ((MinimalTuple) VAR_2->tuple)->t_len + VAR_0;
 VAR_6.t_data = (HeapTupleHeader) ((char *) VAR_2->tuple - VAR_0);
 VAR_7 = VAR_3->tupDesc;

 if (VAR_4->abbrev_converter)
 {
  VAR_10 = VAR_4->ssup_attno;

  VAR_11 = FUNC_2(&VAR_5, VAR_10, VAR_7, &VAR_13);
  VAR_12 = FUNC_2(&VAR_6, VAR_10, VAR_7, &VAR_14);

  VAR_9 = FUNC_0(VAR_11, VAR_13,
            VAR_12, VAR_14,
            VAR_4);
  if (VAR_9 != 0)
   return VAR_9;
 }

 VAR_4++;
 for (VAR_8 = 1; VAR_8 < VAR_3->nKeys; VAR_8++, VAR_4++)
 {
  VAR_10 = VAR_4->ssup_attno;

  VAR_11 = FUNC_2(&VAR_5, VAR_10, VAR_7, &VAR_13);
  VAR_12 = FUNC_2(&VAR_6, VAR_10, VAR_7, &VAR_14);

  VAR_9 = FUNC_1(VAR_11, VAR_13,
           VAR_12, VAR_14,
           VAR_4);
  if (VAR_9 != 0)
   return VAR_9;
 }

 return 0;
}
