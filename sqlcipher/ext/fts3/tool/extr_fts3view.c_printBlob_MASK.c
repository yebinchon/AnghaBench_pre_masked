
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char const*,...) ;
 scalar_t__ FUNC_1 (unsigned char const) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(
  const unsigned char *VAR_1,
  int VAR_2
){
  int VAR_3, VAR_4;
  const char *VAR_5;
  const int VAR_6 = 16;

  if( (VAR_2&~0xfff)==0 ){
    VAR_5 = " %03x: ";
  }else if( (VAR_2&~0xffff)==0 ){
    VAR_5 = " %04x: ";
  }else if( (VAR_2&~0xfffff)==0 ){
    VAR_5 = " %05x: ";
  }else if( (VAR_2&~0xffffff)==0 ){
    VAR_5 = " %06x: ";
  }else{
    VAR_5 = " %08x: ";
  }

  for(VAR_3=0; VAR_3<VAR_2; VAR_3 += VAR_6){
    FUNC_0(VAR_0, VAR_5, VAR_3);
    for(VAR_4=0; VAR_4<VAR_6; VAR_4++){
      if( VAR_3+VAR_4>VAR_2 ){
        FUNC_0(VAR_0, "   ");
      }else{
        FUNC_0(VAR_0,"%02x ", VAR_1[VAR_3+VAR_4]);
      }
    }
    for(VAR_4=0; VAR_4<VAR_6; VAR_4++){
      if( VAR_3+VAR_4>VAR_2 ){
        FUNC_0(VAR_0, " ");
      }else{
        FUNC_0(VAR_0,"%c", FUNC_1(VAR_1[VAR_3+VAR_4]) ? VAR_1[VAR_3+VAR_4] : '.');
      }
    }
    FUNC_0(VAR_0,"\n");
  }
}
