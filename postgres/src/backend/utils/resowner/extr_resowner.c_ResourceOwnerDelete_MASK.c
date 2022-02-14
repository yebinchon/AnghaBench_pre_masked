
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nitems; } ;
struct TYPE_7__ {scalar_t__ nlocks; TYPE_5__ jitarr; TYPE_5__ dsmarr; TYPE_5__ filearr; TYPE_5__ snapshotarr; TYPE_5__ tupdescarr; TYPE_5__ planrefarr; TYPE_5__ relrefarr; TYPE_5__ catlistrefarr; TYPE_5__ catrefarr; TYPE_5__ bufferarr; struct TYPE_7__* firstchild; } ;
typedef TYPE_1__* ResourceOwner ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(ResourceOwner VAR_2)
{

 FUNC_0(VAR_2 != VAR_0);


 FUNC_0(VAR_2->bufferarr.nitems == 0);
 FUNC_0(VAR_2->catrefarr.nitems == 0);
 FUNC_0(VAR_2->catlistrefarr.nitems == 0);
 FUNC_0(VAR_2->relrefarr.nitems == 0);
 FUNC_0(VAR_2->planrefarr.nitems == 0);
 FUNC_0(VAR_2->tupdescarr.nitems == 0);
 FUNC_0(VAR_2->snapshotarr.nitems == 0);
 FUNC_0(VAR_2->filearr.nitems == 0);
 FUNC_0(VAR_2->dsmarr.nitems == 0);
 FUNC_0(VAR_2->jitarr.nitems == 0);
 FUNC_0(VAR_2->nlocks == 0 || VAR_2->nlocks == VAR_1 + 1);





 while (VAR_2->firstchild != ((void*)0))
  FUNC_4(VAR_2->firstchild);






 FUNC_2(VAR_2, ((void*)0));


 FUNC_1(&(VAR_2->bufferarr));
 FUNC_1(&(VAR_2->catrefarr));
 FUNC_1(&(VAR_2->catlistrefarr));
 FUNC_1(&(VAR_2->relrefarr));
 FUNC_1(&(VAR_2->planrefarr));
 FUNC_1(&(VAR_2->tupdescarr));
 FUNC_1(&(VAR_2->snapshotarr));
 FUNC_1(&(VAR_2->filearr));
 FUNC_1(&(VAR_2->dsmarr));
 FUNC_1(&(VAR_2->jitarr));

 FUNC_3(VAR_2);
}
