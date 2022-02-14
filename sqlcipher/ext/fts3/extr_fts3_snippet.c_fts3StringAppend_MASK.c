
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_3__ {int n; int nAlloc; char* z; } ;
typedef TYPE_1__ StrBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(
  StrBuffer *VAR_2,
  const char *VAR_3,
  int VAR_4
){
  if( VAR_4<0 ){
    VAR_4 = (int)FUNC_3(VAR_3);
  }





  if( VAR_2->n+VAR_4+1>=VAR_2->nAlloc ){
    sqlite3_int64 VAR_5 = VAR_2->nAlloc+(sqlite3_int64)VAR_4+100;
    char *VAR_6 = FUNC_2(VAR_2->z, VAR_5);
    if( !VAR_6 ){
      return VAR_0;
    }
    VAR_2->z = VAR_6;
    VAR_2->nAlloc = VAR_5;
  }
  FUNC_0( VAR_2->z!=0 && (VAR_2->nAlloc >= VAR_2->n+VAR_4+1) );


  FUNC_1(&VAR_2->z[VAR_2->n], VAR_3, VAR_4);
  VAR_2->n += VAR_4;
  VAR_2->z[VAR_2->n] = '\0';

  return VAR_1;
}
