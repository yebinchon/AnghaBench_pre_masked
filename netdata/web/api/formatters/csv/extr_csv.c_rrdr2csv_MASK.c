
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef int calculated_number ;
struct TYPE_8__ {TYPE_2__* dimensions; } ;
struct TYPE_7__ {char const* name; struct TYPE_7__* next; } ;
struct TYPE_6__ {long d; int* od; int* v; int* o; int min; int max; TYPE_3__* st; scalar_t__* t; } ;
typedef int RRDR_VALUE_FLAGS ;
typedef int RRDR_OPTIONS ;
typedef TYPE_1__ RRDR ;
typedef TYPE_2__ RRDDIM ;
typedef int BUFFER ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 struct tm* FUNC_5 (scalar_t__*,struct tm*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9(RRDR *VAR_12, BUFFER *VAR_13, uint32_t VAR_14, RRDR_OPTIONS VAR_15, const char *VAR_16, const char *VAR_17, const char *VAR_18, const char *VAR_19) {
    FUNC_7(VAR_12->st);


    long VAR_20, VAR_21;
    RRDDIM *VAR_22;


    for(VAR_20 = 0, VAR_21 = 0, VAR_22 = VAR_12->st->dimensions; VAR_22 && VAR_20 < VAR_12->d ;VAR_20++, VAR_22 = VAR_22->next) {
        if(FUNC_8(VAR_12->od[VAR_20] & VAR_1)) continue;
        if(FUNC_8((VAR_15 & VAR_6) && !(VAR_12->od[VAR_20] & VAR_2))) continue;

        if(!VAR_21) {
            FUNC_2(VAR_13, VAR_16);
            if(VAR_15 & VAR_4) FUNC_2(VAR_13, "\"");
            FUNC_2(VAR_13, "time");
            if(VAR_15 & VAR_4) FUNC_2(VAR_13, "\"");
        }
        FUNC_2(VAR_13, VAR_17);
        if(VAR_15 & VAR_4) FUNC_2(VAR_13, "\"");
        FUNC_2(VAR_13, VAR_22->name);
        if(VAR_15 & VAR_4) FUNC_2(VAR_13, "\"");
        VAR_21++;
    }
    FUNC_2(VAR_13, VAR_18);

    if(VAR_14 == VAR_0) {

        for(VAR_20 = 0, VAR_21 = 0, VAR_22 = VAR_12->st->dimensions; VAR_22 && VAR_20 < VAR_12->d ;VAR_20++, VAR_22 = VAR_22->next) {
            if(FUNC_8(VAR_12->od[VAR_20] & VAR_1)) continue;
            if(FUNC_8((VAR_15 & VAR_6) && !(VAR_12->od[VAR_20] & VAR_2))) continue;

            if(!VAR_21) {
                FUNC_2(VAR_13, VAR_16);
                if(VAR_15 & VAR_4) FUNC_2(VAR_13, "\"");
                FUNC_2(VAR_13, ":---:");
                if(VAR_15 & VAR_4) FUNC_2(VAR_13, "\"");
            }
            FUNC_2(VAR_13, VAR_17);
            if(VAR_15 & VAR_4) FUNC_2(VAR_13, "\"");
            FUNC_2(VAR_13, ":---:");
            if(VAR_15 & VAR_4) FUNC_2(VAR_13, "\"");
            VAR_21++;
        }
        FUNC_2(VAR_13, VAR_18);
    }

    if(!VAR_21) {

        return;
    }

    long VAR_23 = 0, VAR_24 = FUNC_6(VAR_12), VAR_25 = 1;
    if(!(VAR_15 & VAR_9)) {
        VAR_23 = FUNC_6(VAR_12) - 1;
        VAR_24 = -1;
        VAR_25 = -1;
    }


    calculated_number VAR_26 = 1;
    for(VAR_21 = VAR_23; VAR_21 != VAR_24 ;VAR_21 += VAR_25) {
        calculated_number *VAR_27 = &VAR_12->v[ VAR_21 * VAR_12->d ];
        RRDR_VALUE_FLAGS *VAR_28 = &VAR_12->o[ VAR_21 * VAR_12->d ];

        FUNC_2(VAR_13, VAR_19);
        FUNC_2(VAR_13, VAR_16);

        time_t VAR_29 = VAR_12->t[VAR_21];

        if((VAR_15 & VAR_10) || (VAR_15 & VAR_5)) {

            FUNC_1(VAR_13, (calculated_number)VAR_29);

            if(VAR_15 & VAR_5) FUNC_2(VAR_13, "000");
        }
        else {

            struct tm VAR_30, *VAR_31 = FUNC_5(&VAR_29, &VAR_30);
            if(!VAR_31) { FUNC_3("localtime() failed."); continue; }
            FUNC_0(VAR_13, VAR_31->tm_year + 1900, VAR_31->tm_mon + 1, VAR_31->tm_mday, VAR_31->tm_hour, VAR_31->tm_min, VAR_31->tm_sec);
        }

        int VAR_32 = 0;
        if(FUNC_8(VAR_15 & VAR_8)) {
            VAR_26 = 0;
            for(VAR_20 = 0, VAR_22 = VAR_12->st->dimensions; VAR_22 && VAR_20 < VAR_12->d ;VAR_20++, VAR_22 = VAR_22->next) {
                calculated_number VAR_33 = VAR_27[VAR_20];

                if(FUNC_4((VAR_15 & VAR_3) && VAR_33 < 0))
                    VAR_33 = -VAR_33;

                VAR_26 += VAR_33;
            }

            if(VAR_26 == 0) VAR_26 = 1;
            VAR_32 = 1;
        }


        for(VAR_20 = 0, VAR_22 = VAR_12->st->dimensions; VAR_22 && VAR_20 < VAR_12->d ;VAR_20++, VAR_22 = VAR_22->next) {
            if(FUNC_8(VAR_12->od[VAR_20] & VAR_1)) continue;
            if(FUNC_8((VAR_15 & VAR_6) && !(VAR_12->od[VAR_20] & VAR_2))) continue;

            FUNC_2(VAR_13, VAR_17);

            calculated_number VAR_34 = VAR_27[VAR_20];

            if(VAR_28[VAR_20] & VAR_11) {
                if(VAR_15 & VAR_7)
                    FUNC_2(VAR_13, "0");
                else
                    FUNC_2(VAR_13, "null");
            }
            else {
                if(FUNC_8((VAR_15 & VAR_3) && VAR_34 < 0))
                    VAR_34 = -VAR_34;

                if(FUNC_8(VAR_15 & VAR_8)) {
                    VAR_34 = VAR_34 * 100 / VAR_26;

                    if(FUNC_8(VAR_32)) {
                        VAR_12->min = VAR_12->max = VAR_34;
                        VAR_32 = 0;
                    }

                    if(VAR_34 < VAR_12->min) VAR_12->min = VAR_34;
                    if(VAR_34 > VAR_12->max) VAR_12->max = VAR_34;
                }

                FUNC_1(VAR_13, VAR_34);
            }
        }

        FUNC_2(VAR_13, VAR_18);
    }

}
