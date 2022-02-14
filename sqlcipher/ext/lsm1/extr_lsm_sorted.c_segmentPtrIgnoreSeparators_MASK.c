
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int nPtr; int * aPtr; } ;
typedef int SegmentPtr ;
typedef TYPE_1__ MultiCursor ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(MultiCursor *VAR_1, SegmentPtr *VAR_2){
  return (VAR_1->flags & VAR_0)==0
      || (VAR_2!=&VAR_1->aPtr[VAR_1->nPtr-1]);
}
