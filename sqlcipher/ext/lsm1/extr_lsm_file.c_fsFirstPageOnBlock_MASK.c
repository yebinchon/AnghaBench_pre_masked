
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nMetasize; int nBlocksize; int nPagesize; scalar_t__ pCompress; } ;
typedef int LsmPgno ;
typedef TYPE_1__ FileSystem ;



__attribute__((used)) static LsmPgno FUNC_0(FileSystem *VAR_0, int VAR_1){
  LsmPgno VAR_2;
  if( VAR_0->pCompress ){
    if( VAR_1==1 ){
      VAR_2 = VAR_0->nMetasize * 2 + 4;
    }else{
      VAR_2 = VAR_0->nBlocksize * (LsmPgno)(VAR_1-1) + 4;
    }
  }else{
    const int VAR_3 = (VAR_0->nBlocksize / VAR_0->nPagesize);
    if( VAR_1==1 ){
      VAR_2 = 1 + ((VAR_0->nMetasize*2 + VAR_0->nPagesize - 1) / VAR_0->nPagesize);
    }else{
      VAR_2 = 1 + (VAR_1-1) * VAR_3;
    }
  }
  return VAR_2;
}
