
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iLastPg; int iRoot; int iFirst; } ;
typedef TYPE_1__ Segment ;
typedef int FileSystem ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_1(FileSystem *VAR_0, Segment *VAR_1){
  return (VAR_1 && (
      FUNC_0(VAR_0, VAR_1, VAR_1->iFirst)
   || FUNC_0(VAR_0, VAR_1, VAR_1->iRoot)
   || FUNC_0(VAR_0, VAR_1, VAR_1->iLastPg)
  ));
}
