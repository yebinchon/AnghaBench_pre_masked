
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nBlocksize; int nPagesize; scalar_t__ pCompress; } ;
typedef int LsmPgno ;
typedef TYPE_1__ FileSystem ;



__attribute__((used)) static int FUNC_0(FileSystem *VAR_0, LsmPgno VAR_1){
  if( VAR_0->pCompress ){
    return (int)((VAR_1 / VAR_0->nBlocksize) + 1);
  }else{
    return (int)(1 + ((VAR_1-1) / (VAR_0->nBlocksize / VAR_0->nPagesize)));
  }
}
