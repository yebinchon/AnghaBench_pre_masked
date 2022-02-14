
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_4__ {scalar_t__ zInput; void* iLang; void* rLimit; } ;
typedef TYPE_1__ amatch_cursor ;
typedef void* amatch_cost ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(
  sqlite3_vtab_cursor *VAR_2,
  int VAR_3, const char *VAR_4,
  int VAR_5, sqlite3_value **VAR_6
){
  amatch_cursor *VAR_7 = (amatch_cursor *)VAR_2;
  const char *VAR_8 = "*";
  int VAR_9;

  FUNC_1(VAR_7);
  VAR_9 = 0;
  if( VAR_3 & 1 ){
    VAR_8 = (const char*)FUNC_5(VAR_6[0]);
    VAR_9++;
  }
  if( VAR_3 & 2 ){
    VAR_7->rLimit = (amatch_cost)FUNC_4(VAR_6[VAR_9]);
    VAR_9++;
  }
  if( VAR_3 & 4 ){
    VAR_7->iLang = (amatch_cost)FUNC_4(VAR_6[VAR_9]);
    VAR_9++;
  }
  VAR_7->zInput = FUNC_3("%s", VAR_8);
  if( VAR_7->zInput==0 ) return VAR_0;
  FUNC_0(VAR_7, 0, 0, "", "");
  FUNC_2(VAR_2);

  return VAR_1;
}
