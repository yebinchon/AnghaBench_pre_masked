
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeParser {int dummy; } ;


 struct RangeParser* FUNC_0 () ;
 int FUNC_1 (struct RangeParser*) ;
 int FUNC_2 (struct RangeParser*,unsigned char const*,size_t*,size_t,unsigned int*,unsigned int*) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    size_t VAR_3 = FUNC_3(VAR_0);
    size_t VAR_4 = 0;
    struct RangeParser *VAR_5;
    unsigned VAR_6 = 0xa3a3a3a3;
    unsigned VAR_7 = 0xa3a3a3a3;
    int VAR_8;
    bool VAR_9 = 0;


    VAR_5 = FUNC_0();
    VAR_8 = FUNC_2(VAR_5, (const unsigned char *)VAR_0, &VAR_4, VAR_3, &VAR_6, &VAR_7);
    if (VAR_8 != 1)
        return 1;
    if (VAR_1 != VAR_6 || VAR_2 != VAR_7)
        return 1;
    FUNC_1(VAR_5);


    VAR_5 = FUNC_0();
    VAR_4 = 0;
    VAR_6 = 0xa3a3a3a3;
    VAR_7 = 0xa3a3a3a3;
    VAR_9 = 0;
    while (VAR_4 < VAR_3) {
        VAR_8 = FUNC_2(VAR_5, (const unsigned char *)VAR_0, &VAR_4, VAR_3, &VAR_6, &VAR_7);
        if (VAR_8 == 0)
            continue;
        if (VAR_8 < 0)
            return 1;
        VAR_9 = 1;
        if (VAR_1 != VAR_6 || VAR_2 != VAR_7)
            return 1;
    }
    FUNC_1(VAR_5);
    if (!VAR_9)
        return 1;

    return 0;
}
