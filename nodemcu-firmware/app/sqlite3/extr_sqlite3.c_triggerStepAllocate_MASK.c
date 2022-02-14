
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3 ;
struct TYPE_6__ {char* zTarget; int op; } ;
typedef TYPE_1__ TriggerStep ;
struct TYPE_7__ {scalar_t__ n; int z; } ;
typedef TYPE_2__ Token ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static TriggerStep *FUNC_3(
  sqlite3 *VAR_0,
  u8 VAR_1,
  Token *VAR_2
){
  TriggerStep *VAR_3;

  VAR_3 = FUNC_1(VAR_0, sizeof(TriggerStep) + VAR_2->n + 1);
  if( VAR_3 ){
    char *VAR_4 = (char*)&VAR_3[1];
    FUNC_0(VAR_4, VAR_2->z, VAR_2->n);
    FUNC_2(VAR_4);
    VAR_3->zTarget = VAR_4;
    VAR_3->op = VAR_1;
  }
  return VAR_3;
}
