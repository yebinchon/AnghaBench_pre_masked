
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zContentTbl; scalar_t__ bHasStat; scalar_t__ bHasDocsize; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(Fts3Table *VAR_6, int VAR_7){
  int VAR_8 = VAR_0;


  FUNC_2(VAR_6);



  FUNC_0( VAR_6->zContentTbl==0 || VAR_7==0 );
  if( VAR_7 ) FUNC_1(&VAR_8, VAR_6, VAR_1, 0);
  FUNC_1(&VAR_8, VAR_6, VAR_4, 0);
  FUNC_1(&VAR_8, VAR_6, VAR_3, 0);
  if( VAR_6->bHasDocsize ){
    FUNC_1(&VAR_8, VAR_6, VAR_2, 0);
  }
  if( VAR_6->bHasStat ){
    FUNC_1(&VAR_8, VAR_6, VAR_5, 0);
  }
  return VAR_8;
}
