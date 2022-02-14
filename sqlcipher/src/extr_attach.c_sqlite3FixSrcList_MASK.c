
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {int pFuncArg; } ;
struct TYPE_12__ {scalar_t__ isTabFunc; } ;
struct SrcList_item {TYPE_2__ u1; TYPE_1__ fg; int pOn; int pSelect; int pSchema; scalar_t__ zDatabase; } ;
struct TYPE_15__ {char* zDb; scalar_t__ bVarOnly; int pSchema; TYPE_10__* pParse; int pName; int zType; } ;
struct TYPE_14__ {int nSrc; struct SrcList_item* a; } ;
struct TYPE_11__ {int db; } ;
typedef TYPE_3__ SrcList ;
typedef TYPE_4__ DbFixer ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_10__*,char*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,char const*) ;

int FUNC_7(
  DbFixer *VAR_0,
  SrcList *VAR_1
){
  int VAR_2;
  const char *VAR_3;
  struct SrcList_item *VAR_4;

  if( FUNC_0(VAR_1==0) ) return 0;
  VAR_3 = VAR_0->zDb;
  for(VAR_2=0, VAR_4=VAR_1->a; VAR_2<VAR_1->nSrc; VAR_2++, VAR_4++){
    if( VAR_0->bVarOnly==0 ){
      if( VAR_4->zDatabase && FUNC_6(VAR_4->zDatabase, VAR_3) ){
        FUNC_2(VAR_0->pParse,
            "%s %T cannot reference objects in database %s",
            VAR_0->zType, VAR_0->pName, VAR_4->zDatabase);
        return 1;
      }
      FUNC_1(VAR_0->pParse->db, VAR_4->zDatabase);
      VAR_4->zDatabase = 0;
      VAR_4->pSchema = VAR_0->pSchema;
    }

    if( FUNC_5(VAR_0, VAR_4->pSelect) ) return 1;
    if( FUNC_3(VAR_0, VAR_4->pOn) ) return 1;

    if( VAR_4->fg.isTabFunc && FUNC_4(VAR_0, VAR_4->u1.pFuncArg) ){
      return 1;
    }
  }
  return 0;
}
