
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* pVdbe; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_5__ {int expired; struct TYPE_5__* pNext; } ;
typedef TYPE_2__ Vdbe ;



void FUNC_0(sqlite3 *VAR_0, int VAR_1){
  Vdbe *VAR_2;
  for(VAR_2 = VAR_0->pVdbe; VAR_2; VAR_2=VAR_2->pNext){
    VAR_2->expired = VAR_1+1;
  }
}
