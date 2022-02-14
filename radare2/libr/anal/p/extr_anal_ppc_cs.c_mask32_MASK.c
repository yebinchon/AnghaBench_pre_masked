
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int VAR_0 ;

__attribute__((used)) static ut32 FUNC_0(ut32 VAR_1, ut32 VAR_2) {
 ut32 VAR_3 = VAR_0 >> VAR_1;
 ut32 VAR_4 = VAR_0 << (31 - VAR_2);
 return (VAR_1 <= VAR_2) ? VAR_3 & VAR_4 : VAR_3 | VAR_4;
}
