
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void FUNC_1(void *VAR_0, ut32 VAR_1) {
 ut8* VAR_2 = (ut8*)VAR_0;
 FUNC_0 (VAR_2++, VAR_1);
 FUNC_0 (VAR_2++, VAR_1 >> 8);
 FUNC_0 (VAR_2, VAR_1 >> 16);
}
