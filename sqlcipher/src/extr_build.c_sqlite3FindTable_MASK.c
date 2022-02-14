
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ authLevel; } ;
struct TYPE_11__ {int nDb; TYPE_3__* aDb; TYPE_1__ auth; } ;
typedef TYPE_4__ sqlite3 ;
typedef int Table ;
struct TYPE_10__ {int zDbSName; TYPE_2__* pSchema; } ;
struct TYPE_9__ {int tblHash; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (int *,char const*) ;
 int FUNC_3 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,int ) ;

Table *FUNC_7(sqlite3 *VAR_4, const char *VAR_5, const char *VAR_6){
  Table *VAR_7 = 0;
  int VAR_8;


  FUNC_0( VAR_6!=0 || FUNC_1(VAR_4) );







  while(1){
    for(VAR_8=VAR_1; VAR_8<VAR_4->nDb; VAR_8++){
      int VAR_9 = (VAR_8<2) ? VAR_8^1 : VAR_8;
      if( VAR_6==0 || FUNC_4(VAR_6, VAR_4->aDb[VAR_9].zDbSName)==0 ){
        FUNC_0( FUNC_3(VAR_4, VAR_9, 0) );
        VAR_7 = FUNC_2(&VAR_4->aDb[VAR_9].pSchema->tblHash, VAR_5);
        if( VAR_7 ) return VAR_7;
      }
    }


    if( FUNC_4(VAR_5, VAR_0)!=0 ) break;
    if( FUNC_6(VAR_6, VAR_4->aDb[1].zDbSName)!=0 ) break;
    VAR_5 = VAR_2;
  }
  return 0;
}
