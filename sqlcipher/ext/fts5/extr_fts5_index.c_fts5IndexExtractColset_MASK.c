
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int nCol; int * aiCol; } ;
typedef TYPE_1__ Fts5Colset ;
typedef int Fts5Buffer ;


 int VAR_0 ;
 int FUNC_0 (int*,int *,int,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const**,int,int ) ;

__attribute__((used)) static void FUNC_3(
  int *VAR_1,
  Fts5Colset *VAR_2,
  const u8 *VAR_3, int VAR_4,
  Fts5Buffer *VAR_5
){
  if( *VAR_1==VAR_0 ){
    int VAR_6;
    FUNC_1(VAR_5);
    for(VAR_6=0; VAR_6<VAR_2->nCol; VAR_6++){
      const u8 *VAR_7 = VAR_3;
      int VAR_8 = FUNC_2(&VAR_7, VAR_4, VAR_2->aiCol[VAR_6]);
      if( VAR_8 ){
        FUNC_0(VAR_1, VAR_5, VAR_8, VAR_7);
      }
    }
  }
}
