
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(WCHAR VAR_1, WCHAR *VAR_2) {
    VAR_2[0] = '%';
    VAR_2[1] = VAR_0[(VAR_1 >> 4) & 0xf];
    VAR_2[2] = VAR_0[VAR_1 & 0xf];
}
