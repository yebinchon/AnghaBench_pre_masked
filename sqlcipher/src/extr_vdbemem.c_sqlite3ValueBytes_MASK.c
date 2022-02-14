
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_7__ {scalar_t__ enc; } ;
typedef TYPE_2__ sqlite3_value ;
struct TYPE_6__ {int nZero; } ;
struct TYPE_8__ {int flags; int n; TYPE_1__ u; } ;
typedef TYPE_3__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

int FUNC_2(sqlite3_value *VAR_4, u8 VAR_5){
  Mem *VAR_6 = (Mem*)VAR_4;
  FUNC_0( (VAR_6->flags & VAR_1)==0 || (VAR_6->flags & (VAR_2|VAR_0))==0 );
  if( (VAR_6->flags & VAR_2)!=0 && VAR_4->enc==VAR_5 ){
    return VAR_6->n;
  }
  if( (VAR_6->flags & VAR_0)!=0 ){
    if( VAR_6->flags & VAR_3 ){
      return VAR_6->n + VAR_6->u.nZero;
    }else{
      return VAR_6->n;
    }
  }
  if( VAR_6->flags & VAR_1 ) return 0;
  return FUNC_1(VAR_4, VAR_5);
}
