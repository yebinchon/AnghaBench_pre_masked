
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int flags; int enc; TYPE_1__* db; } ;
struct TYPE_6__ {int mutex; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(Mem *VAR_7, int VAR_8){

  int VAR_9;

  FUNC_0( !FUNC_1(VAR_7) );
  FUNC_0( VAR_8==VAR_6 || VAR_8==VAR_5
           || VAR_8==VAR_4 );
  if( !(VAR_7->flags&VAR_0) || VAR_7->enc==VAR_8 ){
    return VAR_3;
  }
  FUNC_0( VAR_7->db==0 || FUNC_3(VAR_7->db->mutex) );







  VAR_9 = FUNC_2(VAR_7, (u8)VAR_8);
  FUNC_0(VAR_9==VAR_3 || VAR_9==VAR_2);
  FUNC_0(VAR_9==VAR_3 || VAR_7->enc!=VAR_8);
  FUNC_0(VAR_9==VAR_2 || VAR_7->enc==VAR_8);
  return VAR_9;

}
