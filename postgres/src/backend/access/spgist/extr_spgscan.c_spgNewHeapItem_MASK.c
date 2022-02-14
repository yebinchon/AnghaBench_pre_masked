
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int attlen; int attbyval; } ;
struct TYPE_10__ {TYPE_1__ attLeafType; } ;
struct TYPE_12__ {TYPE_2__ state; } ;
struct TYPE_11__ {int level; int isLeaf; int recheck; int recheckDistances; int * traversalValue; int value; int heapPtr; } ;
typedef TYPE_3__ SpGistSearchItem ;
typedef TYPE_4__* SpGistScanOpaque ;
typedef int * ItemPointer ;
typedef int Datum ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int,double*) ;

__attribute__((used)) static SpGistSearchItem *
FUNC_2(SpGistScanOpaque VAR_0, int VAR_1, ItemPointer VAR_2,
      Datum VAR_3, bool VAR_4, bool VAR_5,
      bool VAR_6, double *VAR_7)
{
 SpGistSearchItem *VAR_8 = FUNC_1(VAR_0, VAR_6, VAR_7);

 VAR_8->level = VAR_1;
 VAR_8->heapPtr = *VAR_2;

 VAR_8->value = VAR_6 ? (Datum) 0 :
  FUNC_0(VAR_3, VAR_0->state.attLeafType.attbyval,
      VAR_0->state.attLeafType.attlen);
 VAR_8->traversalValue = ((void*)0);
 VAR_8->isLeaf = 1;
 VAR_8->recheck = VAR_4;
 VAR_8->recheckDistances = VAR_5;

 return VAR_8;
}
