
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rc; } ;
typedef TYPE_1__ Error ;


 scalar_t__ VAR_0 ;
 double FUNC_0 () ;
 double VAR_1 ;

__attribute__((used)) static int FUNC_1(
  Error *VAR_2
){
  int VAR_3 = 1;
  if( VAR_2->rc==VAR_0 ){
    double VAR_4 = FUNC_0();
    VAR_3 = (VAR_4 >= VAR_1);
  }
  return VAR_3;
}
