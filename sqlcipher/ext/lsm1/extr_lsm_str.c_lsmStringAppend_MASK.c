
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ n; scalar_t__ z; scalar_t__ nAlloc; } ;
typedef TYPE_1__ LsmString ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (scalar_t__,char const*,int) ;
 scalar_t__ FUNC_2 (char const*) ;

int FUNC_3(LsmString *VAR_0, const char *VAR_1, int VAR_2){
  int VAR_3;
  if( VAR_2<0 ) VAR_2 = (int)FUNC_2(VAR_1);
  VAR_3 = FUNC_0(VAR_0, VAR_2+1);
  if( VAR_0->nAlloc ){
    FUNC_1(VAR_0->z+VAR_0->n, VAR_1, VAR_2+1);
    VAR_0->n += VAR_2;
  }
  return VAR_3;
}
