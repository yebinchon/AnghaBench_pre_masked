
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nBlocksize; int nPagesize; scalar_t__ pCompress; } ;
typedef int LsmPgno ;
typedef TYPE_1__ FileSystem ;



__attribute__((used)) static LsmPgno FUNC_0(FileSystem *VAR_0, int VAR_1){
  if( VAR_0->pCompress ){
    return VAR_0->nBlocksize * (LsmPgno)VAR_1 - 1 - 4;
  }else{
    const int VAR_2 = (VAR_0->nBlocksize / VAR_0->nPagesize);
    return VAR_1 * VAR_2;
  }
}
