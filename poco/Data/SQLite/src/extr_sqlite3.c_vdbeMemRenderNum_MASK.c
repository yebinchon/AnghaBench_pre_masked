
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {double i; double r; } ;
struct TYPE_9__ {int flags; TYPE_1__ u; } ;
struct TYPE_8__ {char* zText; scalar_t__ mxAlloc; size_t nChar; } ;
typedef TYPE_2__ StrAccum ;
typedef TYPE_3__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int,int ) ;
 int FUNC_2 (TYPE_2__*,char*,double) ;

__attribute__((used)) static void FUNC_3(int VAR_3, char *VAR_4, Mem *VAR_5){
  StrAccum VAR_6;
  FUNC_0( VAR_5->flags & (VAR_0|VAR_2|VAR_1) );
  FUNC_1(&VAR_6, 0, VAR_4, VAR_3, 0);
  if( VAR_5->flags & VAR_0 ){
    FUNC_2(&VAR_6, "%lld", VAR_5->u.i);
  }else if( VAR_5->flags & VAR_1 ){
    FUNC_2(&VAR_6, "%!.15g", (double)VAR_5->u.i);
  }else{
    FUNC_2(&VAR_6, "%!.15g", VAR_5->u.r);
  }
  FUNC_0( VAR_6.zText==VAR_4 && VAR_6.mxAlloc<=0 );
  VAR_4[VAR_6.nChar] = 0;
}
