
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ YYCODETYPE ;
typedef size_t YYACTIONTYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 size_t* VAR_3 ;
 size_t* VAR_4 ;
 scalar_t__* VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static YYACTIONTYPE FUNC_1(
  YYACTIONTYPE VAR_7,
  YYCODETYPE VAR_8
){
  int VAR_9;





  FUNC_0( VAR_7<=VAR_2 );

  VAR_9 = VAR_6[VAR_7];
  FUNC_0( VAR_8!=VAR_0 );
  VAR_9 += VAR_8;





  FUNC_0( VAR_9>=0 && VAR_9<VAR_1 );
  FUNC_0( VAR_5[VAR_9]==VAR_8 );

  return VAR_3[VAR_9];
}
