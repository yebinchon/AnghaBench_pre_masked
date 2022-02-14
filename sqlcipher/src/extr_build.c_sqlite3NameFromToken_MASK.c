
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_3__ {int n; scalar_t__ z; } ;
typedef TYPE_1__ Token ;


 char* FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (char*) ;

char *FUNC_2(sqlite3 *VAR_0, Token *VAR_1){
  char *VAR_2;
  if( VAR_1 ){
    VAR_2 = FUNC_0(VAR_0, (char*)VAR_1->z, VAR_1->n);
    FUNC_1(VAR_2);
  }else{
    VAR_2 = 0;
  }
  return VAR_2;
}
