
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pParse; int zAuthContext; } ;
struct TYPE_4__ {int zAuthContext; } ;
typedef TYPE_2__ AuthContext ;



void FUNC_0(AuthContext *VAR_0){
  if( VAR_0->pParse ){
    VAR_0->pParse->zAuthContext = VAR_0->zAuthContext;
    VAR_0->pParse = 0;
  }
}
