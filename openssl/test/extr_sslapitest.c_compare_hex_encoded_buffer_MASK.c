
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char,char const) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (char*,char*,int const) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0,
                                      size_t VAR_1,
                                      const uint8_t *VAR_2,
                                      size_t VAR_3)
{
    size_t VAR_4, VAR_5;
    char VAR_6[3];

    if (!FUNC_1(VAR_3 * 2, VAR_1))
        return 1;

    for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_3 && VAR_5 + 1 < VAR_1; VAR_4++, VAR_5 += 2) {
        FUNC_2(VAR_6, "%02x", VAR_2[VAR_4]);
        if (!FUNC_0(VAR_6[0], VAR_0[VAR_5])
                || !FUNC_0(VAR_6[1], VAR_0[VAR_5 + 1]))
            return 1;
    }

    return 0;
}
