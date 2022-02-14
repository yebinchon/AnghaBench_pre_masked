
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nBlocksize; int nPagesize; int pCompress; } ;
typedef int const LsmPgno ;
typedef TYPE_1__ FileSystem ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(FileSystem *VAR_0, LsmPgno VAR_1){
  const int VAR_2 = (VAR_0->nBlocksize / VAR_0->nPagesize);
  FUNC_0( !VAR_0->pCompress );
  return ( VAR_1 && (VAR_1 % VAR_2)==0 );
}
