
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_3__ {char* a; int nAlloc; int n; } ;
typedef TYPE_1__ Blob ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(Blob *VAR_0, int VAR_1, sqlite3_int64 VAR_2){
  VAR_0->a[0] = (char)VAR_1;
  if( VAR_2 ){
    FUNC_0( VAR_0->nAlloc>=1+FUNC_2(VAR_2) );
    VAR_0->n = 1 + FUNC_1(&VAR_0->a[1], VAR_2);
  }else{
    FUNC_0( VAR_0->nAlloc>=1 );
    VAR_0->n = 1;
  }
}
