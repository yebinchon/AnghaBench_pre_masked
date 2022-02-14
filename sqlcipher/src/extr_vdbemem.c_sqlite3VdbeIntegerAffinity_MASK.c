
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_8__ {scalar_t__ r; scalar_t__ i; } ;
struct TYPE_10__ {int flags; TYPE_1__ u; TYPE_2__* db; } ;
struct TYPE_9__ {int mutex; } ;
typedef TYPE_3__ Mem ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(Mem *VAR_4){
  i64 VAR_5;
  FUNC_2( VAR_4->flags & VAR_2 );
  FUNC_2( !FUNC_4(VAR_4) );
  FUNC_2( VAR_4->db==0 || FUNC_5(VAR_4->db->mutex) );
  FUNC_2( FUNC_0(VAR_4) );

  VAR_5 = FUNC_3(VAR_4->u.r);
  if( VAR_4->u.r==VAR_5 && VAR_5>VAR_3 && VAR_5<VAR_0 ){
    VAR_4->u.i = VAR_5;
    FUNC_1(VAR_4, VAR_1);
  }
}
