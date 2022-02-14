
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; TYPE_1__* pDb; } ;
struct TYPE_4__ {int (* xCmp ) (void*,int,void*,int) ;} ;
typedef TYPE_2__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int (*) (void*,int,void*,int),int ,void*,int,int ,void*,int) ;

__attribute__((used)) static int FUNC_2(
  MultiCursor *VAR_5,
  int VAR_6, void *VAR_7, int VAR_8,
  int VAR_9, void *VAR_10, int VAR_11
){
  int (*VAR_12)(void *, int, void *, int) = VAR_5->pDb->xCmp;
  int VAR_13;


  VAR_13 = FUNC_1(VAR_12,
    FUNC_0(VAR_6), VAR_7, VAR_8,
    FUNC_0(VAR_9), VAR_10, VAR_11
  );





  if( VAR_13==0 && (VAR_5->flags & VAR_0) ){
    const int VAR_14 = VAR_3|VAR_2|VAR_1 |VAR_4;
    int VAR_15 = 0;
    int VAR_16 = 0;

    if( VAR_4==(VAR_6 & VAR_14) ) VAR_15 = +1;
    if( VAR_1 ==(VAR_6 & VAR_14) ) VAR_15 = -1;
    if( VAR_4==(VAR_9 & VAR_14) ) VAR_16 = +1;
    if( VAR_1 ==(VAR_9 & VAR_14) ) VAR_16 = -1;

    VAR_13 = (VAR_15 - VAR_16);
  }

  return VAR_13;
}
