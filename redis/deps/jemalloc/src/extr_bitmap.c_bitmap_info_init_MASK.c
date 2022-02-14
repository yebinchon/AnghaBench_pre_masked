
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nbits; int ngroups; } ;
typedef TYPE_1__ bitmap_info_t ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int) ;

void
FUNC_3(bitmap_info_t *VAR_1, size_t VAR_2) {
 FUNC_2(VAR_2 > 0);
 FUNC_2(VAR_2 <= (FUNC_1(1) << VAR_0));

 VAR_1->ngroups = FUNC_0(VAR_2);
 VAR_1->nbits = VAR_2;
}
