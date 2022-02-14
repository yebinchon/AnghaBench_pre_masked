
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_7__ {TYPE_1__* print; scalar_t__ offset; scalar_t__ blocksize; } ;
struct TYPE_6__ {int ocur; int cur; scalar_t__ cur_enabled; } ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(RCore *VAR_0, ut64 *VAR_1, ut64 *VAR_2, ut64 *VAR_3) {
 *VAR_1 = VAR_0->offset;
 *VAR_2 = VAR_0->blocksize;
 if (VAR_0->print->cur_enabled) {
  if (VAR_0->print->ocur != -1) {
   int VAR_4 = VAR_0->print->cur - VAR_0->print->ocur;
   *VAR_3 = VAR_0->offset + VAR_0->print->ocur;
   FUNC_0 (VAR_0, VAR_4);
  } else {
   *VAR_3 = VAR_0->offset + VAR_0->print->cur;
  }
  FUNC_1 (VAR_0, *VAR_3, 1);
 }
}
