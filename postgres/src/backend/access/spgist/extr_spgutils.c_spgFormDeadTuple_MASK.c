
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tupstate; int xid; int pointer; int nextOffset; int size; } ;
struct TYPE_5__ {int myXid; int deadTupleStorage; } ;
typedef TYPE_1__ SpGistState ;
typedef TYPE_2__* SpGistDeadTuple ;
typedef int OffsetNumber ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

SpGistDeadTuple
FUNC_4(SpGistState *VAR_4, int VAR_5,
     BlockNumber VAR_6, OffsetNumber VAR_7)
{
 SpGistDeadTuple VAR_8 = (SpGistDeadTuple) VAR_4->deadTupleStorage;

 VAR_8->tupstate = VAR_5;
 VAR_8->size = VAR_2;
 VAR_8->nextOffset = VAR_0;

 if (VAR_5 == VAR_3)
 {
  FUNC_1(&VAR_8->pointer, VAR_6, VAR_7);
  FUNC_0(FUNC_3(VAR_4->myXid));
  VAR_8->xid = VAR_4->myXid;
 }
 else
 {
  FUNC_2(&VAR_8->pointer);
  VAR_8->xid = VAR_1;
 }

 return VAR_8;
}
