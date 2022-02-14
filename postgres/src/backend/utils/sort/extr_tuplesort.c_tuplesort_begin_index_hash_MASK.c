
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32 ;
struct TYPE_4__ {int nKeys; void* max_buckets; void* low_mask; void* high_mask; void* indexRel; void* heapRel; int readtup; int writetup; int copytup; int comparetup; int sortcontext; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int SortCoordinate ;
typedef void* Relation ;
typedef int MemoryContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,void*,void*,void*,int,char) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_2 (int,int ,int) ;
 int VAR_5 ;

Tuplesortstate *
FUNC_3(Relation VAR_6,
         Relation VAR_7,
         uint32 VAR_8,
         uint32 VAR_9,
         uint32 VAR_10,
         int VAR_11,
         SortCoordinate VAR_12,
         bool VAR_13)
{
 Tuplesortstate *VAR_14 = FUNC_2(VAR_11, VAR_12,
               VAR_13);
 MemoryContext VAR_15;

 VAR_15 = FUNC_0(VAR_14->sortcontext);
 VAR_14->nKeys = 1;

 VAR_14->comparetup = VAR_1;
 VAR_14->copytup = VAR_2;
 VAR_14->writetup = VAR_5;
 VAR_14->readtup = VAR_3;

 VAR_14->heapRel = VAR_6;
 VAR_14->indexRel = VAR_7;

 VAR_14->high_mask = VAR_8;
 VAR_14->low_mask = VAR_9;
 VAR_14->max_buckets = VAR_10;

 FUNC_0(VAR_15);

 return VAR_14;
}
