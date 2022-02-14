
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t bDesc; int bKey; int zExpr; } ;
struct TYPE_4__ {int nCol; TYPE_2__* aCol; } ;
typedef TYPE_1__ CidxIndex ;
typedef TYPE_2__ CidxColumn ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int*,char*,char*,char const*,int,...) ;

__attribute__((used)) static char *FUNC_2(
  int *VAR_2,
  const char *VAR_3,
  CidxIndex *VAR_4,
  int VAR_5
){
  char *VAR_6 = 0;
  if( *VAR_2==VAR_1 ){
    const char *VAR_7[2] = {"", " DESC"};
    int VAR_8;
    const char *VAR_9 = "";

    for(VAR_8=0; VAR_8<VAR_4->nCol; VAR_8++){
      CidxColumn *VAR_10 = &VAR_4->aCol[VAR_8];
      FUNC_0( VAR_4->aCol[VAR_8].bDesc==0 || VAR_4->aCol[VAR_8].bDesc==1 );
      switch( VAR_5 ){

        case 130:
          VAR_6 = FUNC_1(VAR_2, "%z%s%d%s", VAR_6, VAR_9, VAR_8+1, VAR_7[VAR_10->bDesc]);
          VAR_9 = ",";
          break;

        case 131:
          VAR_6 = FUNC_1(VAR_2, "%z%squote(i%d)", VAR_6, VAR_9, VAR_8);
          VAR_9 = "||','||";
          break;

        case 128:
          if( VAR_10->bKey==0 ){
            VAR_6 = FUNC_1(VAR_2, "%z%s%s IS i.i%d", VAR_6,
                VAR_9, VAR_10->zExpr, VAR_8
            );
            VAR_9 = " AND ";
          }
          break;

        case 129:
          if( VAR_10->bKey==1 ){
            VAR_6 = FUNC_1(VAR_2, "%z%s%s IS i.i%d", VAR_6,
                VAR_9, VAR_10->zExpr, VAR_8
            );
            VAR_9 = " AND ";
          }
          break;

        default:
          FUNC_0( VAR_5==VAR_0 );
          VAR_6 = FUNC_1(VAR_2, "%z%s(%s) AS i%d", VAR_6, VAR_9, VAR_10->zExpr, VAR_8);
          VAR_9 = ", ";
          break;
      }
    }
  }

  return VAR_6;
}
