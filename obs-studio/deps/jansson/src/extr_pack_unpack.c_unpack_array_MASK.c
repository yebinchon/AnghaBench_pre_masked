
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ scanner_t ;
typedef int json_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,char*,...) ;
 int FUNC_5 (int ,long) ;
 long FUNC_6 (TYPE_1__*) ;
 long FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(scanner_t *VAR_2, json_t *VAR_3, va_list *VAR_4)
{
    size_t VAR_5 = 0;
    int VAR_6 = 0;

    if(VAR_3 && !FUNC_2(VAR_3)) {
        FUNC_4(VAR_2, "<validation>", "Expected array, got %s", FUNC_7(VAR_3));
        return -1;
    }
    FUNC_3(VAR_2);

    while(FUNC_6(VAR_2) != ']') {
        json_t *VAR_7;

        if(VAR_6 != 0) {
            FUNC_4(VAR_2, "<format>", "Expected ']' after '%c', got '%c'",
                      (VAR_6 == 1 ? '!' : '*'),
                      FUNC_6(VAR_2));
            return -1;
        }

        if(!FUNC_6(VAR_2)) {
            FUNC_4(VAR_2, "<format>", "Unexpected end of format string");
            return -1;
        }

        if(FUNC_6(VAR_2) == '!' || FUNC_6(VAR_2) == '*') {
            VAR_6 = (FUNC_6(VAR_2) == '!' ? 1 : -1);
            FUNC_3(VAR_2);
            continue;
        }

        if(!FUNC_5(VAR_1, FUNC_6(VAR_2))) {
            FUNC_4(VAR_2, "<format>", "Unexpected format character '%c'",
                      FUNC_6(VAR_2));
            return -1;
        }

        if(!VAR_3) {

            VAR_7 = ((void*)0);
        }
        else {
            VAR_7 = FUNC_0(VAR_3, VAR_5);
            if(!VAR_7) {
                FUNC_4(VAR_2, "<validation>", "Array index %lu out of range",
                          (unsigned long)VAR_5);
                return -1;
            }
        }

        if(FUNC_8(VAR_2, VAR_7, VAR_4))
            return -1;

        FUNC_3(VAR_2);
        VAR_5++;
    }

    if(VAR_6 == 0 && (VAR_2->flags & VAR_0))
        VAR_6 = 1;

    if(VAR_3 && VAR_6 == 1 && VAR_5 != FUNC_1(VAR_3)) {
        long VAR_8 = (long)FUNC_1(VAR_3) - (long)VAR_5;
        FUNC_4(VAR_2, "<validation>", "%li array item(s) left unpacked", VAR_8);
        return -1;
    }

    return 0;
}
