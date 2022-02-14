
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vstr_t ;
typedef char mp_uint_t ;
typedef int mp_print_t ;
typedef int mp_obj_t ;
typedef int mp_lexer_t ;
typedef int mp_int_t ;
typedef char byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char const**,int,int,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char const*,int,int*) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int,int) ;
 int FUNC_11 (int *,char const*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (char const) ;
 int FUNC_14 (int *,int,int *) ;

mp_obj_t FUNC_15(const char *restrict VAR_5, size_t VAR_6, int VAR_7, mp_lexer_t *VAR_8) {
    const byte *restrict VAR_9 = (const byte *)VAR_5;
    const byte *restrict VAR_10 = VAR_9 + VAR_6;
    bool VAR_11 = 0;
    mp_obj_t VAR_12;


    if ((VAR_7 != 0 && VAR_7 < 2) || VAR_7 > 36) {

        FUNC_9("int() arg 2 must be >= 2 and <= 36");
    }


    for (; VAR_9 < VAR_10 && FUNC_13(*VAR_9); VAR_9++) {
    }


    if (VAR_9 < VAR_10) {
        if (*VAR_9 == '+') {
            VAR_9++;
        } else if (*VAR_9 == '-') {
            VAR_9++;
            VAR_11 = 1;
        }
    }


    VAR_9 += FUNC_7((const char*)VAR_9, VAR_10 - VAR_9, &VAR_7);


    mp_int_t VAR_13 = 0;
    const byte *restrict VAR_14 = VAR_9;
    for (; VAR_9 < VAR_10; VAR_9++) {

        mp_uint_t VAR_15 = *VAR_9;
        if ('0' <= VAR_15 && VAR_15 <= '9') {
            VAR_15 -= '0';
        } else if (VAR_15 == '_') {
            continue;
        } else {
            VAR_15 |= 0x20;
            if ('a' <= VAR_15 && VAR_15 <= 'z') {
                VAR_15 -= 'a' - 10;
            } else {

                break;
            }
        }
        if (VAR_15 >= (mp_uint_t)VAR_7) {
            break;
        }


        if (FUNC_10(VAR_13, VAR_7)) {
            goto overflow;
        }
        VAR_13 = VAR_13 * VAR_7 + VAR_15;
        if (!FUNC_1(VAR_13)) {
            goto overflow;
        }
    }


    if (VAR_11) {
        VAR_13 = -VAR_13;
    }


    VAR_12 = FUNC_0(VAR_13);

have_ret_val:

    if (VAR_9 == VAR_14) {
        goto value_error;
    }


    for (; VAR_9 < VAR_10 && FUNC_13(*VAR_9); VAR_9++) {
    }


    if (VAR_9 != VAR_10) {
        goto value_error;
    }


    return VAR_12;

overflow:

    {
        const char *VAR_16 = (const char*)VAR_14;
        VAR_12 = FUNC_5(&VAR_16, VAR_10 - VAR_14, VAR_11, VAR_7);
        VAR_9 = (const byte*)VAR_16;
        goto have_ret_val;
    }

value_error:
    if (VAR_0 == VAR_2) {
        mp_obj_t VAR_17 = FUNC_3(&VAR_3,
            "invalid syntax for integer");
        FUNC_12(VAR_17, VAR_8);
    } else if (VAR_0 == VAR_1) {
        mp_obj_t VAR_18 = FUNC_4(&VAR_3,
            "invalid syntax for integer with base %d", VAR_7);
        FUNC_12(VAR_18, VAR_8);
    } else {
        vstr_t VAR_19;
        mp_print_t VAR_20;
        FUNC_14(&VAR_19, 50, &VAR_20);
        FUNC_8(&VAR_20, "invalid syntax for integer with base %d: ", VAR_7);
        FUNC_11(&VAR_20, VAR_14, VAR_10 - VAR_14, 1);
        mp_obj_t VAR_21 = FUNC_2(&VAR_3,
            FUNC_6(&VAR_4, &VAR_19));
        FUNC_12(VAR_21, VAR_8);
    }
}
