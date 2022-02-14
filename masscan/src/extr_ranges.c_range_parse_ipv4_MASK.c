
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef struct Range {int member_0; unsigned int begin; unsigned int end; int member_1; } const Range ;


 int FUNC_0 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned int,int,int,int,int) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char const*,unsigned int*,unsigned int,unsigned int*) ;
 scalar_t__ FUNC_4 (char const*) ;

struct Range
FUNC_5(const char *VAR_0, unsigned *VAR_1, unsigned VAR_2)
{
    unsigned VAR_3;
    struct Range VAR_4;
    static const struct Range VAR_5 = {0xFFFFFFFF, 0};
    int VAR_6;

    if (VAR_0 == ((void*)0))
        return VAR_5;

    if (VAR_1 == ((void*)0)) {
         VAR_1 = &VAR_3;
         VAR_3 = 0;
         VAR_2 = (unsigned)FUNC_4(VAR_0);
    } else
        VAR_3 = *VAR_1;



    while (VAR_3 < VAR_2 && FUNC_2(VAR_0[VAR_3]&0xFF))
        VAR_3++;


    VAR_6 = FUNC_3(VAR_0, &VAR_3, VAR_2, &VAR_4.begin);
    if (VAR_6) {
        return VAR_5;
    }
    VAR_4.end = VAR_4.begin;


    while (VAR_3 < VAR_2 && FUNC_2(VAR_0[VAR_3]&0xFF))
        VAR_3++;


    if (VAR_3 >= VAR_2)
        goto end;




    if (VAR_0[VAR_3] == '/') {
        uint64_t VAR_7 = 0;
        uint64_t VAR_8 = 0;
        unsigned VAR_9 = 0;


        VAR_3++;

        if (!FUNC_1(VAR_0[VAR_3]&0xFF)) {
            return VAR_5;
        }


        while (VAR_3<VAR_2 && VAR_0[VAR_3] == '0')
            VAR_3++;


        while (VAR_3<VAR_2 && FUNC_1(VAR_0[VAR_3]&0xFF)) {
            VAR_7 = VAR_7 * 10 + (VAR_0[VAR_3++] - '0');
            if (++VAR_9 > 2)
                return VAR_5;
        }
        if (VAR_7 > 32)
            return VAR_5;


        VAR_8 = 0xFFFFFFFF00000000ULL >> VAR_7;



        VAR_4.begin &= VAR_8;



        VAR_4.end = VAR_4.begin | (unsigned)~VAR_8;
        goto end;
    }




    if (VAR_3<VAR_2 && VAR_0[VAR_3] == '-') {
        unsigned VAR_10;

        VAR_3++;
        VAR_6 = FUNC_3(VAR_0, &VAR_3, VAR_2, &VAR_10);
        if (VAR_6)
            return VAR_5;
        if (VAR_10 < VAR_4.begin) {
            VAR_4.begin = 0xFFFFFFFF;
            VAR_4.end = 0x00000000;
            FUNC_0(0, "err: ending addr %u.%u.%u.%u cannot come before starting addr %u.%u.%u.%u\n",
                ((VAR_10>>24)&0xFF), ((VAR_10>>16)&0xFF), ((VAR_10>>8)&0xFF), ((VAR_10>>0)&0xFF),
                ((VAR_4.begin>>24)&0xFF), ((VAR_4.begin>>16)&0xFF), ((VAR_4.begin>>8)&0xFF), ((VAR_4.begin>>0)&0xFF)
                );
        } else
            VAR_4.end = VAR_10;
        goto end;
    }

end:
    *VAR_1 = VAR_3;
    return VAR_4;
}
