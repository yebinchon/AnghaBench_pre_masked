
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_6__ {int nVertex; } ;
typedef TYPE_1__ GeoPoly ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (double,double,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int) ;
 double FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  GeoPoly *VAR_3 = FUNC_2(VAR_0, VAR_2[0], 0);
  double VAR_4 = FUNC_6(VAR_2[1]);
  double VAR_5 = FUNC_6(VAR_2[2]);
  int VAR_6 = 0;
  int VAR_7 = 0;
  int VAR_8;
  if( VAR_3==0 ) return;
  for(VAR_8=0; VAR_8<VAR_3->nVertex-1; VAR_8++){
    VAR_6 = FUNC_3(VAR_4,VAR_5,FUNC_0(VAR_3,VAR_8), FUNC_1(VAR_3,VAR_8),
                               FUNC_0(VAR_3,VAR_8+1),FUNC_1(VAR_3,VAR_8+1));
    if( VAR_6==2 ) break;
    VAR_7 += VAR_6;
  }
  if( VAR_6!=2 ){
    VAR_6 = FUNC_3(VAR_4,VAR_5,FUNC_0(VAR_3,VAR_8), FUNC_1(VAR_3,VAR_8),
                               FUNC_0(VAR_3,0), FUNC_1(VAR_3,0));
  }
  if( VAR_6==2 ){
    FUNC_5(VAR_0, 1);
  }else if( ((VAR_6+VAR_7)&1)==0 ){
    FUNC_5(VAR_0, 0);
  }else{
    FUNC_5(VAR_0, 2);
  }
  FUNC_4(VAR_3);
}
