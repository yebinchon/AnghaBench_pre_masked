
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ db; } ;
typedef TYPE_1__ WorkerInfo ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_2(WorkerInfo *VAR_0){
  if( VAR_0->db ){
    FUNC_1(VAR_0, "close");
    FUNC_0(VAR_0->db);
    VAR_0->db = 0;
  }
}
