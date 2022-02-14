
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_int64 ;
struct TYPE_3__ {int n; int nAlloc; int * a; } ;
typedef TYPE_1__ ZipfileBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(ZipfileBuffer *VAR_2, int VAR_3){
  if( VAR_2->n+VAR_3>VAR_2->nAlloc ){
    u8 *VAR_4;
    sqlite3_int64 VAR_5 = VAR_2->n ? VAR_2->n*2 : 512;
    int VAR_6 = VAR_2->n + VAR_3;

    while( VAR_5<VAR_6 ) VAR_5 = VAR_5*2;
    VAR_4 = FUNC_0(VAR_2->a, VAR_5);
    if( VAR_4==0 ) return VAR_0;
    VAR_2->a = VAR_4;
    VAR_2->nAlloc = (int)VAR_5;
  }
  return VAR_1;
}
