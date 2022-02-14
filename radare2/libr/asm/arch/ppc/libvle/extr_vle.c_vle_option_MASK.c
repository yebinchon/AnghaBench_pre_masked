
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int options; } ;
typedef TYPE_1__ vle_handle ;
typedef int ut32 ;



int FUNC_0(vle_handle* VAR_0, ut32 VAR_1) {
 if (!VAR_0) {
  return 1;
 }
 VAR_0->options |= VAR_1;
 return 0;
}
