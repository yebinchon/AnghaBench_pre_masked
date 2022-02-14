
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bFreeList; scalar_t__ nList; scalar_t__ pList; } ;
struct TYPE_5__ {TYPE_1__ doclist; } ;
typedef TYPE_2__ Fts3Phrase ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(Fts3Phrase *VAR_0){
  if( VAR_0->doclist.bFreeList ){
    FUNC_0(VAR_0->doclist.pList);
  }
  VAR_0->doclist.pList = 0;
  VAR_0->doclist.nList = 0;
  VAR_0->doclist.bFreeList = 0;
}
