
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_3__ {int nPagesize; int nMapLimit; } ;
typedef scalar_t__ LsmPgno ;
typedef TYPE_1__ FileSystem ;



__attribute__((used)) static int FUNC_0(FileSystem *VAR_0, LsmPgno VAR_1){
  return ((i64)VAR_1*VAR_0->nPagesize <= VAR_0->nMapLimit);
}
