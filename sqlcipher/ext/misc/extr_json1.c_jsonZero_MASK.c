
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nAlloc; int bStatic; scalar_t__ nUsed; int zSpace; int zBuf; } ;
typedef TYPE_1__ JsonString ;



__attribute__((used)) static void FUNC_0(JsonString *VAR_0){
  VAR_0->zBuf = VAR_0->zSpace;
  VAR_0->nAlloc = sizeof(VAR_0->zSpace);
  VAR_0->nUsed = 0;
  VAR_0->bStatic = 1;
}
