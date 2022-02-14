
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int sqlite3_value ;
struct TYPE_4__ {int nColumn; scalar_t__* abNotindexed; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,char const*,int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(
  Fts3Table *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3,
  u32 *VAR_4
){
  int VAR_5;
  for(VAR_5=2; VAR_5<VAR_1->nColumn+2; VAR_5++){
    int VAR_6 = VAR_5-2;
    if( VAR_1->abNotindexed[VAR_6]==0 ){
      const char *VAR_7 = (const char *)FUNC_2(VAR_3[VAR_5]);
      int VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_7, VAR_6, &VAR_4[VAR_6]);
      if( VAR_8!=VAR_0 ){
        return VAR_8;
      }
      VAR_4[VAR_1->nColumn] += FUNC_1(VAR_3[VAR_5]);
    }
  }
  return VAR_0;
}
