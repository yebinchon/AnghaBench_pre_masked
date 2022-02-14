
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int i8 ;
typedef int Vdbe ;
typedef int Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int,int,int ,char*,int ) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(
  Parse *VAR_3,
  int VAR_4,
  int VAR_5,
  char *VAR_6,
  i8 VAR_7,
  u8 VAR_8
){
  Vdbe *VAR_9 = FUNC_1(VAR_3);
  FUNC_0( (VAR_4&0xff)==VAR_2 );
  if( VAR_5==VAR_0 ){
    FUNC_2(VAR_3);
  }
  FUNC_3(VAR_9, VAR_1, VAR_4, VAR_5, 0, VAR_6, VAR_7);
  FUNC_4(VAR_9, VAR_8);
}
