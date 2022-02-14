
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; char* end; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef int LONGLONG ;
typedef int LONG ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(parser_ctx_t *VAR_7, void **VAR_8)
{
    BOOL VAR_9 = VAR_3;
    LONGLONG VAR_10 = 0, VAR_11;
    int VAR_12 = 0;
    double VAR_13;

    if(*VAR_7->ptr == '0' && !('0' <= VAR_7->ptr[1] && VAR_7->ptr[1] <= '9') && VAR_7->ptr[1] != '.')
        return *VAR_7->ptr++;

    while(VAR_7->ptr < VAR_7->end && FUNC_1(*VAR_7->ptr)) {
        VAR_11 = VAR_10*10 + *(VAR_7->ptr++) - '0';
        if(VAR_10>VAR_2/10 || VAR_11<0) {
            VAR_12++;
            break;
        }
        else
            VAR_10 = VAR_11;
    }
    while(VAR_7->ptr < VAR_7->end && FUNC_1(*VAR_7->ptr)) {
        VAR_12++;
        VAR_7->ptr++;
    }

    if(*VAR_7->ptr == '.') {
        VAR_9 = VAR_0;
        VAR_7->ptr++;

        while(VAR_7->ptr < VAR_7->end && FUNC_1(*VAR_7->ptr)) {
            VAR_11 = VAR_10*10 + *(VAR_7->ptr++) - '0';
            if(VAR_10>VAR_2/10 || VAR_11<0)
                break;

            VAR_10 = VAR_11;
            VAR_12--;
        }
        while(VAR_7->ptr < VAR_7->end && FUNC_1(*VAR_7->ptr))
            VAR_7->ptr++;
    }

    if(*VAR_7->ptr == 'e' || *VAR_7->ptr == 'E') {
        int VAR_14 = 0, VAR_15 = 1;

        if(*++VAR_7->ptr == '-') {
            VAR_7->ptr++;
            VAR_15 = -1;
        }

        if(!FUNC_1(*VAR_7->ptr)) {
            FUNC_0("Invalid numeric literal\n");
            return 0;
        }

        VAR_9 = VAR_0;

        do {
            VAR_14 = VAR_14*10 + *(VAR_7->ptr++) - '0';
            if(VAR_15 == -1 && -VAR_14+VAR_12 < -(VAR_1/100)) {

                while(FUNC_1(*VAR_7->ptr))
                    VAR_7->ptr++;
                *(double*)VAR_8 = 0;
                return VAR_4;
            }

            if(VAR_15*VAR_14 + VAR_12 > VAR_1/100) {
                FUNC_0("Invalid numeric literal\n");
                return 0;
            }
        } while(FUNC_1(*VAR_7->ptr));

        VAR_12 += VAR_15*VAR_14;
    }

    if(VAR_9 && (LONG)VAR_10 == VAR_10) {
        LONG VAR_16 = VAR_10;
        *(LONG*)VAR_8 = VAR_16;
        return (short)VAR_16 == VAR_16 ? VAR_6 : VAR_5;
    }

    VAR_13 = VAR_12>=0 ? VAR_10*FUNC_3(10, VAR_12) : VAR_10/FUNC_3(10, -VAR_12);
    if(FUNC_2(VAR_13)) {
        FUNC_0("Invalid numeric literal\n");
        return 0;
    }

    *(double*)VAR_8 = VAR_13;
    return VAR_4;
}
