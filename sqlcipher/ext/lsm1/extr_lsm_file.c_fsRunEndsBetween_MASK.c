
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iFirst; scalar_t__ iLastPg; } ;
typedef TYPE_1__ Segment ;
typedef scalar_t__ LsmPgno ;



__attribute__((used)) static int FUNC_0(
  Segment *VAR_0,
  Segment *VAR_1,
  LsmPgno VAR_2,
  LsmPgno VAR_3
){
  return (VAR_0!=VAR_1 && (
        (VAR_0->iFirst>=VAR_2 && VAR_0->iFirst<=VAR_3)
     || (VAR_0->iLastPg>=VAR_2 && VAR_0->iLastPg<=VAR_3)
  ));
}
