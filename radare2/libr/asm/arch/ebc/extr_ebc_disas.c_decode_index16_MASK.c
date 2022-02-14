
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut16 ;
struct TYPE_3__ {int a_width; int n; int c; int sign; int type; } ;
typedef TYPE_1__ ebc_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const ut8 *VAR_3, ebc_index_t *VAR_4) {
 ut16 VAR_5 = *(ut16*)VAR_3;
 VAR_4->type = VAR_0;
 VAR_4->sign = VAR_5 & 0x8000 ? VAR_2 : VAR_1;
 VAR_4->a_width = ((VAR_5 >> 12) & FUNC_0(2)) * 2;
 VAR_4->n = VAR_5 & FUNC_0(VAR_4->a_width);
 VAR_4->c = (VAR_5 >> VAR_4->a_width) & FUNC_0(12 - VAR_4->a_width);
 return 0;
}
