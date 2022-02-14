
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rc; char* zErr; } ;
typedef TYPE_1__ Error ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(
  Error *VAR_1,
  char *VAR_2
){
  if( VAR_1->rc==VAR_0 ){
    VAR_1->rc = 1;
    VAR_1->zErr = VAR_2;
  }else{
    FUNC_0(VAR_2);
  }
}
