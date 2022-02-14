
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* aTokenChar; } ;
typedef TYPE_1__ AsciiTokenizer ;



__attribute__((used)) static void FUNC_0(
  AsciiTokenizer *VAR_0,
  const char *VAR_1,
  int VAR_2
){
  int VAR_3;
  for(VAR_3=0; VAR_1[VAR_3]; VAR_3++){
    if( (VAR_1[VAR_3] & 0x80)==0 ){
      VAR_0->aTokenChar[(int)VAR_1[VAR_3]] = (unsigned char)VAR_2;
    }
  }
}
