
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int Token ;
struct TYPE_9__ {scalar_t__ mallocFailed; } ;
struct TYPE_8__ {TYPE_1__* pRename; TYPE_5__* db; } ;
struct TYPE_7__ {struct TYPE_7__* pNext; int t; void* p; } ;
typedef TYPE_1__ RenameToken ;
typedef TYPE_2__ Parse ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,void*) ;
 TYPE_1__* FUNC_2 (TYPE_5__*,int) ;

void *FUNC_3(Parse *VAR_0, void *VAR_1, Token *VAR_2){
  RenameToken *VAR_3;
  FUNC_0( VAR_1 || VAR_0->db->mallocFailed );
  FUNC_1(VAR_0, VAR_1);
  VAR_3 = FUNC_2(VAR_0->db, sizeof(RenameToken));
  if( VAR_3 ){
    VAR_3->p = VAR_1;
    VAR_3->t = *VAR_2;
    VAR_3->pNext = VAR_0->pRename;
    VAR_0->pRename = VAR_3;
  }

  return VAR_1;
}
