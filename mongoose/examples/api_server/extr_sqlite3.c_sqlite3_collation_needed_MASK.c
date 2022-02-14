
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* xCollNeeded ) (void*,TYPE_1__*,int,char const*) ;int mutex; void* pCollNeededArg; scalar_t__ xCollNeeded16; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(
  sqlite3 *VAR_1,
  void *VAR_2,
  void(*VAR_3)(void*,sqlite3*,int VAR_4,const char*)
){
  FUNC_0(VAR_1->mutex);
  VAR_1->xCollNeeded = VAR_3;
  VAR_1->xCollNeeded16 = 0;
  VAR_1->pCollNeededArg = VAR_2;
  FUNC_1(VAR_1->mutex);
  return VAR_0;
}
