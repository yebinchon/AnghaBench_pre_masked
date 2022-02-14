
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* aPage; } ;
typedef TYPE_1__ GState ;



__attribute__((used)) static int FUNC_0(GState *VAR_0, int VAR_1){
  int VAR_2 = VAR_0->aPage[VAR_1];
  VAR_2 = (VAR_2<<8) + VAR_0->aPage[VAR_1+1];
  VAR_2 = (VAR_2<<8) + VAR_0->aPage[VAR_1+2];
  VAR_2 = (VAR_2<<8) + VAR_0->aPage[VAR_1+3];
  return VAR_2;
}
