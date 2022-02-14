
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;
 int VAR_0 ;
 int FUNC_6 (char const) ;

__attribute__((used)) static uint64_t
FUNC_7(const char *VAR_1)
{
    uint64_t VAR_2 = 0;

    while (FUNC_3(VAR_1[0]&0xFF)) {
        VAR_2 = VAR_2*10 + (VAR_1[0] - '0');
        VAR_1++;
    }
    while (FUNC_4(VAR_1[0]) || FUNC_5(VAR_1[0]))
        VAR_1++;

    if (FUNC_2(VAR_1[0]) && VAR_2 == 0)
        VAR_2 = 1;

    if (VAR_1[0] == '\0')
        return VAR_2;

    switch (FUNC_6(VAR_1[0])) {
    case 'k':
        VAR_2 *= 1024ULL;
        break;
    case 'm':
        VAR_2 *= 1024ULL * 1024ULL;
        break;
    case 'g':
        VAR_2 *= 1024ULL * 1024ULL * 1024ULL;
        break;
    case 't':
        VAR_2 *= 1024ULL * 1024ULL * 1024ULL * 1024ULL;
        break;
    case 'p':
        VAR_2 *= 1024ULL * 1024ULL * 1024ULL * 1024ULL * 1024ULL;
        break;
    case 'e':
        VAR_2 *= 1024ULL * 1024ULL * 1024ULL * 1024ULL * 1024ULL * 1024ULL;
        break;
    default:
        FUNC_1(VAR_0, "--rotate-size: unknown character\n");
        FUNC_0(1);
    }
    return VAR_2;
}
