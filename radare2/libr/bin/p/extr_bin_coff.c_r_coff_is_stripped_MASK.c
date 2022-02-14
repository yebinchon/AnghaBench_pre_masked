
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int f_flags; } ;
struct r_bin_coff_obj {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct r_bin_coff_obj *VAR_3) {
 return !!(VAR_3->hdr.f_flags & (VAR_2 | VAR_0 | VAR_1));

}
