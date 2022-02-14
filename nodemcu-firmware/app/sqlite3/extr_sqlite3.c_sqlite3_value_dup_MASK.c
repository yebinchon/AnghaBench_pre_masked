
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int flags; scalar_t__ db; } ;
typedef TYPE_1__ sqlite3_value ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__ const*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;

sqlite3_value *FUNC_5(const sqlite3_value *VAR_7){
  sqlite3_value *VAR_8;
  if( VAR_7==0 ) return 0;
  VAR_8 = FUNC_4( sizeof(*VAR_8) );
  if( VAR_8==0 ) return 0;
  FUNC_1(VAR_8, 0, sizeof(*VAR_8));
  FUNC_0(VAR_8, VAR_7, VAR_0);
  VAR_8->flags &= ~VAR_2;
  VAR_8->db = 0;
  if( VAR_8->flags&(VAR_5|VAR_1) ){
    VAR_8->flags &= ~(VAR_4|VAR_2);
    VAR_8->flags |= VAR_3;
    if( FUNC_3(VAR_8)!=VAR_6 ){
      FUNC_2(VAR_8);
      VAR_8 = 0;
    }
  }
  return VAR_8;
}
