
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_3__ {int const* end; int const* pos; } ;
typedef TYPE_1__ mcore_handle ;



int FUNC_0(mcore_handle* VAR_0, const ut8* VAR_1, const ut32 VAR_2) {
 if (!VAR_0 || !VAR_1 || VAR_2 < 2) {
  return 1;
 }
 VAR_0->pos = VAR_1;
 VAR_0->end = VAR_1 + VAR_2;
 return 0;
}
