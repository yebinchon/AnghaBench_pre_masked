
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {unsigned long long hi; unsigned long long lo; int member_1; int member_0; } ;
struct TYPE_8__ {int member_1; int member_0; } ;
struct TYPE_7__ {unsigned long long member_0; unsigned long long member_1; } ;
typedef struct Range6 {TYPE_3__ end; TYPE_3__ begin; TYPE_2__ member_1; TYPE_1__ member_0; } const Range6 ;
typedef TYPE_3__ ipv6address ;


 scalar_t__ FUNC_0 (TYPE_3__,TYPE_3__) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char const*,unsigned int*,unsigned int,TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char const*) ;

struct Range6
FUNC_6(const char *VAR_1, unsigned *VAR_2, unsigned VAR_3)
{
    unsigned VAR_4;
    struct Range6 VAR_5;
    static const struct Range6 VAR_6 = {{~0ULL,~0ULL}, {0,0}};
    int VAR_7;

    if (VAR_1 == ((void*)0))
        return VAR_6;

    if (VAR_2 == ((void*)0)) {
         VAR_2 = &VAR_4;
         VAR_4 = 0;
         VAR_3 = (unsigned)FUNC_5(VAR_1);
    } else
        VAR_4 = *VAR_2;



    while (VAR_4 < VAR_3 && FUNC_3(VAR_1[VAR_4]&0xFF))
        VAR_4++;


    VAR_7 = FUNC_4(VAR_1, &VAR_4, VAR_3, &VAR_5.begin);
    if (VAR_7) {
        return VAR_6;
    }
    VAR_5.end = VAR_5.begin;


    while (VAR_4 < VAR_3 && FUNC_3(VAR_1[VAR_4]&0xFF))
        VAR_4++;


    if (VAR_4 >= VAR_3)
        goto end;




    if (VAR_1[VAR_4] == '/') {
        uint64_t VAR_8 = 0;
        ipv6address VAR_9 = {0, 0};
        unsigned VAR_10 = 0;


        VAR_4++;

        if (!FUNC_2(VAR_1[VAR_4]&0xFF)) {
            return VAR_6;
        }


        while (VAR_4<VAR_3 && VAR_1[VAR_4] == '0')
            VAR_4++;


        while (VAR_4<VAR_3 && FUNC_2(VAR_1[VAR_4]&0xFF)) {
            VAR_8 = VAR_8 * 10 + (VAR_1[VAR_4++] - '0');
            if (++VAR_10 > 3)
                return VAR_6;
        }
        if (VAR_8 > 128)
            return VAR_6;


        if (VAR_8 > 64)
            VAR_9.hi = ~0ULL;
        else if (VAR_8 == 0)
            VAR_9.hi = 0;
        else
            VAR_9.hi = ~0ULL << (64 - VAR_8);

        if (VAR_8 > 64)
            VAR_9.lo = ~0ULL << (128 - VAR_8);
        else
            VAR_9.lo = 0;



        VAR_5.begin.hi &= VAR_9.hi;
        VAR_5.begin.lo &= VAR_9.lo;



        VAR_5.end.hi = VAR_5.begin.hi | ~VAR_9.hi;
        VAR_5.end.lo = VAR_5.begin.lo | ~VAR_9.lo;
        goto end;
    }




    if (VAR_4<VAR_3 && VAR_1[VAR_4] == '-') {
        ipv6address VAR_11;

        VAR_4++;
        VAR_7 = FUNC_4(VAR_1, &VAR_4, VAR_3, &VAR_11);
        if (VAR_7)
            return VAR_6;
        if (FUNC_0(VAR_11, VAR_5.begin)) {
            ipv6address VAR_12 = VAR_5.begin;
            FUNC_1(VAR_0, "err: ending addr %4x:%4x:%4x:%4x:%4x:%4x:%4x:%4x cannot come before starting addr %4x:%4x:%4x:%4x:%4x:%4x:%4x:%4x\n",
                (unsigned)((VAR_11.hi>>48ULL) & 0xFFFF), (unsigned)((VAR_11.hi>>32ULL) & 0xFFFF),
                (unsigned)((VAR_11.hi>>16ULL) & 0xFFFF), (unsigned)((VAR_11.hi>> 0ULL) & 0xFFFF),
                (unsigned)((VAR_11.lo>>48ULL) & 0xFFFF), (unsigned)((VAR_11.lo>>32ULL) & 0xFFFF),
                (unsigned)((VAR_11.lo>>16ULL) & 0xFFFF), (unsigned)((VAR_11.lo>> 0ULL) & 0xFFFF),
                (unsigned)((VAR_12.hi>>48ULL) & 0xFFFF), (unsigned)((VAR_12.hi>>32ULL) & 0xFFFF),
                (unsigned)((VAR_12.hi>>16ULL) & 0xFFFF), (unsigned)((VAR_12.hi>> 0ULL) & 0xFFFF),
                (unsigned)((VAR_12.lo>>48ULL) & 0xFFFF), (unsigned)((VAR_12.lo>>32ULL) & 0xFFFF),
                (unsigned)((VAR_12.lo>>16ULL) & 0xFFFF), (unsigned)((VAR_12.lo>> 0ULL) & 0xFFFF)
                );
            VAR_5.begin.hi = ~0ULL;
            VAR_5.begin.lo = ~0ULL;
            VAR_5.end.hi = 0;
            VAR_5.end.lo = 0;
        } else
            VAR_5.end = VAR_11;


        if (VAR_5.end.hi - VAR_5.begin.hi > 2
            || (VAR_5.end.hi - VAR_5.begin.hi == 1 && VAR_5.end.lo >= VAR_5.begin.lo)) {
            ipv6address VAR_13 = VAR_5.begin;
            ipv6address VAR_14 = VAR_5.end;
            FUNC_1(VAR_0, "err: range %4x:%4x:%4x:%4x:%4x:%4x:%4x:%4x - %4x:%4x:%4x:%4x:%4x:%4x:%4x:%4x greater than 64-bits\n",
                (unsigned)((VAR_13>>48ULL) & 0xFFFF), (unsigned)((VAR_13>>32ULL) & 0xFFFF),
                (unsigned)((VAR_13>>16ULL) & 0xFFFF), (unsigned)((VAR_13>> 0ULL) & 0xFFFF),
                (unsigned)((VAR_13>>48ULL) & 0xFFFF), (unsigned)((VAR_13>>32ULL) & 0xFFFF),
                (unsigned)((VAR_13>>16ULL) & 0xFFFF), (unsigned)((VAR_13>> 0ULL) & 0xFFFF),
                (unsigned)((VAR_14>>48ULL) & 0xFFFF), (unsigned)((VAR_14>>32ULL) & 0xFFFF),
                (unsigned)((VAR_14>>16ULL) & 0xFFFF), (unsigned)((VAR_14>> 0ULL) & 0xFFFF),
                (unsigned)((VAR_14>>48ULL) & 0xFFFF), (unsigned)((VAR_14>>32ULL) & 0xFFFF),
                (unsigned)((VAR_14>>16ULL) & 0xFFFF), (unsigned)((VAR_14>> 0ULL) & 0xFFFF)
                );
            VAR_5.begin.hi = ~0ULL;
            VAR_5.begin.lo = ~0ULL;
            VAR_5.end.hi = 0;
            VAR_5.end.lo = 0;
        }
        goto end;
    }

end:
    *VAR_2 = VAR_4;
    return VAR_5;
}
