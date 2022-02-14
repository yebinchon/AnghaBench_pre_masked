
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ numKilled; struct TYPE_8__* killedItems; int currPos; } ;
struct TYPE_7__ {int * opaque; int indexRelation; } ;
typedef int Relation ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* HashScanOpaque ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(IndexScanDesc VAR_0)
{
 HashScanOpaque VAR_1 = (HashScanOpaque) VAR_0->opaque;
 Relation VAR_2 = VAR_0->indexRelation;

 if (FUNC_0(VAR_1->currPos))
 {

  if (VAR_1->numKilled > 0)
   FUNC_2(VAR_0);
 }

 FUNC_1(VAR_2, VAR_1);

 if (VAR_1->killedItems != ((void*)0))
  FUNC_3(VAR_1->killedItems);
 FUNC_3(VAR_1);
 VAR_0->opaque = ((void*)0);
}
