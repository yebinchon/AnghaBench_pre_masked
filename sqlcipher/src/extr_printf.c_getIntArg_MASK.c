
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_3__ {scalar_t__ nArg; scalar_t__ nUsed; int * apArg; } ;
typedef TYPE_1__ PrintfArguments ;


 int FUNC_0 (int ) ;

__attribute__((used)) static sqlite3_int64 FUNC_1(PrintfArguments *VAR_0){
  if( VAR_0->nArg<=VAR_0->nUsed ) return 0;
  return FUNC_0(VAR_0->apArg[VAR_0->nUsed++]);
}
