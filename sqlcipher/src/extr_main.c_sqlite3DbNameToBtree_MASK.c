
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_5__ {int * pBt; } ;
typedef int Btree ;


 int FUNC_0 (TYPE_2__*,char const*) ;

Btree *FUNC_1(sqlite3 *VAR_0, const char *VAR_1){
  int VAR_2 = VAR_1 ? FUNC_0(VAR_0, VAR_1) : 0;
  return VAR_2<0 ? 0 : VAR_0->aDb[VAR_2].pBt;
}
