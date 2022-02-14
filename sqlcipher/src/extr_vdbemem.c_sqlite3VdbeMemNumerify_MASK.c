
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_7__ {int i; int r; } ;
struct TYPE_8__ {int flags; TYPE_2__ u; int enc; int n; int z; TYPE_1__* db; } ;
struct TYPE_6__ {int mutex; } ;
typedef TYPE_3__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(Mem *VAR_7){
  if( (VAR_7->flags & (VAR_1|VAR_3|VAR_2))==0 ){
    int VAR_8;
    FUNC_1( (VAR_7->flags & (VAR_0|VAR_4))!=0 );
    FUNC_1( VAR_7->db==0 || FUNC_5(VAR_7->db->mutex) );
    VAR_8 = FUNC_3(VAR_7->z, &VAR_7->u.i, VAR_7->n, VAR_7->enc);
    if( VAR_8==0 ){
      FUNC_0(VAR_7, VAR_1);
    }else{
      i64 VAR_9 = VAR_7->u.i;
      FUNC_2(VAR_7->z, &VAR_7->u.r, VAR_7->n, VAR_7->enc);
      if( VAR_8==1 && FUNC_4(VAR_7->u.r, VAR_9) ){
        VAR_7->u.i = VAR_9;
        FUNC_0(VAR_7, VAR_1);
      }else{
        FUNC_0(VAR_7, VAR_3);
      }
    }
  }
  FUNC_1( (VAR_7->flags & (VAR_1|VAR_3|VAR_2))!=0 );
  VAR_7->flags &= ~(VAR_4|VAR_0|VAR_5);
  return VAR_6;
}
