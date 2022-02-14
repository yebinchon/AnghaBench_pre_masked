
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlChar ;
typedef int uint32_t ;



__attribute__((used)) static unsigned long
FUNC_0(const xmlChar *VAR_0, int VAR_1,
                      const xmlChar *VAR_2, int VAR_3, int VAR_4)
{
    uint32_t VAR_5;
    int VAR_6;

    VAR_5 = VAR_4;

    for (VAR_6 = 0;VAR_6 < VAR_1; VAR_6++) {
        VAR_5 += VAR_0[VAR_6];
 VAR_5 += (VAR_5 << 10);
 VAR_5 ^= (VAR_5 >> 6);
    }
    VAR_5 += ':';
    VAR_5 += (VAR_5 << 10);
    VAR_5 ^= (VAR_5 >> 6);

    for (VAR_6 = 0;VAR_6 < VAR_3; VAR_6++) {
        VAR_5 += VAR_2[VAR_6];
 VAR_5 += (VAR_5 << 10);
 VAR_5 ^= (VAR_5 >> 6);
    }
    VAR_5 += (VAR_5 << 3);
    VAR_5 ^= (VAR_5 >> 11);
    VAR_5 += (VAR_5 << 15);

    return VAR_5;
}
