
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int zName; TYPE_1__* pSchema; } ;
typedef TYPE_2__ Table ;
struct TYPE_4__ {int fkeyHash; } ;
typedef int FKey ;


 scalar_t__ FUNC_0 (int *,int ) ;

FKey *FUNC_1(Table *VAR_0){
  return (FKey *)FUNC_0(&VAR_0->pSchema->fkeyHash, VAR_0->zName);
}
