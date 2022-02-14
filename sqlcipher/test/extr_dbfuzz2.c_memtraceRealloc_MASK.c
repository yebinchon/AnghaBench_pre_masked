
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* xSize ) (void*) ;int (* xRoundup ) (int) ;void* (* xRealloc ) (void*,int) ;} ;


 int FUNC_0 (scalar_t__,char*,int,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int) ;
 void* FUNC_7 (void*,int) ;

__attribute__((used)) static void *FUNC_8(void *VAR_2, int VAR_3){
  if( VAR_2==0 ) return FUNC_2(VAR_3);
  if( VAR_3==0 ){
    FUNC_1(VAR_2);
    return 0;
  }
  if( VAR_1 ){
    FUNC_0(VAR_1, "MEMTRACE: resize %d -> %d bytes\n",
            VAR_0.xSize(VAR_2), VAR_0.xRoundup(VAR_3));
  }
  return VAR_0.xRealloc(VAR_2, VAR_3);
}
