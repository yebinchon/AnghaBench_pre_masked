
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* xSize ) (void*) ;int (* xFree ) (void*) ;} ;


 int FUNC_0 (scalar_t__,char*,int) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(void *VAR_2){
  if( VAR_2==0 ) return;
  if( VAR_1 ){
    FUNC_0(VAR_1, "MEMTRACE: free %d bytes\n", VAR_0.xSize(VAR_2));
  }
  VAR_0.xFree(VAR_2);
}
