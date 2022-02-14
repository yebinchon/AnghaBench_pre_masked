
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;



__attribute__((used)) static inline void FUNC_0(BYTE *VAR_0, DWORD VAR_1) {
    BYTE VAR_2;
    DWORD VAR_3;

    for (VAR_3=0; VAR_3<VAR_1/2; VAR_3++) {
        VAR_2 = VAR_0[VAR_3];
        VAR_0[VAR_3] = VAR_0[VAR_1-VAR_3-1];
        VAR_0[VAR_1-VAR_3-1] = VAR_2;
    }
}
