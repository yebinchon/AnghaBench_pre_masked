
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int,...) ;

void
FUNC_3()
{
    char VAR_0[5000];
    int VAR_1;

    FUNC_2(VAR_0, "%d", 1234567);
    FUNC_1(VAR_0, "1234567");

    FUNC_2(VAR_0, "%d", -1234567);
    FUNC_1(VAR_0, "-1234567");

    FUNC_2(VAR_0, "%hd", 1234567);
    FUNC_1(VAR_0, "-10617");

    FUNC_2(VAR_0, "%08d", 1234);
    FUNC_1(VAR_0, "00001234");

    FUNC_2(VAR_0, "%-08d", 1234);
    FUNC_1(VAR_0, "1234    ");

    FUNC_2(VAR_0, "%+08d", 1234);
    FUNC_1(VAR_0, "+0001234");

    FUNC_2(VAR_0, "%+3d", 1234);
    FUNC_1(VAR_0, "+1234");

    FUNC_2(VAR_0, "%3.3d", 1234);
    FUNC_1(VAR_0, "1234");

    FUNC_2(VAR_0, "%3.6d", 1234);
    FUNC_1(VAR_0, "001234");

    FUNC_2(VAR_0, "%8d", -1234);
    FUNC_1(VAR_0, "   -1234");

    FUNC_2(VAR_0, "%08d", -1234);
    FUNC_1(VAR_0, "-0001234");

    FUNC_2(VAR_0, "%ld", -1234);
    FUNC_1(VAR_0, "-1234");

    FUNC_2(VAR_0, "%wd", -1234);
    FUNC_1(VAR_0, "-1234");

    FUNC_2(VAR_0, "%ld", -5149074030855LL);
    FUNC_1(VAR_0, "591757049");

    FUNC_2(VAR_0, "%lld", -5149074030855LL);
    FUNC_1(VAR_0, "591757049");

    FUNC_2(VAR_0, "%I64d", -5149074030855LL);
    FUNC_1(VAR_0, "-5149074030855");

    FUNC_2(VAR_0, "%Ld", -5149074030855LL);
    FUNC_1(VAR_0, "591757049");

    FUNC_2(VAR_0, "%lhwI64d", -5149074030855LL);
    FUNC_1(VAR_0, "-5149074030855");

    FUNC_2(VAR_0, "%I64hlwd", -5149074030855LL);
    FUNC_1(VAR_0, "-5149074030855");

    FUNC_2(VAR_0, "%hlwd", -5149074030855LL);
    FUNC_1(VAR_0, "32505");

    FUNC_2(VAR_0, "%Ild", -5149074030855LL);
    FUNC_1(VAR_0, "Ild");

    FUNC_2(VAR_0, "%hd", -5149074030855LL);
    FUNC_1(VAR_0, "32505");

    FUNC_2(VAR_0, "%hhd", -5149074030855LL);
    FUNC_1(VAR_0, "32505");

    FUNC_2(VAR_0, "%hI32hd", -5149074030855LL);
    FUNC_1(VAR_0, "32505");

    FUNC_2(VAR_0, "%wd", -5149074030855LL);
    FUNC_1(VAR_0, "591757049");

    VAR_1 = FUNC_2(VAR_0, " %d.%d", 3, 0);
    FUNC_0(VAR_1, 4);

}
