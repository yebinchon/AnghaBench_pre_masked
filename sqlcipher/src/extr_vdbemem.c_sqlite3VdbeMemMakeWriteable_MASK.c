
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int flags; scalar_t__ szMalloc; scalar_t__ z; scalar_t__ zMalloc; scalar_t__ pScopyFrom; TYPE_1__* db; } ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_2__ Mem ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(Mem *VAR_5){
  FUNC_1( VAR_5->db==0 || FUNC_3(VAR_5->db->mutex) );
  FUNC_1( !FUNC_2(VAR_5) );
  if( (VAR_5->flags & (VAR_2|VAR_0))!=0 ){
    if( FUNC_0(VAR_5) ) return VAR_3;
    if( VAR_5->szMalloc==0 || VAR_5->z!=VAR_5->zMalloc ){
      int VAR_6 = FUNC_4(VAR_5);
      if( VAR_6 ) return VAR_6;
    }
  }
  VAR_5->flags &= ~VAR_1;




  return VAR_4;
}
