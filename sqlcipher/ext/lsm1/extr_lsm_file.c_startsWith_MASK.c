
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iFirst; } ;
typedef TYPE_1__ Segment ;
typedef scalar_t__ LsmPgno ;



__attribute__((used)) static Segment *FUNC_0(Segment *VAR_0, LsmPgno VAR_1){
  return (VAR_1==VAR_0->iFirst) ? VAR_0 : 0;
}
