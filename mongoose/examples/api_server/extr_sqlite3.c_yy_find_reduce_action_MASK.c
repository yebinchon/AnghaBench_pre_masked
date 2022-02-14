
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ YYCODETYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int* VAR_4 ;
 int* VAR_5 ;
 scalar_t__* VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static int FUNC_1(
  int VAR_8,
  YYCODETYPE VAR_9
){
  int VAR_10;





  FUNC_0( VAR_8<=VAR_2 );

  VAR_10 = VAR_7[VAR_8];
  FUNC_0( VAR_10!=VAR_3 );
  FUNC_0( VAR_9!=VAR_0 );
  VAR_10 += VAR_9;





  FUNC_0( VAR_10>=0 && VAR_10<VAR_1 );
  FUNC_0( VAR_6[VAR_10]==VAR_9 );

  return VAR_4[VAR_10];
}
