
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int pfile; } ;
struct TYPE_9__ {scalar_t__ blocksCount; int pageBlocknum; scalar_t__ pageBuffer; } ;
typedef TYPE_1__ GISTNodeBuffer ;
typedef TYPE_2__ GISTBuildBuffers ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_4(GISTBuildBuffers *VAR_1, GISTNodeBuffer *VAR_2)
{

 if (!VAR_2->pageBuffer && VAR_2->blocksCount > 0)
 {

  VAR_2->pageBuffer = FUNC_2(VAR_1);


  FUNC_0(VAR_1->pfile, VAR_2->pageBlocknum,
        VAR_2->pageBuffer);


  FUNC_3(VAR_1, VAR_2->pageBlocknum);


  FUNC_1(VAR_1, VAR_2);
  VAR_2->pageBlocknum = VAR_0;
 }
}
