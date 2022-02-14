
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int options; scalar_t__ inc; int const* end; int const* pos; } ;
typedef TYPE_1__ vle_handle ;
typedef int ut8 ;
typedef int ut32 ;


 int VAR_0 ;

int FUNC_0(vle_handle* VAR_1, const ut8* VAR_2, const ut32 VAR_3) {
 if (!VAR_1 || !VAR_2 || VAR_3 < 2) {
  return 1;
 }
 VAR_1->pos = VAR_2;
 VAR_1->end = VAR_2 + VAR_3;
 VAR_1->inc = 0;
 VAR_1->options = VAR_0;
 return 0;
}
