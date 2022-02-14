
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pWrite; } ;
typedef TYPE_1__ sqlite3expert ;
struct TYPE_7__ {struct TYPE_7__* pNext; } ;
typedef TYPE_2__ IdxWrite ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,char**) ;

__attribute__((used)) static int FUNC_1(sqlite3expert *VAR_1, char **VAR_2){
  int VAR_3 = VAR_0;
  IdxWrite *VAR_4 = 0;
  IdxWrite *VAR_5 = VAR_1->pWrite;

  while( VAR_3==VAR_0 && VAR_5!=VAR_4 ){
    IdxWrite *VAR_6;
    for(VAR_6=VAR_5; VAR_3==VAR_0 && VAR_6!=VAR_4; VAR_6=VAR_6->pNext){
      VAR_3 = FUNC_0(VAR_1, VAR_6, VAR_2);
    }
    VAR_4 = VAR_5;
    VAR_5 = VAR_1->pWrite;
  }

  return VAR_3;
}
