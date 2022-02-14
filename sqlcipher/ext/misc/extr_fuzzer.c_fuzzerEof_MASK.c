
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {scalar_t__ rLimit; } ;
typedef TYPE_1__ fuzzer_cursor ;
typedef scalar_t__ fuzzer_cost ;



__attribute__((used)) static int FUNC_0(sqlite3_vtab_cursor *VAR_0){
  fuzzer_cursor *VAR_1 = (fuzzer_cursor*)VAR_0;
  return VAR_1->rLimit<=(fuzzer_cost)0;
}
