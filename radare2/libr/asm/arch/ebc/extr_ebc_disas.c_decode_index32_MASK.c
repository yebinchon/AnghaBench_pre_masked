
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_3__ {int a_width; int n; int c; int sign; int type; } ;
typedef TYPE_1__ ebc_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const ut8 *VAR_3, ebc_index_t *VAR_4) {
 ut32 VAR_5 = *(ut32*)VAR_3;
 VAR_4->type = VAR_0;
 VAR_4->sign = VAR_5 & FUNC_0(31) ? VAR_2 : VAR_1;
 VAR_4->a_width = ((VAR_5 >> 28) & FUNC_1(2)) * 4;
 VAR_4->n = VAR_5 & FUNC_1(VAR_4->a_width);
 VAR_4->c = (VAR_5 >> VAR_4->a_width) & FUNC_1(28 - VAR_4->a_width);
 return 0;
}
