
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_uint64 ;
struct TYPE_4__ {int n; int nAlloc; int oomErr; char* z; } ;
typedef TYPE_1__ Str ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(Str *VAR_0, const char *VAR_1){
  sqlite3_uint64 VAR_2 = FUNC_4(VAR_1);
  if( VAR_0->n + VAR_2 >= VAR_0->nAlloc ){
    char *VAR_3;
    sqlite3_uint64 VAR_4;
    if( VAR_0->oomErr ) return;
    VAR_4 = VAR_0->nAlloc*2 + 100 + VAR_2;
    VAR_3 = FUNC_3(VAR_0->z, VAR_4);
    if( VAR_3==0 ){
      FUNC_2(VAR_0->z);
      FUNC_1(VAR_0, 0, sizeof(*VAR_0));
      VAR_0->oomErr = 1;
      return;
    }
    VAR_0->z = VAR_3;
    VAR_0->nAlloc = VAR_4;
  }
  FUNC_0(VAR_0->z + VAR_0->n, VAR_1, (int)VAR_2);
  VAR_0->n += VAR_2;
  VAR_0->z[VAR_0->n] = 0;
}
