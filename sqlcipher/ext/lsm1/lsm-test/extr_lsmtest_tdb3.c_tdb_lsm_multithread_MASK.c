
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_2__ {scalar_t__ eMode; } ;
typedef TYPE_1__ LsmDb ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

int FUNC_1(TestDb *VAR_1){
  int VAR_2 = 0;
  if( FUNC_0(VAR_1) ){
    VAR_2 = ((LsmDb*)VAR_1)->eMode!=VAR_0;
  }
  return VAR_2;
}
