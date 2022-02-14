
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iRand; } ;
typedef TYPE_1__ testpcache ;



__attribute__((used)) static unsigned FUNC_0(testpcache *VAR_0){
  unsigned VAR_1 = 0;
  int VAR_2;
  for(VAR_2=0; VAR_2<4; VAR_2++){
    VAR_0->iRand = (VAR_0->iRand*69069 + 5);
    VAR_1 = (VAR_1<<8) | ((VAR_0->iRand>>16)&0xff);
  }
  return VAR_1;
}
