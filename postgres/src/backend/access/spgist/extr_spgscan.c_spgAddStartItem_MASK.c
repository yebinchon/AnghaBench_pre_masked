
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int zeroDistances; } ;
struct TYPE_8__ {int isLeaf; int recheck; int recheckDistances; int * traversalValue; scalar_t__ value; scalar_t__ level; int heapPtr; } ;
typedef TYPE_1__ SpGistSearchItem ;
typedef TYPE_2__* SpGistScanOpaque ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int,int ) ;

__attribute__((used)) static void
FUNC_3(SpGistScanOpaque VAR_3, bool VAR_4)
{
 SpGistSearchItem *VAR_5 =
 FUNC_2(VAR_3, VAR_4, VAR_3->zeroDistances);

 FUNC_0(&VAR_5->heapPtr,
       VAR_4 ? VAR_1 : VAR_2,
       VAR_0);
 VAR_5->isLeaf = 0;
 VAR_5->level = 0;
 VAR_5->value = (Datum) 0;
 VAR_5->traversalValue = ((void*)0);
 VAR_5->recheck = 0;
 VAR_5->recheckDistances = 0;

 FUNC_1(VAR_3, VAR_5);
}
