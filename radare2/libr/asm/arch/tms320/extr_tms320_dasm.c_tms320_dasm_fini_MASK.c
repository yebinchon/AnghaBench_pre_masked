
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ map; } ;
typedef TYPE_1__ tms320_dasm_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

int FUNC_2(tms320_dasm_t * VAR_0) {
 if (VAR_0) {
  if (VAR_0->map) {
   FUNC_0 (VAR_0->map);
  }

  FUNC_1 (VAR_0, 0, sizeof (tms320_dasm_t));
 }
 return 0;
}
