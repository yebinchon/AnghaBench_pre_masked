
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_10__ {int r; int i; } ;
struct TYPE_11__ {int flags; scalar_t__ enc; int z; int n; TYPE_2__ u; TYPE_1__* db; } ;
struct TYPE_9__ {int mutex; } ;
typedef TYPE_3__ Mem ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int const) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int const,int ,char*,int ) ;

int FUNC_8(Mem *VAR_9, u8 VAR_10, u8 VAR_11){
  int VAR_12 = VAR_9->flags;
  const int VAR_13 = 32;

  FUNC_1( VAR_9->db==0 || FUNC_6(VAR_9->db->mutex) );
  FUNC_1( !(VAR_12&VAR_5) );
  FUNC_1( !(VAR_12&(VAR_3|VAR_0)) );
  FUNC_1( VAR_12&(VAR_1|VAR_2) );
  FUNC_1( !FUNC_5(VAR_9) );
  FUNC_1( FUNC_0(VAR_9) );


  if( FUNC_4(VAR_9, VAR_13) ){
    VAR_9->enc = 0;
    return VAR_6;
  }







  if( VAR_12 & VAR_1 ){
    FUNC_7(VAR_13, VAR_9->z, "%lld", VAR_9->u.i);
  }else{
    FUNC_1( VAR_12 & VAR_2 );
    FUNC_7(VAR_13, VAR_9->z, "%!.15g", VAR_9->u.r);
  }
  FUNC_1( VAR_9->z!=0 );
  VAR_9->n = FUNC_2(VAR_9->z);
  VAR_9->enc = VAR_8;
  VAR_9->flags |= VAR_3|VAR_4;
  if( VAR_11 ) VAR_9->flags &= ~(VAR_1|VAR_2);
  FUNC_3(VAR_9, VAR_10);
  return VAR_7;
}
