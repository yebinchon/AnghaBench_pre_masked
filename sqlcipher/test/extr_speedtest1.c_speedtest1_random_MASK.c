
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int y; } ;


 TYPE_1__ VAR_0 ;

unsigned int FUNC_0(void){
  VAR_0.x = (VAR_0.x>>1) ^ ((1+~(VAR_0.x&1)) & 0xd0000001);
  VAR_0.y = VAR_0.y*1103515245 + 12345;
  return VAR_0.x ^ VAR_0.y;
}
