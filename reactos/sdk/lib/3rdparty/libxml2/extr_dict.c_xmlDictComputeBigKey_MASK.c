
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlChar ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(const xmlChar* VAR_0, int VAR_1, int VAR_2) {
    uint32_t VAR_3;
    int VAR_4;

    if (VAR_1 <= 0 || VAR_0 == ((void*)0)) return(0);

    VAR_3 = VAR_2;

    for (VAR_4 = 0;VAR_4 < VAR_1; VAR_4++) {
        VAR_3 += VAR_0[VAR_4];
 VAR_3 += (VAR_3 << 10);
 VAR_3 ^= (VAR_3 >> 6);
    }
    VAR_3 += (VAR_3 << 3);
    VAR_3 ^= (VAR_3 >> 11);
    VAR_3 += (VAR_3 << 15);

    return VAR_3;
}
