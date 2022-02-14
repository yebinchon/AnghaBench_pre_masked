
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct RangeParser {int dummy; } ;
struct TYPE_4__ {int member_0; int member_1; int hi; int lo; } ;
typedef TYPE_1__ ipv6address ;


 struct RangeParser* FUNC_0 () ;
 int FUNC_1 (struct RangeParser*) ;
 int FUNC_2 (struct RangeParser*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (struct RangeParser*,unsigned char const*,size_t*,size_t,unsigned int*,unsigned int*) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0,
                       uint64_t VAR_1,
                       uint64_t VAR_2,
                       uint64_t VAR_3,
                       uint64_t VAR_4)
{
    size_t VAR_5 = FUNC_4(VAR_0);
    size_t VAR_6 = 0;
    struct RangeParser *VAR_7;
    ipv6address VAR_8 = {1,2};
    ipv6address VAR_9 = {1,2};
    unsigned VAR_10, VAR_11;
    int VAR_12;
    bool VAR_13 = 0;


    VAR_7 = FUNC_0();
    VAR_12 = FUNC_3(VAR_7, (const unsigned char *)VAR_0, &VAR_6, VAR_5, &VAR_10, &VAR_11);
    if (VAR_12 != 2)
        return 1;
    FUNC_2(VAR_7, &VAR_8, &VAR_9);
    if (VAR_8.hi != VAR_1 || VAR_8.lo != VAR_2)
        return 1;
    if (VAR_9.hi != VAR_3 || VAR_9.lo != VAR_4)
        return 1;
    FUNC_1(VAR_7);


    VAR_7 = FUNC_0();
    VAR_6 = 0;
    VAR_8.hi = 1;
    VAR_8.lo = 2;
    VAR_9.hi = 1;
    VAR_9.lo = 2;
    VAR_13 = 0;
    while (VAR_6 < VAR_5) {
        VAR_12 = FUNC_3(VAR_7, (const unsigned char *)VAR_0, &VAR_6, VAR_5, &VAR_10, &VAR_11);
        if (VAR_12 == 0)
            continue;
        if (VAR_12 != 2)
            return 1;
        VAR_13 = 1;
        FUNC_2(VAR_7, &VAR_8, &VAR_9);
        if (VAR_8.hi != VAR_1 || VAR_8.lo != VAR_2)
            return 1;
        if (VAR_9.hi != VAR_3 || VAR_9.lo != VAR_4)
            return 1;
    }
    FUNC_1(VAR_7);
    if (!VAR_13)
        return 1;

    return 0;
}
