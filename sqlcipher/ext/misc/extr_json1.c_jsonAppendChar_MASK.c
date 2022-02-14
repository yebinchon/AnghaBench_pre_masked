
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nUsed; scalar_t__ nAlloc; char* zBuf; } ;
typedef TYPE_1__ JsonString ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(JsonString *VAR_0, char VAR_1){
  if( VAR_0->nUsed>=VAR_0->nAlloc && FUNC_0(VAR_0,1)!=0 ) return;
  VAR_0->zBuf[VAR_0->nUsed++] = VAR_1;
}
