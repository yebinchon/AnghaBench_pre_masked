
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(uint64_t *VAR_2, const unsigned char *VAR_3, size_t VAR_4)
{
    size_t VAR_5;
    uint64_t VAR_6;

    if (VAR_4 > sizeof(*VAR_2)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    if (VAR_3 == ((void*)0))
        return 0;
    for (VAR_6 = 0, VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        VAR_6 <<= 8;
        VAR_6 |= VAR_3[VAR_5];
    }
    *VAR_2 = VAR_6;
    return 1;
}
