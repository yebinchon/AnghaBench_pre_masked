
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int flags; int enc; void const* z; TYPE_1__* db; } ;
typedef TYPE_2__ sqlite3_value ;
struct TYPE_7__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 void const* FUNC_4 (TYPE_2__*,int) ;

const void *FUNC_5(sqlite3_value* VAR_4, u8 VAR_5){
  if( !VAR_4 ) return 0;
  FUNC_0( VAR_4->db==0 || FUNC_3(VAR_4->db->mutex) );
  FUNC_0( (VAR_5&3)==(VAR_5&~VAR_3) );
  FUNC_0( !FUNC_2(VAR_4) );
  if( (VAR_4->flags&(VAR_1|VAR_2))==(VAR_1|VAR_2) && VAR_4->enc==VAR_5 ){
    FUNC_0( FUNC_1(VAR_4) );
    return VAR_4->z;
  }
  if( VAR_4->flags&VAR_0 ){
    return 0;
  }
  return FUNC_4(VAR_4, VAR_5);
}
