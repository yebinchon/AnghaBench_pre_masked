
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int targets ;
struct RangeList {int count; TYPE_1__* list; int member_0; } ;
struct Range {int begin; int end; } ;
struct TYPE_2__ {int begin; int end; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct RangeList*,int ,int) ;
 struct Range FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct RangeList*,struct Range) ;
 int FUNC_7 (struct RangeList*,char*,unsigned int*,int ) ;
 int FUNC_8 (struct RangeList*) ;
 int FUNC_9 (struct RangeList*,struct Range) ;
 int FUNC_10 (struct RangeList*) ;
 scalar_t__ FUNC_11 () ;

int
FUNC_12(void)
{
    struct Range VAR_0;
    struct RangeList VAR_1[1] = {{0}};

    FUNC_2(FUNC_11() == 0);


    if (FUNC_3())
        return 1;

    FUNC_4(VAR_1, 0, sizeof(VAR_1[0]));




    VAR_0 = FUNC_5("0.0.0.0/0", 0, 0);
    FUNC_2(VAR_0.begin == 0 && VAR_0.end == 0xFFFFFFFF);

    VAR_0 = FUNC_5("0.0.0./0", 0, 0);
    FUNC_2(VAR_0.begin > VAR_0.end);

    VAR_0 = FUNC_5("75.748.86.91", 0, 0);
    FUNC_2(VAR_0.begin > VAR_0.end);

    VAR_0 = FUNC_5("23.75.345.200", 0, 0);
    FUNC_2(VAR_0.begin > VAR_0.end);

    VAR_0 = FUNC_5("192.1083.0.1", 0, 0);
    FUNC_2(VAR_0.begin > VAR_0.end);

    VAR_0 = FUNC_5("192.168.1.3", 0, 0);
    if (VAR_0.begin != 0xc0a80103 || VAR_0.end != 0xc0a80103) {
        FUNC_1(0, "r.begin = 0x%08x r.end = 0x%08x\n", VAR_0.begin, VAR_0.end);
        FUNC_1(0, "selftest: failed %s:%u\n", "/home/carl/AnghaBench/masscan/src/extr_ranges.c_ranges_selftest.c", 68);;
        return 1;
    }

    VAR_0 = FUNC_5("10.0.0.20-10.0.0.30", 0, 0);
    if (VAR_0.begin != 0x0A000000+20 || VAR_0.end != 0x0A000000+30) {
        FUNC_1(0, "r.begin = 0x%08x r.end = 0x%08x\n", VAR_0.begin, VAR_0.end);
        FUNC_1(0, "selftest: failed %s:%u\n", "/home/carl/AnghaBench/masscan/src/extr_ranges.c_ranges_selftest.c", 75);;
        return 1;
    }

    VAR_0 = FUNC_5("10.0.1.2/16", 0, 0);
    if (VAR_0.begin != 0x0A000000 || VAR_0.end != 0x0A00FFFF) {
        FUNC_1(0, "r.begin = 0x%08x r.end = 0x%08x\n", VAR_0.begin, VAR_0.end);
        FUNC_1(0, "selftest: failed %s:%u\n", "/home/carl/AnghaBench/masscan/src/extr_ranges.c_ranges_selftest.c", 82);;
        return 1;
    }


    FUNC_6(VAR_1, FUNC_5("10.0.0.0/24", 0, 0));
    FUNC_6(VAR_1, FUNC_5("10.0.1.10-10.0.1.19", 0, 0));
    FUNC_6(VAR_1, FUNC_5("10.0.1.20-10.0.1.30", 0, 0));
    FUNC_6(VAR_1, FUNC_5("10.0.0.0-10.0.1.12", 0, 0));
    FUNC_10(VAR_1);

    if (VAR_1->count != 1) {
        FUNC_1(0, "count = %u\n", VAR_1->count);
        FUNC_1(0, "selftest: failed %s:%u\n", "/home/carl/AnghaBench/masscan/src/extr_ranges.c_ranges_selftest.c", 95);;
        return 1;
    }
    if (VAR_1->list[0].begin != 0x0a000000 || VAR_1->list[0].end != 0x0a000100+30) {
        FUNC_1(0, "r.begin = 0x%08x r.end = 0x%08x\n", VAR_1->list[0].begin, VAR_1->list[0].end);
        FUNC_1(0, "selftest: failed %s:%u\n", "/home/carl/AnghaBench/masscan/src/extr_ranges.c_ranges_selftest.c", 100);;
        return 1;
    }

    FUNC_8(VAR_1);




    FUNC_4(VAR_1, 0, sizeof(VAR_1[0]));

    FUNC_6(VAR_1, FUNC_5("10.0.0.0/8", 0, 0));
    FUNC_10(VAR_1);


    FUNC_9(VAR_1, FUNC_5("9.255.255.255", 0, 0));
    FUNC_9(VAR_1, FUNC_5("11.0.0.0/16", 0, 0));
    FUNC_9(VAR_1, FUNC_5("192.168.0.0/16", 0, 0));
    FUNC_10(VAR_1);

    if (VAR_1->count != 1
        || VAR_1->list->begin != 0x0a000000
        || VAR_1->list->end != 0x0aFFFFFF) {
        FUNC_1(0, "selftest: failed %s:%u\n", "/home/carl/AnghaBench/masscan/src/extr_ranges.c_ranges_selftest.c", 123);;
        return 1;
    }


    FUNC_9(VAR_1, FUNC_5("1.0.0.0-10.0.0.0", 0, 0));
    FUNC_9(VAR_1, FUNC_5("10.255.255.255-11.0.0.0", 0, 0));
    FUNC_10(VAR_1);
    if (VAR_1->count != 1
        || VAR_1->list->begin != 0x0a000001
        || VAR_1->list->end != 0x0aFFFFFE) {
        FUNC_1(0, "selftest: failed %s:%u\n", "/home/carl/AnghaBench/masscan/src/extr_ranges.c_ranges_selftest.c", 134);;
        return 1;
    }



    FUNC_9(VAR_1, FUNC_5("10.10.0.0/16", 0, 0));
    FUNC_9(VAR_1, FUNC_5("10.20.0.0/16", 0, 0));
    FUNC_10(VAR_1);
    if (VAR_1->count != 3) {
        FUNC_1(0, "selftest: failed %s:%u\n", "/home/carl/AnghaBench/masscan/src/extr_ranges.c_ranges_selftest.c", 144);;
        return 1;
    }

    FUNC_9(VAR_1, FUNC_5("10.12.0.0/16", 0, 0));
    FUNC_10(VAR_1);
    if (VAR_1->count != 4) {
        FUNC_1(0, "selftest: failed %s:%u\n", "/home/carl/AnghaBench/masscan/src/extr_ranges.c_ranges_selftest.c", 151);;
        return 1;
    }

    FUNC_9(VAR_1, FUNC_5("10.10.10.10-10.12.12.12", 0, 0));
    FUNC_10(VAR_1);
    if (VAR_1->count != 3) {
        FUNC_1(0, "selftest: failed %s:%u\n", "/home/carl/AnghaBench/masscan/src/extr_ranges.c_ranges_selftest.c", 158);;
        return 1;
    }
    FUNC_8(VAR_1);


    {
        unsigned VAR_2 = 0;
        FUNC_4(VAR_1, 0, sizeof(VAR_1[0]));

        FUNC_7(VAR_1, "80,1000-2000,1234,4444", &VAR_2, 0);
        FUNC_10(VAR_1);
        if (VAR_1->count != 3 || VAR_2) {
            FUNC_1(0, "selftest: failed %s:%u\n", "/home/carl/AnghaBench/masscan/src/extr_ranges.c_ranges_selftest.c", 171);;
            return 1;
        }

        if (VAR_1->list[0].begin != 80 || VAR_1->list[0].end != 80 ||
            VAR_1->list[1].begin != 1000 || VAR_1->list[1].end != 2000 ||
            VAR_1->list[2].begin != 4444 || VAR_1->list[2].end != 4444) {
            FUNC_1(0, "selftest: failed %s:%u\n", "/home/carl/AnghaBench/masscan/src/extr_ranges.c_ranges_selftest.c", 178);;
            return 1;
        }
    }

    return 0;
}
