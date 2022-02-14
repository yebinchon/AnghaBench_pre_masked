
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_1, int VAR_2, int *VAR_3){
  int VAR_4, VAR_5;



  if( FUNC_0(VAR_2==0) ){
    VAR_4 = VAR_5 = 0;
  }else{
    VAR_4 = VAR_1[0];
    VAR_5 = 1;
    if( VAR_4>=0xc0 ){
      VAR_4 = VAR_0[VAR_4-0xc0];
      while( VAR_5<VAR_2 && (VAR_1[VAR_5] & 0xc0)==0x80 ){
        VAR_4 = (VAR_4<<6) + (0x3f & VAR_1[VAR_5++]);
      }
    }
  }
  *VAR_3 = VAR_5;
  return VAR_4;
}
