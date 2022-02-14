
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iTimeout; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, int VAR_2){
  FUNC_0(VAR_1);
  if( VAR_2*10>VAR_0.iTimeout ){
    if( VAR_0.iTimeout>0 ) FUNC_1("timeout after %dms", VAR_0.iTimeout);
    return 0;
  }
  FUNC_2(10);
  return 1;
}
