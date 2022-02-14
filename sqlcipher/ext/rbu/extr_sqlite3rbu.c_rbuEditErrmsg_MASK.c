
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rc; char* zErrmsg; } ;
typedef TYPE_1__ sqlite3rbu ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,size_t) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(sqlite3rbu *VAR_1){
  if( VAR_1->rc==VAR_0 && VAR_1->zErrmsg ){
    unsigned int VAR_2;
    size_t VAR_3 = FUNC_2(VAR_1->zErrmsg);
    for(VAR_2=0; VAR_2<(VAR_3-8); VAR_2++){
      if( FUNC_0(&VAR_1->zErrmsg[VAR_2], "rbu_imp_", 8)==0 ){
        int VAR_4 = 8;
        while( VAR_1->zErrmsg[VAR_2+VAR_4]>='0' && VAR_1->zErrmsg[VAR_2+VAR_4]<='9' ) VAR_4++;
        FUNC_1(&VAR_1->zErrmsg[VAR_2], &VAR_1->zErrmsg[VAR_2+VAR_4], VAR_3 + 1 - VAR_2 - VAR_4);
        VAR_3 -= VAR_4;
      }
    }
  }
}
