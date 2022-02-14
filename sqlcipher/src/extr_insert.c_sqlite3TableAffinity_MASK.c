
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int Vdbe ;
struct TYPE_5__ {char* zColAff; int nCol; TYPE_1__* aCol; } ;
typedef TYPE_2__ Table ;
struct TYPE_4__ {char affinity; } ;


 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int,int,int ,char*,int) ;
 int FUNC_5 (int *,int,char*,int) ;
 int * FUNC_6 (int *) ;

void FUNC_7(Vdbe *VAR_2, Table *VAR_3, int VAR_4){
  int VAR_5;
  char *VAR_6 = VAR_3->zColAff;
  if( VAR_6==0 ){
    sqlite3 *VAR_7 = FUNC_6(VAR_2);
    VAR_6 = (char *)FUNC_1(0, VAR_3->nCol+1);
    if( !VAR_6 ){
      FUNC_2(VAR_7);
      return;
    }

    for(VAR_5=0; VAR_5<VAR_3->nCol; VAR_5++){
      VAR_6[VAR_5] = VAR_3->aCol[VAR_5].affinity;
    }
    do{
      VAR_6[VAR_5--] = 0;
    }while( VAR_5>=0 && VAR_6[VAR_5]==VAR_1 );
    VAR_3->zColAff = VAR_6;
  }
  FUNC_0( VAR_6!=0 );
  VAR_5 = FUNC_3(VAR_6);
  if( VAR_5 ){
    if( VAR_4 ){
      FUNC_4(VAR_2, VAR_0, VAR_4, VAR_5, 0, VAR_6, VAR_5);
    }else{
      FUNC_5(VAR_2, -1, VAR_6, VAR_5);
    }
  }
}
