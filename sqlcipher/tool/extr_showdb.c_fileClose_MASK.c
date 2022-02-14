
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bRaw; int dbfd; scalar_t__ pFd; scalar_t__ pDb; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(){
  if( VAR_0.bRaw==0 ){
    FUNC_1(VAR_0.pDb);
    VAR_0.pDb = 0;
    VAR_0.pFd = 0;
  }else{
    FUNC_0(VAR_0.dbfd);
    VAR_0.dbfd = -1;
  }
}
