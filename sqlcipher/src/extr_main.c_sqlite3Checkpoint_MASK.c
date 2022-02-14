
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nDb; TYPE_1__* aDb; int mutex; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_4__ {int pBt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int*,int*) ;
 int FUNC_2 (int ) ;

int FUNC_3(sqlite3 *VAR_3, int VAR_4, int VAR_5, int *VAR_6, int *VAR_7){
  int VAR_8 = VAR_2;
  int VAR_9;
  int VAR_10 = 0;

  FUNC_0( FUNC_2(VAR_3->mutex) );
  FUNC_0( !VAR_6 || *VAR_6==-1 );
  FUNC_0( !VAR_7 || *VAR_7==-1 );

  for(VAR_9=0; VAR_9<VAR_3->nDb && VAR_8==VAR_2; VAR_9++){
    if( VAR_9==VAR_4 || VAR_4==VAR_1 ){
      VAR_8 = FUNC_1(VAR_3->aDb[VAR_9].pBt, VAR_5, VAR_6, VAR_7);
      VAR_6 = 0;
      VAR_7 = 0;
      if( VAR_8==VAR_0 ){
        VAR_10 = 1;
        VAR_8 = VAR_2;
      }
    }
  }

  return (VAR_8==VAR_2 && VAR_10) ? VAR_0 : VAR_8;
}
