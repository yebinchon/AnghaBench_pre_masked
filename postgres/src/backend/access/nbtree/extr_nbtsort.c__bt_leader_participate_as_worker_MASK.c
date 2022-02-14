
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int isunique; } ;
struct TYPE_12__ {TYPE_1__* spool; TYPE_3__* btleader; } ;
struct TYPE_11__ {int nparticipanttuplesorts; int sharedsort2; int sharedsort; TYPE_7__* btshared; } ;
struct TYPE_10__ {int isunique; int index; int heap; } ;
struct TYPE_9__ {int isunique; int index; int heap; } ;
typedef TYPE_2__ BTSpool ;
typedef TYPE_3__ BTLeader ;
typedef TYPE_4__ BTBuildState ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,TYPE_7__*,int ,int ,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(BTBuildState *VAR_2)
{
 BTLeader *VAR_3 = VAR_2->btleader;
 BTSpool *VAR_4;
 BTSpool *VAR_5;
 int VAR_6;


 VAR_4 = (BTSpool *) FUNC_3(sizeof(BTSpool));
 VAR_4->heap = VAR_2->spool->heap;
 VAR_4->index = VAR_2->spool->index;
 VAR_4->isunique = VAR_2->spool->isunique;


 if (!VAR_3->btshared->isunique)
  VAR_5 = ((void*)0);
 else
 {

  VAR_5 = (BTSpool *) FUNC_3(sizeof(BTSpool));


  VAR_5->heap = VAR_4->heap;
  VAR_5->index = VAR_4->index;
  VAR_5->isunique = 0;
 }






 VAR_6 = VAR_1 / VAR_3->nparticipanttuplesorts;


 FUNC_2(VAR_4, VAR_5, VAR_3->btshared,
          VAR_3->sharedsort, VAR_3->sharedsort2,
          VAR_6, 1);
}
