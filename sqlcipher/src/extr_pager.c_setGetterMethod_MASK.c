
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ xCodec; int xGet; scalar_t__ errCode; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(Pager *VAR_3){
  if( VAR_3->errCode ){
    VAR_3->xGet = VAR_0;
  }else{
    VAR_3->xGet = VAR_2;
  }
}
