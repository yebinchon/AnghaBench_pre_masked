
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bHasStat; int zDb; int db; int zName; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(Fts3Table *VAR_2){
  int VAR_3 = VAR_1;
  if( VAR_2->bHasStat==2 ){
    char *VAR_4 = FUNC_1("%s_stat", VAR_2->zName);
    if( VAR_4 ){
      int VAR_5 = FUNC_2(VAR_2->db, VAR_2->zDb, VAR_4, 0,0,0,0,0,0);
      FUNC_0(VAR_4);
      VAR_2->bHasStat = (VAR_5==VAR_1);
    }else{
      VAR_3 = VAR_0;
    }
  }
  return VAR_3;
}
