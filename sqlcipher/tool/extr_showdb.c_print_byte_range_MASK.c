
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int perLine; } ;


 scalar_t__ FUNC_0 (unsigned char) ;
 unsigned char* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char const*,...) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned char *FUNC_3(
  int VAR_2,
  int VAR_3,
  int VAR_4
){
  unsigned char *VAR_5;
  int VAR_6, VAR_7;
  const char *VAR_8;

  if( ((VAR_4+VAR_3)&~0xfff)==0 ){
    VAR_8 = " %03x: ";
  }else if( ((VAR_4+VAR_3)&~0xffff)==0 ){
    VAR_8 = " %04x: ";
  }else if( ((VAR_4+VAR_3)&~0xfffff)==0 ){
    VAR_8 = " %05x: ";
  }else if( ((VAR_4+VAR_3)&~0xffffff)==0 ){
    VAR_8 = " %06x: ";
  }else{
    VAR_8 = " %08x: ";
  }

  VAR_5 = FUNC_1(VAR_2, VAR_3);
  for(VAR_6=0; VAR_6<VAR_3; VAR_6 += VAR_0.perLine){
    FUNC_2(VAR_1, VAR_8, VAR_6+VAR_4);
    for(VAR_7=0; VAR_7<VAR_0.perLine; VAR_7++){
      if( VAR_6+VAR_7>VAR_3 ){
        FUNC_2(VAR_1, "   ");
      }else{
        FUNC_2(VAR_1,"%02x ", VAR_5[VAR_6+VAR_7]);
      }
    }
    for(VAR_7=0; VAR_7<VAR_0.perLine; VAR_7++){
      if( VAR_6+VAR_7>VAR_3 ){
        FUNC_2(VAR_1, " ");
      }else{
        FUNC_2(VAR_1,"%c", FUNC_0(VAR_5[VAR_6+VAR_7]) ? VAR_5[VAR_6+VAR_7] : '.');
      }
    }
    FUNC_2(VAR_1,"\n");
  }
  return VAR_5;
}
