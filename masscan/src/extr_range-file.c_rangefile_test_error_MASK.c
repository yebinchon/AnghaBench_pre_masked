
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeParser {int dummy; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 struct RangeParser* FUNC_1 () ;
 int FUNC_2 (struct RangeParser*) ;
 int FUNC_3 (struct RangeParser*,unsigned long long*,unsigned long long*) ;
 int FUNC_4 (struct RangeParser*,unsigned char const*,size_t*,size_t,unsigned int*,unsigned int*) ;
 int VAR_0 ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_1, unsigned long long VAR_2, unsigned long long VAR_3, unsigned VAR_4)
{
    size_t VAR_5 = FUNC_5(VAR_1);
    size_t VAR_6 = 0;
    struct RangeParser *VAR_7;
    unsigned VAR_8 = 0xa3a3a3a3;
    unsigned VAR_9 = 0xa3a3a3a3;
    unsigned long long VAR_10;
    unsigned long long VAR_11;
    int VAR_12;
    bool VAR_13 = 0;


    VAR_7 = FUNC_1();
    VAR_12 = FUNC_4(VAR_7, (const unsigned char *)VAR_1, &VAR_6, VAR_5, &VAR_8, &VAR_9);
    if (!(VAR_12 < 0))
        goto fail;
    FUNC_3(VAR_7, &VAR_10, &VAR_11);
    FUNC_2(VAR_7);
    if (VAR_2 != VAR_10 || VAR_3 != VAR_11)
        goto fail;


    VAR_7 = FUNC_1();
    VAR_6 = 0;
    VAR_8 = 0xa3a3a3a3;
    VAR_9 = 0xa3a3a3a3;
    VAR_13 = 0;
    while (VAR_6 < VAR_5) {
        VAR_12 = FUNC_4(VAR_7, (const unsigned char *)VAR_1, &VAR_6, VAR_5, &VAR_8, &VAR_9);
        if (VAR_12 == 0 || VAR_12 > 1)
            continue;
        VAR_13 = 1;
        FUNC_3(VAR_7, &VAR_10, &VAR_11);
        if (VAR_2 != VAR_10 || VAR_3 != VAR_11)
            goto fail;
        else
            break;
    }
    FUNC_2(VAR_7);
    if (!VAR_13)
        goto fail;

    return 0;
fail:
    FUNC_0(VAR_0, "[-] rangefile test fail, line=%u\n", VAR_4);
    return 1;
}
