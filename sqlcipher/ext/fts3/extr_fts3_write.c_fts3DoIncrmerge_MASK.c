
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bFts4; int bHasStat; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (int*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(
  Fts3Table *VAR_3,
  const char *VAR_4
){
  int VAR_5;
  int VAR_6 = (VAR_0 / 2);
  int VAR_7 = 0;
  const char *VAR_8 = VAR_4;


  VAR_7 = FUNC_1(&VAR_8);



  if( VAR_8[0]==',' && VAR_8[1]!='\0' ){
    VAR_8++;
    VAR_6 = FUNC_1(&VAR_8);
  }

  if( VAR_8[0]!='\0' || VAR_6<2 ){
    VAR_5 = VAR_1;
  }else{
    VAR_5 = VAR_2;
    if( !VAR_3->bHasStat ){
      FUNC_0( VAR_3->bFts4==0 );
      FUNC_2(&VAR_5, VAR_3);
    }
    if( VAR_5==VAR_2 ){
      VAR_5 = FUNC_3(VAR_3, VAR_7, VAR_6);
    }
    FUNC_4(VAR_3);
  }
  return VAR_5;
}
