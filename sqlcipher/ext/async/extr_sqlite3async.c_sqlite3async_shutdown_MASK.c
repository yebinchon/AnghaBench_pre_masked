
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_2__ {scalar_t__ pAppData; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(void){
  if( VAR_0.pAppData ){
    FUNC_0();
    FUNC_1((sqlite3_vfs *)&VAR_0);
    VAR_0.pAppData = 0;
  }
}
