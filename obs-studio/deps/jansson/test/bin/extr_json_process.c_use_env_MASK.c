
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_4__ {int line; int column; int position; char* text; } ;
typedef TYPE_1__ json_error_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int) ;
 size_t VAR_2 ;
 size_t FUNC_1 (int) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int,...) ;
 size_t FUNC_5 (char*,int,size_t,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,size_t) ;
 int * FUNC_11 (int ,int ,TYPE_1__*) ;
 int * FUNC_12 (int ,int ,TYPE_1__*) ;
 int FUNC_13 (int) ;
 char* FUNC_14 (char*,size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (char*) ;

int FUNC_16()
{
    int VAR_8, VAR_9;
    size_t VAR_10 = 0;
    json_t *VAR_11;
    json_error_t VAR_12;
    VAR_8 = FUNC_8("JSON_INDENT");
    if(VAR_8 < 0 || VAR_8 > 31) {
        FUNC_4(VAR_5, "invalid value for JSON_INDENT: %d\n", VAR_8);
        return 2;
    }
    if(VAR_8 > 0)
        VAR_10 |= FUNC_0(VAR_8);

    if(FUNC_8("JSON_COMPACT") > 0)
        VAR_10 |= VAR_0;

    if(FUNC_8("JSON_ENSURE_ASCII"))
        VAR_10 |= VAR_1;

    if(FUNC_8("JSON_PRESERVE_ORDER"))
        VAR_10 |= VAR_2;

    if(FUNC_8("JSON_SORT_KEYS"))
        VAR_10 |= VAR_3;

    VAR_9 = FUNC_8("JSON_REAL_PRECISION");
    if(VAR_9 < 0 || VAR_9 > 31) {
        FUNC_4(VAR_5, "invalid value for JSON_REAL_PRECISION: %d\n",
                VAR_9);
        return 2;
    }

    if(FUNC_7("HASHSEED"))
        FUNC_13(FUNC_8("HASHSEED"));

    if(VAR_9 > 0)
        VAR_10 |= FUNC_1(VAR_9);

    if(FUNC_8("STRIP")) {

        size_t VAR_13 = 0, VAR_14 = 0;
        char *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);

        while(1) {
            size_t VAR_17;

            VAR_13 = (VAR_13 == 0 ? 128 : VAR_13 * 2);
            VAR_16 = FUNC_14(VAR_15, VAR_13);
            if(!VAR_16) {
                FUNC_4(VAR_5, "Unable to allocate %d bytes\n", (int)VAR_13);
                FUNC_6(VAR_15);
                return 1;
            }
            VAR_15 = VAR_16;

            VAR_17 = FUNC_5(VAR_15 + VAR_14, 1, VAR_13 - VAR_14, VAR_6);
            if(VAR_17 < VAR_13 - VAR_14) {
                VAR_15[VAR_14 + VAR_17] = '\0';
                break;
            }
            VAR_14 += VAR_17;
        }

        VAR_11 = FUNC_12(FUNC_15(VAR_15), 0, &VAR_12);
        FUNC_6(VAR_15);
    }
    else
        VAR_11 = FUNC_11(VAR_6, 0, &VAR_12);

    if(!VAR_11) {
        FUNC_4(VAR_5, "%d %d %d\n%s\n",
            VAR_12.line, VAR_12.column,
            VAR_12.position, VAR_12.text);
        return 1;
    }

    FUNC_10(VAR_11, VAR_7, VAR_10);
    FUNC_9(VAR_11);

    return 0;
}
