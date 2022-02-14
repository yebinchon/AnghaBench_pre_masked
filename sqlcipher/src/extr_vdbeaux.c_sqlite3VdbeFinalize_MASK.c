
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ magic; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_6__ {int errMask; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(Vdbe *VAR_3){
  int VAR_4 = VAR_0;
  if( VAR_3->magic==VAR_2 || VAR_3->magic==VAR_1 ){
    VAR_4 = FUNC_2(VAR_3);
    FUNC_0( (VAR_4 & VAR_3->db->errMask)==VAR_4 );
  }
  FUNC_1(VAR_3);
  return VAR_4;
}
