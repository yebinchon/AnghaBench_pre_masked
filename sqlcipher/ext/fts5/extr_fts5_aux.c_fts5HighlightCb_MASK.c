
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int iStart; int iEnd; } ;
struct TYPE_4__ {int iRangeEnd; int iRangeStart; int iOff; int * zClose; TYPE_3__ iter; int * zIn; int * zOpen; int iPos; } ;
typedef TYPE_1__ HighlightContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int*,TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_3(
  void *VAR_2,
  int VAR_3,
  const char *VAR_4,
  int VAR_5,
  int VAR_6,
  int VAR_7
){
  HighlightContext *VAR_8 = (HighlightContext*)VAR_2;
  int VAR_9 = VAR_1;
  int VAR_10;

  FUNC_0(VAR_4, VAR_5);

  if( VAR_3 & VAR_0 ) return VAR_1;
  VAR_10 = VAR_8->iPos++;

  if( VAR_8->iRangeEnd>0 ){
    if( VAR_10<VAR_8->iRangeStart || VAR_10>VAR_8->iRangeEnd ) return VAR_1;
    if( VAR_8->iRangeStart && VAR_10==VAR_8->iRangeStart ) VAR_8->iOff = VAR_6;
  }

  if( VAR_10==VAR_8->iter.iStart ){
    FUNC_2(&VAR_9, VAR_8, &VAR_8->zIn[VAR_8->iOff], VAR_6 - VAR_8->iOff);
    FUNC_2(&VAR_9, VAR_8, VAR_8->zOpen, -1);
    VAR_8->iOff = VAR_6;
  }

  if( VAR_10==VAR_8->iter.iEnd ){
    if( VAR_8->iRangeEnd && VAR_8->iter.iStart<VAR_8->iRangeStart ){
      FUNC_2(&VAR_9, VAR_8, VAR_8->zOpen, -1);
    }
    FUNC_2(&VAR_9, VAR_8, &VAR_8->zIn[VAR_8->iOff], VAR_7 - VAR_8->iOff);
    FUNC_2(&VAR_9, VAR_8, VAR_8->zClose, -1);
    VAR_8->iOff = VAR_7;
    if( VAR_9==VAR_1 ){
      VAR_9 = FUNC_1(&VAR_8->iter);
    }
  }

  if( VAR_8->iRangeEnd>0 && VAR_10==VAR_8->iRangeEnd ){
    FUNC_2(&VAR_9, VAR_8, &VAR_8->zIn[VAR_8->iOff], VAR_7 - VAR_8->iOff);
    VAR_8->iOff = VAR_7;
    if( VAR_10>=VAR_8->iter.iStart && VAR_10<VAR_8->iter.iEnd ){
      FUNC_2(&VAR_9, VAR_8, VAR_8->zClose, -1);
    }
  }

  return VAR_9;
}
