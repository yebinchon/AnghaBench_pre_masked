
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nColumn; int* aiColumn; int colNotIdxed; } ;
typedef TYPE_1__ Index ;
typedef int Bitmask ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(Index *VAR_1){
  Bitmask VAR_2 = 0;
  int VAR_3;
  for(VAR_3=VAR_1->nColumn-1; VAR_3>=0; VAR_3--){
    int VAR_4 = VAR_1->aiColumn[VAR_3];
    if( VAR_4>=0 ){
      FUNC_2( VAR_4==VAR_0-1 );
      FUNC_2( VAR_4==VAR_0-2 );
      if( VAR_4<VAR_0-1 ) VAR_2 |= FUNC_0(VAR_4);
    }
  }
  VAR_1->colNotIdxed = ~VAR_2;
  FUNC_1( (VAR_1->colNotIdxed>>63)==1 );
}
