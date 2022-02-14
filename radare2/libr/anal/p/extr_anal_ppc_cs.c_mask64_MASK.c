
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;


 int VAR_0 ;

__attribute__((used)) static ut64 FUNC_0(ut64 VAR_1, ut64 VAR_2) {
 ut64 VAR_3 = VAR_0 >> VAR_1;
 ut64 VAR_4 = VAR_0 << (63 - VAR_2);
 return (VAR_1 <= VAR_2) ? VAR_3 & VAR_4 : VAR_3 | VAR_4;
}
