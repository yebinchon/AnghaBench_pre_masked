
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {int zSpan; int orconf; int * pSelect; int op; } ;
typedef TYPE_1__ TriggerStep ;
typedef int Select ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char const*,char const*) ;

TriggerStep *FUNC_3(
  sqlite3 *VAR_2,
  Select *VAR_3,
  const char *VAR_4,
  const char *VAR_5
){
  TriggerStep *VAR_6 = FUNC_0(VAR_2, sizeof(TriggerStep));
  if( VAR_6==0 ) {
    FUNC_1(VAR_2, VAR_3);
    return 0;
  }
  VAR_6->op = VAR_1;
  VAR_6->pSelect = VAR_3;
  VAR_6->orconf = VAR_0;
  VAR_6->zSpan = FUNC_2(VAR_2, VAR_4, VAR_5);
  return VAR_6;
}
