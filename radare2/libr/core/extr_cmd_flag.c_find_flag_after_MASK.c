
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct find_flag_t {scalar_t__ at; TYPE_1__* win; } ;
struct TYPE_3__ {scalar_t__ offset; } ;
typedef TYPE_1__ RFlagItem ;



__attribute__((used)) static bool FUNC_0(RFlagItem *VAR_0, void *VAR_1) {
 struct find_flag_t *VAR_2 = (struct find_flag_t *)VAR_1;
 if (VAR_0->offset > VAR_2->at && (!VAR_2->win || VAR_0->offset < VAR_2->win->offset)) {
  VAR_2->win = VAR_0;
 }
 return 1;
}
