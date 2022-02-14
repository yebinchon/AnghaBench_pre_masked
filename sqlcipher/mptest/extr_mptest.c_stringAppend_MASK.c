
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int nAlloc; char* z; } ;
typedef TYPE_1__ String ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(String *VAR_0, const char *VAR_1, int VAR_2){
  if( VAR_2<0 ) VAR_2 = (int)FUNC_3(VAR_1);
  if( VAR_0->n+VAR_2>=VAR_0->nAlloc ){
    int VAR_3 = VAR_0->nAlloc*2 + VAR_2 + 100;
    char *VAR_4 = FUNC_2(VAR_0->z, VAR_3);
    if( VAR_4==0 ) FUNC_0("out of memory");
    VAR_0->z = VAR_4;
    VAR_0->nAlloc = VAR_3;
  }
  FUNC_1(VAR_0->z+VAR_0->n, VAR_1, VAR_2);
  VAR_0->n += VAR_2;
  VAR_0->z[VAR_0->n] = 0;
}
