
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int Token ;
struct TYPE_8__ {int nCol; TYPE_1__* aCol; TYPE_4__* pIndex; } ;
typedef TYPE_2__ Table ;
struct TYPE_10__ {int nKeyCol; int* aiColumn; char** azColl; struct TYPE_10__* pNext; } ;
struct TYPE_9__ {int * db; TYPE_2__* pNewTable; } ;
struct TYPE_7__ {char* zColl; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ Index ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,char*) ;
 char* FUNC_3 (int *,int *) ;

void FUNC_4(Parse *VAR_0, Token *VAR_1){
  Table *VAR_2;
  int VAR_3;
  char *VAR_4;
  sqlite3 *VAR_5;

  if( (VAR_2 = VAR_0->pNewTable)==0 ) return;
  VAR_3 = VAR_2->nCol-1;
  VAR_5 = VAR_0->db;
  VAR_4 = FUNC_3(VAR_5, VAR_1);
  if( !VAR_4 ) return;

  if( FUNC_2(VAR_0, VAR_4) ){
    Index *VAR_6;
    FUNC_1(VAR_5, VAR_2->aCol[VAR_3].zColl);
    VAR_2->aCol[VAR_3].zColl = VAR_4;





    for(VAR_6=VAR_2->pIndex; VAR_6; VAR_6=VAR_6->pNext){
      FUNC_0( VAR_6->nKeyCol==1 );
      if( VAR_6->aiColumn[0]==VAR_3 ){
        VAR_6->azColl[0] = VAR_2->aCol[VAR_3].zColl;
      }
    }
  }else{
    FUNC_1(VAR_5, VAR_4);
  }
}
