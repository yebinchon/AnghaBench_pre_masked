
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pAux; } ;
struct TYPE_3__ {void* pUserData; } ;
typedef TYPE_2__ Fts5Cursor ;
typedef int Fts5Context ;



__attribute__((used)) static void *FUNC_0(Fts5Context *VAR_0){
  Fts5Cursor *VAR_1 = (Fts5Cursor*)VAR_0;
  return VAR_1->pAux->pUserData;
}
