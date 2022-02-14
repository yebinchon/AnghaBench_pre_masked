
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ map; } ;
typedef TYPE_1__ tms320_dasm_t ;
struct TYPE_8__ {int byte; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 (scalar_t__,int ,TYPE_4__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;

int FUNC_4(tms320_dasm_t * VAR_2) {
 int VAR_3 = 0;

 if (VAR_2->map) {

  return 0;
 }

 VAR_2->map = FUNC_2 ();
 if (!VAR_2->map) {
  return 0;
 }
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  FUNC_1 (VAR_2->map, VAR_1[VAR_3].byte, &VAR_1[VAR_3]);
 }

 FUNC_3(VAR_2, VAR_0);

 return 0;
}
