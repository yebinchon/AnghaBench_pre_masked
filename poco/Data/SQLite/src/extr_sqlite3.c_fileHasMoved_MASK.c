
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pId; TYPE_2__* pInode; int zPath; } ;
typedef TYPE_3__ unixFile ;
typedef scalar_t__ u64 ;
struct stat {scalar_t__ st_ino; } ;
struct TYPE_5__ {scalar_t__ pId; scalar_t__ ino; } ;
struct TYPE_6__ {TYPE_1__ fileId; } ;


 scalar_t__ FUNC_0 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_1(unixFile *VAR_0){



  struct stat VAR_1;
  return VAR_0->pInode!=0 &&
      (FUNC_0(VAR_0->zPath, &VAR_1)!=0
         || (u64)VAR_1.st_ino!=VAR_0->pInode->fileId.ino);

}
