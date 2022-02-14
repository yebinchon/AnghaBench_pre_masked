
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char const* zAuthContext; TYPE_1__* pParse; } ;
struct TYPE_6__ {char const* zAuthContext; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ AuthContext ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(
  Parse *VAR_0,
  AuthContext *VAR_1,
  const char *VAR_2
){
  FUNC_0( VAR_0 );
  VAR_1->pParse = VAR_0;
  VAR_1->zAuthContext = VAR_0->zAuthContext;
  VAR_0->zAuthContext = VAR_2;
}
