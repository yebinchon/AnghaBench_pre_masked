
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int nFrame; int pgsz; TYPE_1__* aFrame; } ;
typedef TYPE_2__ sqlite3rbu ;
typedef int i64 ;
struct TYPE_4__ {scalar_t__ iDbPage; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(sqlite3rbu *VAR_1, i64 VAR_2){
  VAR_1->aFrame[VAR_1->nFrame-1].iDbPage = (u32)(VAR_2 / VAR_1->pgsz) + 1;
  return VAR_0;
}
