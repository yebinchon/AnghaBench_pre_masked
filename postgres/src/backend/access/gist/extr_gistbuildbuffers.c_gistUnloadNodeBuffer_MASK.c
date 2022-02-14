
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pfile; } ;
struct TYPE_6__ {int pageBlocknum; int * pageBuffer; } ;
typedef TYPE_1__ GISTNodeBuffer ;
typedef TYPE_2__ GISTBuildBuffers ;
typedef int BlockNumber ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(GISTBuildBuffers *VAR_0, GISTNodeBuffer *VAR_1)
{

 if (VAR_1->pageBuffer)
 {
  BlockNumber VAR_2;


  VAR_2 = FUNC_1(VAR_0);


  FUNC_0(VAR_0->pfile, VAR_2, VAR_1->pageBuffer);


  FUNC_2(VAR_1->pageBuffer);
  VAR_1->pageBuffer = ((void*)0);


  VAR_1->pageBlocknum = VAR_2;
 }
}
