
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_4__ {int nAlloc; int n; char* z; } ;
typedef TYPE_1__ LsmString ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(
  LsmString *VAR_0,
  const char *VAR_1,
  va_list VAR_2,
  va_list VAR_3
){
  int VAR_4;
  int VAR_5;

  VAR_5 = VAR_0->nAlloc - VAR_0->n;
  VAR_4 = vsnprintf(VAR_0->z + VAR_0->n, VAR_5, VAR_1, VAR_2);

  if( VAR_4>=VAR_5 ){
    FUNC_0(VAR_0, VAR_4+1);
    if( VAR_0->nAlloc==0 ) return;
    VAR_4 = FUNC_0(VAR_0->z + VAR_0->n, VAR_4+1, VAR_1, VAR_3);
  }

  VAR_0->n += VAR_4;
  VAR_0->z[VAR_0->n] = 0;
}
