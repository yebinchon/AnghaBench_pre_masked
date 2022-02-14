
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rc; } ;
typedef TYPE_1__ sqlite3rbu ;
struct TYPE_8__ {int nTblCol; size_t* aiSrcOrder; int * azTblCol; } ;
typedef TYPE_2__ RbuObjIter ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (TYPE_1__*,char*,char*,char const*,int ,int,...) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static char *FUNC_3(
  sqlite3rbu *VAR_1,
  RbuObjIter *VAR_2,
  const char *VAR_3
){
  char *VAR_4 = 0;
  if( VAR_1->rc==VAR_0 ){
    int VAR_5;

    if( (int)FUNC_2(VAR_3)!=VAR_2->nTblCol ){
      FUNC_0(VAR_1);
    }else{
      const char *VAR_6 = "";
      for(VAR_5=0; VAR_5<VAR_2->nTblCol; VAR_5++){
        char VAR_7 = VAR_3[VAR_2->aiSrcOrder[VAR_5]];
        if( VAR_7=='x' ){
          VAR_4 = FUNC_1(VAR_1, "%z%s\"%w\"=?%d",
              VAR_4, VAR_6, VAR_2->azTblCol[VAR_5], VAR_5+1
          );
          VAR_6 = ", ";
        }
        else if( VAR_7=='d' ){
          VAR_4 = FUNC_1(VAR_1, "%z%s\"%w\"=rbu_delta(\"%w\", ?%d)",
              VAR_4, VAR_6, VAR_2->azTblCol[VAR_5], VAR_2->azTblCol[VAR_5], VAR_5+1
          );
          VAR_6 = ", ";
        }
        else if( VAR_7=='f' ){
          VAR_4 = FUNC_1(VAR_1, "%z%s\"%w\"=rbu_fossil_delta(\"%w\", ?%d)",
              VAR_4, VAR_6, VAR_2->azTblCol[VAR_5], VAR_2->azTblCol[VAR_5], VAR_5+1
          );
          VAR_6 = ", ";
        }
      }
    }
  }
  return VAR_4;
}
