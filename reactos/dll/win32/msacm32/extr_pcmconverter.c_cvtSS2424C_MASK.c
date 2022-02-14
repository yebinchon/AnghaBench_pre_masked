
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned char*,int ) ;

__attribute__((used)) static void FUNC_2(const DWORD VAR_0, const unsigned char *VAR_1, DWORD *VAR_2,
                       const DWORD VAR_3, unsigned char *VAR_4, DWORD *VAR_5)
{
    DWORD VAR_6 = VAR_0 / 2;
    DWORD VAR_7 = *VAR_2, VAR_8 = *VAR_5;
    *VAR_5 = 0;
    for (*VAR_2 = 0; *VAR_2 < VAR_7; (*VAR_2)++) {
        VAR_6 += VAR_3;
        while (VAR_6 > VAR_0) {
            if (*VAR_5 == VAR_8)
                return;
            (*VAR_5)++;
            VAR_6 -= VAR_0;

            FUNC_1(VAR_4, FUNC_0(VAR_1)); VAR_4 += 3;
            FUNC_1(VAR_4, FUNC_0(VAR_1 + 3)); VAR_4 += 3;
        }
        VAR_1 += 6;
    }
}
