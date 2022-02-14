
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* (* xRealloc ) (void*,int) ;} ;
struct TYPE_4__ {TYPE_1__ m; } ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;
 void* FUNC_1 (void*,int) ;

__attribute__((used)) static void *FUNC_2(void *VAR_1, int VAR_2){
  void *VAR_3 = 0;
  if( !FUNC_0() ){
    VAR_3 = VAR_0.m.xRealloc(VAR_1, VAR_2);
  }
  return VAR_3;
}
