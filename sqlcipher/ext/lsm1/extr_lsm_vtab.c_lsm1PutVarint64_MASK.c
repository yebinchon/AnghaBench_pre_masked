
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;


 int FUNC_0 (unsigned char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_0, sqlite3_uint64 VAR_1){
  unsigned int VAR_2, VAR_3;
  if( VAR_1<=240 ){
    VAR_0[0] = (unsigned char)VAR_1;
    return 1;
  }
  if( VAR_1<=2287 ){
    VAR_3 = (unsigned int)(VAR_1 - 240);
    VAR_0[0] = (unsigned char)(VAR_3/256 + 241);
    VAR_0[1] = (unsigned char)(VAR_3%256);
    return 2;
  }
  if( VAR_1<=67823 ){
    VAR_3 = (unsigned int)(VAR_1 - 2288);
    VAR_0[0] = 249;
    VAR_0[1] = (unsigned char)(VAR_3/256);
    VAR_0[2] = (unsigned char)(VAR_3%256);
    return 3;
  }
  VAR_3 = (unsigned int)VAR_1;
  VAR_2 = (unsigned int)(VAR_1>>32);
  if( VAR_2==0 ){
    if( VAR_3<=16777215 ){
      VAR_0[0] = 250;
      VAR_0[1] = (unsigned char)(VAR_3>>16);
      VAR_0[2] = (unsigned char)(VAR_3>>8);
      VAR_0[3] = (unsigned char)(VAR_3);
      return 4;
    }
    VAR_0[0] = 251;
    FUNC_0(VAR_0+1, VAR_3);
    return 5;
  }
  if( VAR_2<=255 ){
    VAR_0[0] = 252;
    VAR_0[1] = (unsigned char)VAR_2;
    FUNC_0(VAR_0+2, VAR_3);
    return 6;
  }
  if( VAR_2<=65535 ){
    VAR_0[0] = 253;
    VAR_0[1] = (unsigned char)(VAR_2>>8);
    VAR_0[2] = (unsigned char)VAR_2;
    FUNC_0(VAR_0+3, VAR_3);
    return 7;
  }
  if( VAR_2<=16777215 ){
    VAR_0[0] = 254;
    VAR_0[1] = (unsigned char)(VAR_2>>16);
    VAR_0[2] = (unsigned char)(VAR_2>>8);
    VAR_0[3] = (unsigned char)VAR_2;
    FUNC_0(VAR_0+4, VAR_3);
    return 8;
  }
  VAR_0[0] = 255;
  FUNC_0(VAR_0+1, VAR_2);
  FUNC_0(VAR_0+5, VAR_3);
  return 9;
}
