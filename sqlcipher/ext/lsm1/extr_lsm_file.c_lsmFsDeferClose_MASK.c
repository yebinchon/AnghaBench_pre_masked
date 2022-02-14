
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pLsmFile; scalar_t__ fdDb; } ;
struct TYPE_5__ {scalar_t__ pNext; scalar_t__ pFile; } ;
typedef TYPE_1__ LsmFile ;
typedef TYPE_2__ FileSystem ;


 int FUNC_0 (int) ;

LsmFile *FUNC_1(FileSystem *VAR_0){
  LsmFile *VAR_1 = VAR_0->pLsmFile;
  FUNC_0( VAR_1->pNext==0 );
  VAR_1->pFile = VAR_0->fdDb;
  VAR_0->fdDb = 0;
  VAR_0->pLsmFile = 0;
  return VAR_1;
}
