
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* xWalCallback ) (void*,TYPE_1__*,char const*,int) ;int mutex; void* pWalArg; } ;
typedef TYPE_1__ sqlite3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void *FUNC_2(
  sqlite3 *VAR_0,
  int(*VAR_1)(void *, sqlite3*, const char*, int),
  void *VAR_2
){

  void *VAR_3;
  FUNC_0(VAR_0->mutex);
  VAR_3 = VAR_0->pWalArg;
  VAR_0->xWalCallback = VAR_1;
  VAR_0->pWalArg = VAR_2;
  FUNC_1(VAR_0->mutex);
  return VAR_3;



}
