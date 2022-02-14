
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

int FUNC_1(const char *VAR_0)
{
    char VAR_1;

    goto inside;
    for (;;) {
        if (!VAR_1)
            return 1;
        if (VAR_1 == '/') {
        inside:
            VAR_1 = *VAR_0++;
            switch (VAR_1) {
            default:
                continue;
            case '/': case '\0':
                break;
            case '.':
                if (FUNC_0(VAR_0))
                    continue;
            }
            return 0;
        }
        VAR_1 = *VAR_0++;
    }
}
