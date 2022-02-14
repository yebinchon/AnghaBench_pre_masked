
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pLevel; TYPE_1__* pDb; } ;
struct TYPE_6__ {int lhs; } ;
struct TYPE_5__ {int pWorker; int * pFS; } ;
typedef TYPE_3__ MergeWorker ;
typedef int FileSystem ;


 int FUNC_0 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_1(
  MergeWorker *VAR_0
){
  FileSystem *VAR_1 = VAR_0->pDb->pFS;
  return FUNC_0(VAR_1, VAR_0->pDb->pWorker, &VAR_0->pLevel->lhs);
}
