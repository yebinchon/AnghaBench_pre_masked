
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_5__ {int nLevel; int * aLevel; } ;
typedef int Fts5StructureLevel ;
typedef TYPE_1__ Fts5Structure ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(int *VAR_2, Fts5Structure **VAR_3){
  if( *VAR_2==VAR_1 ){
    Fts5Structure *VAR_4 = *VAR_3;
    int VAR_5 = VAR_4->nLevel;
    sqlite3_int64 VAR_6 = (
        sizeof(Fts5Structure) +
        sizeof(Fts5StructureLevel) * (VAR_5+1)
    );

    VAR_4 = FUNC_1(VAR_4, VAR_6);
    if( VAR_4 ){
      FUNC_0(&VAR_4->aLevel[VAR_5], 0, sizeof(Fts5StructureLevel));
      VAR_4->nLevel++;
      *VAR_3 = VAR_4;
    }else{
      *VAR_2 = VAR_0;
    }
  }
}
