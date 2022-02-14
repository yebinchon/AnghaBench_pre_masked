
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 int FUNC_1 (void**) ;

__attribute__((used)) static inline void FUNC_2(void **VAR_0, int VAR_1) {
 FUNC_1 (VAR_0);
 FUNC_0 (VAR_0[VAR_1]);
 for(VAR_0 += VAR_1; *VAR_0; VAR_0++) *VAR_0 = *(VAR_0+1);
}
