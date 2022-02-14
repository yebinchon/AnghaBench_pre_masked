
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ calculated_number ;
struct TYPE_5__ {scalar_t__ min; scalar_t__ max; } ;
typedef int RRDR_OPTIONS ;
typedef TYPE_1__ RRDR ;
typedef int BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,long,int,int*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(RRDR *VAR_2, BUFFER *VAR_3, RRDR_OPTIONS VAR_4, const char *VAR_5, const char *VAR_6, const char *VAR_7) {

    long VAR_8;

    FUNC_1(VAR_3, VAR_5);
    long VAR_9 = 0, VAR_10 = FUNC_4(VAR_2), VAR_11 = 1;
    if(!(VAR_4 & VAR_1)) {
        VAR_9 = FUNC_4(VAR_2) - 1;
        VAR_10 = -1;
        VAR_11 = -1;
    }


    for(VAR_8 = VAR_9; VAR_8 != VAR_10 ;VAR_8 += VAR_11) {
        int VAR_12 = 0;
        calculated_number VAR_13 = FUNC_3(VAR_2, VAR_8, VAR_4, &VAR_12);

        if(FUNC_2(VAR_8 != VAR_9)) {
            if(VAR_2->min > VAR_13) VAR_2->min = VAR_13;
            if(VAR_2->max < VAR_13) VAR_2->max = VAR_13;
        }
        else {
            VAR_2->min = VAR_13;
            VAR_2->max = VAR_13;
        }

        if(FUNC_2(VAR_8 != VAR_9))
            FUNC_1(VAR_3, VAR_6);

        if(VAR_12) {
            if(VAR_4 & VAR_0)
                FUNC_1(VAR_3, "0");
            else
                FUNC_1(VAR_3, "null");
        }
        else
            FUNC_0(VAR_3, VAR_13);
    }
    FUNC_1(VAR_3, VAR_7);

}
