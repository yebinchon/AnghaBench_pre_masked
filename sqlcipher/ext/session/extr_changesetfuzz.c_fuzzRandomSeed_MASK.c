
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* s; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_1){
  int VAR_2;
  for(VAR_2=0; VAR_2<256; VAR_2+=4){
    VAR_0.s[VAR_2] ^= ((VAR_1 >> 24) & 0xFF);
    VAR_0.s[VAR_2+1] ^= ((VAR_1 >> 16) & 0xFF);
    VAR_0.s[VAR_2+2] ^= ((VAR_1 >> 8) & 0xFF);
    VAR_0.s[VAR_2+3] ^= ((VAR_1 >> 0) & 0xFF);
  }
}
