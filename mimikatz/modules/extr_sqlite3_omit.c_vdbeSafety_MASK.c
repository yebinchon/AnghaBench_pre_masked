
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ db; } ;
typedef TYPE_1__ Vdbe ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(Vdbe *VAR_1){
  if( VAR_1->db==0 ){
    FUNC_0(VAR_0, "API called with finalized prepared statement");
    return 1;
  }else{
    return 0;
  }
}
