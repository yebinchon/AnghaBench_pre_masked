
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int nColumn; int nKeyCol; char** azColl; int bNoQuery; int * aSortOrder; scalar_t__ uniqNotNull; } ;
struct TYPE_12__ {int * aSortOrder; int * aColl; } ;
struct TYPE_11__ {scalar_t__ rc; scalar_t__ nErr; int db; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ KeyInfo ;
typedef TYPE_3__ Index ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 char const* VAR_2 ;

KeyInfo *FUNC_5(Parse *VAR_3, Index *VAR_4){
  int VAR_5;
  int VAR_6 = VAR_4->nColumn;
  int VAR_7 = VAR_4->nKeyCol;
  KeyInfo *VAR_8;
  if( VAR_3->nErr ) return 0;
  if( VAR_4->uniqNotNull ){
    VAR_8 = FUNC_1(VAR_3->db, VAR_7, VAR_6-VAR_7);
  }else{
    VAR_8 = FUNC_1(VAR_3->db, VAR_6, 0);
  }
  if( VAR_8 ){
    FUNC_0( FUNC_2(VAR_8) );
    for(VAR_5=0; VAR_5<VAR_6; VAR_5++){
      const char *VAR_9 = VAR_4->azColl[VAR_5];
      VAR_8->aColl[VAR_5] = VAR_9==VAR_2 ? 0 :
                        FUNC_4(VAR_3, VAR_9);
      VAR_8->aSortOrder[VAR_5] = VAR_4->aSortOrder[VAR_5];
    }
    if( VAR_3->nErr ){
      FUNC_0( VAR_3->rc==VAR_0 );
      if( VAR_4->bNoQuery==0 ){







        VAR_4->bNoQuery = 1;
        VAR_3->rc = VAR_1;
      }
      FUNC_3(VAR_8);
      VAR_8 = 0;
    }
  }
  return VAR_8;
}
