
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nr_pending; TYPE_2__* pending_writebacks; } ;
typedef TYPE_1__ WritebackContext ;
struct TYPE_8__ {scalar_t__ forkNum; scalar_t__ blockNum; int rnode; } ;
struct TYPE_7__ {TYPE_3__ tag; } ;
typedef int Size ;
typedef int SMgrRelation ;
typedef TYPE_2__ PendingWriteback ;
typedef TYPE_3__ BufferTag ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__**,int,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int) ;

void
FUNC_4(WritebackContext *VAR_2)
{
 int VAR_3;

 if (VAR_2->nr_pending == 0)
  return;





 FUNC_1(&VAR_2->pending_writebacks, VAR_2->nr_pending,
    sizeof(PendingWriteback), VAR_1);






 for (VAR_3 = 0; VAR_3 < VAR_2->nr_pending; VAR_3++)
 {
  PendingWriteback *VAR_4;
  PendingWriteback *VAR_5;
  SMgrRelation VAR_6;
  int VAR_7;
  BufferTag VAR_8;
  Size VAR_9 = 1;

  VAR_4 = &VAR_2->pending_writebacks[VAR_3];
  VAR_8 = VAR_4->tag;





  for (VAR_7 = 0; VAR_3 + VAR_7 + 1 < VAR_2->nr_pending; VAR_7++)
  {
   VAR_5 = &VAR_2->pending_writebacks[VAR_3 + VAR_7 + 1];


   if (!FUNC_0(VAR_4->tag.rnode, VAR_5->tag.rnode) ||
    VAR_4->tag.forkNum != VAR_5->tag.forkNum)
    break;


   if (VAR_4->tag.blockNum == VAR_5->tag.blockNum)
    continue;


   if (VAR_4->tag.blockNum + 1 != VAR_5->tag.blockNum)
    break;

   VAR_9++;
   VAR_4 = VAR_5;
  }

  VAR_3 += VAR_7;


  VAR_6 = FUNC_2(VAR_8.rnode, VAR_0);
  FUNC_3(VAR_6, VAR_8.forkNum, VAR_8.blockNum, VAR_9);
 }

 VAR_2->nr_pending = 0;
}
