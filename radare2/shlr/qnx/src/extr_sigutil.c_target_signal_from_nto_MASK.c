
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_3__ {int nto_sig; int gdb_sig; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int) ;

enum target_signal
FUNC_2 (int VAR_4) {
 int VAR_5;
 if (VAR_4 == 0)
  return 0;

 for (VAR_5 = 0; VAR_5 != FUNC_0 (VAR_3); VAR_5++) {
  if (VAR_3[VAR_5].nto_sig == VAR_4)
   return VAR_3[VAR_5].gdb_sig;
 }

 if (VAR_4 >= VAR_1 && VAR_4 <= VAR_0)
  return VAR_2 + VAR_4 - VAR_1;
 return FUNC_1 (VAR_4);
}
