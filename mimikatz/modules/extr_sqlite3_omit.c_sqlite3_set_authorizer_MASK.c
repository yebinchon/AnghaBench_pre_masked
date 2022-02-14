
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ sqlite3_xauth ;
struct TYPE_5__ {int mutex; void* pAuthArg; scalar_t__ xAuth; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(
  sqlite3 *VAR_2,
  int (*VAR_3)(void*,int,const char*,const char*,const char*,const char*),
  void *VAR_4
){



  FUNC_2(VAR_2->mutex);
  VAR_2->xAuth = (sqlite3_xauth)VAR_3;
  VAR_2->pAuthArg = VAR_4;
  FUNC_0(VAR_2, 0);
  FUNC_3(VAR_2->mutex);
  return VAR_1;
}
