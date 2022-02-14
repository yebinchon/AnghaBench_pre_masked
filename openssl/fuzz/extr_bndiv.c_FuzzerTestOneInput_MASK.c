
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,size_t,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 () ;
 size_t VAR_0 ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int) ;
 int FUNC_12 (char) ;
 int FUNC_13 (char*) ;
 int VAR_7 ;

int FUNC_14(const uint8_t *VAR_8, size_t VAR_9)
{
    int VAR_10 = 0;
    size_t VAR_11 = 0, VAR_12 = 0;

    int VAR_13 = 0, VAR_14 = 0;


    if (VAR_9 > VAR_0)
        VAR_9 = VAR_0;




    if (VAR_9 > 0) {
        --VAR_9;




        VAR_11 = ((VAR_8[0] & 0x3f) * VAR_9) / 0x3f;
        VAR_13 = VAR_8[0] & 0x40;
        VAR_14 = VAR_8[0] & 0x80;
        ++VAR_8;
        VAR_12 = VAR_9 - VAR_11;
    }
    FUNC_10(FUNC_1(VAR_8, VAR_11, VAR_1) == VAR_1);
    FUNC_8(VAR_1, VAR_13);
    FUNC_10(FUNC_1(VAR_8 + VAR_11, VAR_12, VAR_2) == VAR_2);
    FUNC_8(VAR_2, VAR_14);


    if (FUNC_5(VAR_2)) {
        VAR_10 = 1;
        goto done;
    }

    FUNC_10(FUNC_3(VAR_3, VAR_4, VAR_1, VAR_2, VAR_6));
    if (FUNC_5(VAR_1))
        VAR_10 = FUNC_5(VAR_3) && FUNC_5(VAR_4);
    else if (FUNC_4(VAR_1))
        VAR_10 = (FUNC_4(VAR_3) != FUNC_4(VAR_2) || FUNC_5(VAR_3))
            && (FUNC_4(VAR_4) || FUNC_5(VAR_4));
    else
        VAR_10 = (FUNC_4(VAR_3) == FUNC_4(VAR_2) || FUNC_5(VAR_3))
            && (!FUNC_4(VAR_4) || FUNC_5(VAR_4));
    FUNC_10(FUNC_6(VAR_5, VAR_3, VAR_2, VAR_6));
    FUNC_10(FUNC_0(VAR_5, VAR_5, VAR_4));

    VAR_10 = VAR_10 && FUNC_2(VAR_5, VAR_1) == 0;
    if (!VAR_10) {
        FUNC_7(VAR_7, VAR_1);
        FUNC_12('\n');
        FUNC_7(VAR_7, VAR_2);
        FUNC_12('\n');
        FUNC_7(VAR_7, VAR_3);
        FUNC_12('\n');
        FUNC_7(VAR_7, VAR_4);
        FUNC_12('\n');
        FUNC_7(VAR_7, VAR_5);
        FUNC_12('\n');
        FUNC_11("%d %d %d %d %d %d %d\n", FUNC_4(VAR_1),
               FUNC_4(VAR_2),
               FUNC_4(VAR_3), FUNC_4(VAR_4), FUNC_5(VAR_4),
               FUNC_4(VAR_3) != FUNC_4(VAR_2)
               && (FUNC_4(VAR_4) || FUNC_5(VAR_4)),
               FUNC_2(VAR_5, VAR_1));
        FUNC_13("----\n");
    }

 done:
    FUNC_10(VAR_10);
    FUNC_9();

    return 0;
}
