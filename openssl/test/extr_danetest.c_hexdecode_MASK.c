
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int ossl_ssize_t ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char const) ;
 unsigned char* FUNC_2 (int) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static ossl_ssize_t FUNC_7(const char *VAR_0, void *VAR_1)
{
    unsigned char **VAR_2 = (unsigned char **)VAR_1;
    unsigned char *VAR_3;
    unsigned char *VAR_4;
    uint8_t VAR_5;
    int VAR_6 = 0;

    if (!FUNC_3(VAR_3 = FUNC_2(FUNC_6(VAR_0) / 2)))
        return -1;
    VAR_4 = VAR_3;

    for (VAR_5 = 0; *VAR_0; ++VAR_0) {
        int VAR_7;

        if (FUNC_5(FUNC_4(*VAR_0)))
            continue;
        VAR_7 = FUNC_1(*VAR_0);
        if (VAR_7 < 0) {
            FUNC_0(VAR_3);
            return 0;
        }
        VAR_5 |= (char)VAR_7;
        if ((VAR_6 ^= 1) == 0) {
            *VAR_4++ = VAR_5;
            VAR_5 = 0;
        } else {
            VAR_5 <<= 4;
        }
    }
    if (VAR_6 != 0) {
        FUNC_0(VAR_3);
        return 0;
    }

    return VAR_4 - (*VAR_2 = VAR_3);
}
