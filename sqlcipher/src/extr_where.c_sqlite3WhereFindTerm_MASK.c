
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int prereqRight; int eOperator; } ;
typedef TYPE_1__ WhereTerm ;
typedef int WhereScan ;
typedef int WhereClause ;
typedef int Index ;
typedef int Bitmask ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,int *,int,int,int,int *) ;
 TYPE_1__* FUNC_2 (int *) ;

WhereTerm *FUNC_3(
  WhereClause *VAR_2,
  int VAR_3,
  int VAR_4,
  Bitmask VAR_5,
  u32 VAR_6,
  Index *VAR_7
){
  WhereTerm *VAR_8 = 0;
  WhereTerm *VAR_9;
  WhereScan VAR_10;

  VAR_9 = FUNC_1(&VAR_10, VAR_2, VAR_3, VAR_4, VAR_6, VAR_7);
  VAR_6 &= VAR_0|VAR_1;
  while( VAR_9 ){
    if( (VAR_9->prereqRight & VAR_5)==0 ){
      if( VAR_9->prereqRight==0 && (VAR_9->eOperator&VAR_6)!=0 ){
        FUNC_0( VAR_9->eOperator & VAR_1 );
        return VAR_9;
      }
      if( VAR_8==0 ) VAR_8 = VAR_9;
    }
    VAR_9 = FUNC_2(&VAR_10);
  }
  return VAR_8;
}
