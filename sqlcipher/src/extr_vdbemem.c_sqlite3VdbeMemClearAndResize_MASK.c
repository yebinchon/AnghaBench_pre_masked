
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int szMalloc; int zMalloc; int z; } ;
typedef TYPE_1__ Mem ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;

int FUNC_2(Mem *VAR_6, int VAR_7){
  FUNC_0( VAR_0 || VAR_7>0 );
  FUNC_0( (VAR_6->flags & VAR_1)==0 || VAR_6->szMalloc==0 );
  if( VAR_6->szMalloc<VAR_7 ){
    return FUNC_1(VAR_6, VAR_7, 0);
  }
  FUNC_0( (VAR_6->flags & VAR_1)==0 );
  VAR_6->z = VAR_6->zMalloc;
  VAR_6->flags &= (VAR_3|VAR_2|VAR_4);
  return VAR_5;
}
