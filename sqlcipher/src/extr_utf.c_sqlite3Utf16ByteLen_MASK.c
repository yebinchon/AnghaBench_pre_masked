
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*,int,int) ;
 int FUNC_1 (unsigned char const*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_2(const void *VAR_2, int VAR_3){
  int VAR_4;
  unsigned char const *VAR_5 = VAR_2;
  int VAR_6 = 0;

  if( VAR_1==VAR_0 ){
    while( VAR_6<VAR_3 ){
      FUNC_0(VAR_5, 1, VAR_4);
      VAR_6++;
    }
  }else{
    while( VAR_6<VAR_3 ){
      FUNC_1(VAR_5, 1, VAR_4);
      VAR_6++;
    }
  }
  return (int)(VAR_5-(unsigned char const *)VAR_2);
}
