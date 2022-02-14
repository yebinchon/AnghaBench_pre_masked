
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char,char) ;
 scalar_t__ FUNC_1 (char,char) ;
 scalar_t__ FUNC_2 (int ,char) ;
 scalar_t__ FUNC_3 (char,char) ;
 scalar_t__ FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (long,long) ;
 scalar_t__ FUNC_9 (long,long) ;
 scalar_t__ FUNC_10 (long,long) ;
 scalar_t__ FUNC_11 (char*,int,char*,int) ;
 scalar_t__ FUNC_12 (int ,int,char*,int) ;
 scalar_t__ FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (size_t,int) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 scalar_t__ FUNC_18 (int ,char*) ;
 scalar_t__ FUNC_19 (unsigned char,int) ;
 scalar_t__ FUNC_20 (unsigned long,int) ;

__attribute__((used)) static int FUNC_21(void)
{
    int VAR_0 = 4;
    long VAR_1 = -9000;
    char VAR_2 = 'd';
    unsigned char VAR_3 = 22;
    unsigned long VAR_4 = 500;
    size_t VAR_5 = 1234;
    char VAR_6[4] = { 0 }, *VAR_7 = VAR_6;


    return FUNC_4(VAR_0++, 4)
           && FUNC_4(VAR_0, 5)
           && FUNC_5(++VAR_0, 5)
           && FUNC_6(5, VAR_0++)
           && FUNC_7(--VAR_0, 5)
           && FUNC_4(12, VAR_0 *= 2)

           && FUNC_8(VAR_1--, -9000L)
           && FUNC_8(++VAR_1, -9000L)
           && FUNC_10(-9000L, VAR_1 /= 2)
           && FUNC_9(--VAR_1, -4500L)

           && FUNC_0(++VAR_2, 'e')
           && FUNC_0('e', VAR_2--)
           && FUNC_3('d', --VAR_2)
           && FUNC_1('b', --VAR_2)
           && FUNC_2(VAR_2++, 'c')

           && FUNC_19(22, VAR_3++)
           && FUNC_19(VAR_3 /= 2, 11)
           && FUNC_20(VAR_4 ^= 1, 501)
           && FUNC_20(502, VAR_4 ^= 3)
           && FUNC_20(VAR_4 = VAR_4 * 3 - 6, 1500)

           && FUNC_16((--VAR_0, VAR_5++), 1234)
           && FUNC_16(VAR_5, 1235)
           && FUNC_4(11, VAR_0)

           && FUNC_14(VAR_7++, VAR_6)
           && FUNC_14(VAR_6 + 2, ++VAR_7)
           && FUNC_14(VAR_6, VAR_7 -= 2)
           && FUNC_13(++VAR_7)
           && FUNC_14(VAR_7, VAR_6 + 1)
           && FUNC_15(VAR_7 = ((void*)0))

           && FUNC_17(VAR_7 = &("123456"[1]), "23456")
           && FUNC_17("3456", ++VAR_7)
           && FUNC_18(VAR_7++, "456")

           && FUNC_11(--VAR_7, sizeof("3456"), "3456", sizeof("3456"))
           && FUNC_12(VAR_7++, sizeof("456"), "456", sizeof("456"))
           && FUNC_11(VAR_7--, sizeof("456"), "456", sizeof("456"));
}
