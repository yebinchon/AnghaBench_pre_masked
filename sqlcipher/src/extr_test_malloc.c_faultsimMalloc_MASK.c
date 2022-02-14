
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* (* xMalloc ) (int) ;} ;
struct TYPE_4__ {TYPE_1__ m; } ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void *FUNC_2(int VAR_1){
  void *VAR_2 = 0;
  if( !FUNC_0() ){
    VAR_2 = VAR_0.m.xMalloc(VAR_1);
  }
  return VAR_2;
}
