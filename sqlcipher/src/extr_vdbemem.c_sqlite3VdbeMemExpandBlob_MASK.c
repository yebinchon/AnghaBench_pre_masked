
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int nZero; } ;
struct TYPE_11__ {int flags; int n; TYPE_2__ u; int * z; TYPE_1__* db; } ;
struct TYPE_9__ {int mutex; } ;
typedef TYPE_3__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;

int FUNC_8(Mem *VAR_5){
  int VAR_6;
  FUNC_1( VAR_5->flags & VAR_2 );
  FUNC_1( (VAR_5->flags&VAR_0)!=0 || FUNC_0(VAR_5) );
  FUNC_7( FUNC_6(VAR_5) );
  FUNC_1( !FUNC_4(VAR_5) );
  FUNC_1( VAR_5->db==0 || FUNC_5(VAR_5->db->mutex) );


  VAR_6 = VAR_5->n + VAR_5->u.nZero;
  if( VAR_6<=0 ){
    if( (VAR_5->flags & VAR_0)==0 ) return VAR_4;
    VAR_6 = 1;
  }
  if( FUNC_3(VAR_5, VAR_6, 1) ){
    return VAR_3;
  }

  FUNC_2(&VAR_5->z[VAR_5->n], 0, VAR_5->u.nZero);
  VAR_5->n += VAR_5->u.nZero;
  VAR_5->flags &= ~(VAR_2|VAR_1);
  return VAR_4;
}
