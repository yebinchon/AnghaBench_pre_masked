
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; scalar_t__ tm_year; } ;
typedef int calculated_number ;
struct TYPE_8__ {TYPE_2__* dimensions; } ;
struct TYPE_7__ {char* name; struct TYPE_7__* next; } ;
struct TYPE_6__ {long d; int* od; int* v; int* o; int min; int max; TYPE_3__* st; scalar_t__* t; } ;
typedef int RRDR_VALUE_FLAGS ;
typedef int RRDR_OPTIONS ;
typedef TYPE_1__ RRDR ;
typedef TYPE_2__ RRDDIM ;
typedef int BUFFER ;


 int VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,char*,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 struct tm* FUNC_6 (scalar_t__*,struct tm*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (char*,int,char*,char*,...) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(RRDR *VAR_15, BUFFER *VAR_16, RRDR_OPTIONS VAR_17, int VAR_18) {
    FUNC_8(VAR_15->st);


    int VAR_19 = 0, VAR_20, VAR_21 = 0;
    char VAR_22[2] = "",
            VAR_23[2] = "",
            VAR_24[101] = "",
            VAR_25[101] = "",
            VAR_26[101] = "",
            VAR_27[101] = "",
            VAR_28[101] = "",
            VAR_29[101] = "",
            VAR_30[101] = "",
            VAR_31[201] = "",
            VAR_32[201] = "",
            VAR_33[101] = "",
            VAR_34[101] = "";

    if(VAR_18) {
        VAR_20 = VAR_0;
        if( VAR_17 & VAR_6 ) {
            VAR_22[0] = '\0';
            VAR_23[0] = '\'';
        }
        else {
            VAR_22[0] = '"';
            VAR_23[0] = '"';
        }
        VAR_19 = 1;
        FUNC_9(VAR_26, 100, "        {%sc%s:[{%sv%s:%s", VAR_22, VAR_22, VAR_22, VAR_22, VAR_23);
        FUNC_9(VAR_27, 100, "%s}", VAR_23);
        FUNC_9(VAR_24, 100, ",\n     {%sid%s:%s%s,%slabel%s:%s", VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_23);
        FUNC_9(VAR_25, 100, "%s,%spattern%s:%s%s,%stype%s:%snumber%s}", VAR_23, VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_23, VAR_23);
        FUNC_9(VAR_28, 100, ",{%sv%s:", VAR_22, VAR_22);
        FUNC_10(VAR_29, "}");
        FUNC_10(VAR_30, "]}");
        FUNC_9(VAR_33, 100, "\n  ],\n    %srows%s:\n [\n", VAR_22, VAR_22);
        FUNC_10(VAR_34, "\n  ]\n}");

        FUNC_9(VAR_32, 200, ",{%sv%s:%sRESET OR OVERFLOW%s},{%sv%s:%sThe counters have been wrapped.%s}", VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_23, VAR_23);
        FUNC_9(VAR_31, 200, ",{%sv%s:null},{%sv%s:null}", VAR_22, VAR_22, VAR_22, VAR_22);

        FUNC_2(VAR_16, "{\n %scols%s:\n [\n", VAR_22, VAR_22);
        FUNC_2(VAR_16, "        {%sid%s:%s%s,%slabel%s:%stime%s,%spattern%s:%s%s,%stype%s:%sdatetime%s},\n", VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_23, VAR_23);
        FUNC_2(VAR_16, "        {%sid%s:%s%s,%slabel%s:%s%s,%spattern%s:%s%s,%stype%s:%sstring%s,%sp%s:{%srole%s:%sannotation%s}},\n", VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_22, VAR_22, VAR_23, VAR_23);
        FUNC_2(VAR_16, "        {%sid%s:%s%s,%slabel%s:%s%s,%spattern%s:%s%s,%stype%s:%sstring%s,%sp%s:{%srole%s:%sannotationText%s}}", VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_23, VAR_23, VAR_22, VAR_22, VAR_22, VAR_22, VAR_23, VAR_23);



        if(VAR_17 & VAR_10)
            VAR_17 &= ~VAR_10;
    }
    else {
        VAR_22[0] = '"';
        VAR_23[0] = '"';
        if(VAR_17 & VAR_6) {
            VAR_20 = VAR_0;
            VAR_21 = 1;
        }
        else {
            VAR_20 = VAR_1;
            VAR_21 = 0;
        }
        if( VAR_17 & VAR_10 )
            FUNC_10(VAR_26, "      { ");
        else
            FUNC_10(VAR_26, "      [ ");
        FUNC_10(VAR_24, ", \"");
        FUNC_10(VAR_25, "\"");
        FUNC_10(VAR_28, ", ");
        if( VAR_17 & VAR_10 )
            FUNC_10(VAR_30, "}");
        else
            FUNC_10(VAR_30, "]");
        FUNC_9(VAR_33, 100, "],\n    %sdata%s:\n [\n", VAR_22, VAR_22);
        FUNC_10(VAR_34, "\n  ]\n}");

        FUNC_2(VAR_16, "{\n %slabels%s: [", VAR_22, VAR_22);
        FUNC_2(VAR_16, "%stime%s", VAR_23, VAR_23);
    }




    long VAR_35, VAR_36;
    RRDDIM *VAR_37;


    for(VAR_35 = 0, VAR_36 = 0, VAR_37 = VAR_15->st->dimensions; VAR_37 && VAR_35 < VAR_15->d ;VAR_35++, VAR_37 = VAR_37->next) {
        if(FUNC_11(VAR_15->od[VAR_35] & VAR_2)) continue;
        if(FUNC_11((VAR_17 & VAR_8) && !(VAR_15->od[VAR_35] & VAR_3))) continue;

        FUNC_3(VAR_16, VAR_24);
        FUNC_3(VAR_16, VAR_37->name);
        FUNC_3(VAR_16, VAR_25);
        VAR_36++;
    }
    if(!VAR_36) {
        FUNC_3(VAR_16, VAR_24);
        FUNC_3(VAR_16, "no data");
        FUNC_3(VAR_16, VAR_25);
    }


    FUNC_3(VAR_16, VAR_33);


    if(!VAR_36) {
        FUNC_3(VAR_16, VAR_34);
        return;
    }

    long VAR_38 = 0, VAR_39 = FUNC_7(VAR_15), VAR_40 = 1;
    if(!(VAR_17 & VAR_12)) {
        VAR_38 = FUNC_7(VAR_15) - 1;
        VAR_39 = -1;
        VAR_40 = -1;
    }


    calculated_number VAR_41 = 1;
    for(VAR_36 = VAR_38; VAR_36 != VAR_39 ;VAR_36 += VAR_40) {
        calculated_number *VAR_42 = &VAR_15->v[ VAR_36 * VAR_15->d ];
        RRDR_VALUE_FLAGS *VAR_43 = &VAR_15->o[ VAR_36 * VAR_15->d ];

        time_t VAR_44 = VAR_15->t[VAR_36];

        if(VAR_20 == VAR_0) {

            struct tm VAR_45, *VAR_46 = FUNC_6(&VAR_44, &VAR_45);
            if(!VAR_46) { FUNC_4("localtime_r() failed."); continue; }

            if(FUNC_5(VAR_36 != VAR_38)) FUNC_3(VAR_16, ",\n");
            FUNC_3(VAR_16, VAR_26);

            if( VAR_17 & VAR_10 )
                FUNC_2(VAR_16, "%stime%s: ", VAR_22, VAR_22);

            if(VAR_21)
                FUNC_3(VAR_16, "new ");

            FUNC_0(VAR_16, VAR_46->tm_year + 1900, VAR_46->tm_mon, VAR_46->tm_mday, VAR_46->tm_hour, VAR_46->tm_min, VAR_46->tm_sec);

            FUNC_3(VAR_16, VAR_27);

            if(VAR_19) {

                int VAR_47 = 0;
                for(VAR_35 = 0, VAR_37 = VAR_15->st->dimensions; VAR_37 ;VAR_35++, VAR_37 = VAR_37->next) {
                    if(FUNC_11(!(VAR_15->od[VAR_35] & VAR_4))) continue;

                    if(VAR_43[VAR_35] & VAR_14) {
                        FUNC_3(VAR_16, VAR_32);
                        VAR_47 = 1;
                        break;
                    }
                }
                if(!VAR_47)
                    FUNC_3(VAR_16, VAR_31);
            }
        }
        else {

            if(FUNC_5(VAR_36 != VAR_38)) FUNC_3(VAR_16, ",\n");
            FUNC_3(VAR_16, VAR_26);

            if( VAR_17 & VAR_10 )
                FUNC_2(VAR_16, "%stime%s: ", VAR_22, VAR_22);

            FUNC_1(VAR_16, (calculated_number)VAR_15->t[VAR_36]);

            if(VAR_17 & VAR_7) FUNC_3(VAR_16, "000");

            FUNC_3(VAR_16, VAR_27);
        }

        int VAR_48 = 0;
        if(FUNC_11(VAR_17 & VAR_11)) {
            VAR_41 = 0;
            for(VAR_35 = 0, VAR_37 = VAR_15->st->dimensions; VAR_37 && VAR_35 < VAR_15->d ;VAR_35++, VAR_37 = VAR_37->next) {
                calculated_number VAR_49 = VAR_42[VAR_35];

                if(FUNC_5((VAR_17 & VAR_5) && VAR_49 < 0))
                    VAR_49 = -VAR_49;

                VAR_41 += VAR_49;
            }

            if(VAR_41 == 0) VAR_41 = 1;
            VAR_48 = 1;
        }


        for(VAR_35 = 0, VAR_37 = VAR_15->st->dimensions; VAR_37 && VAR_35 < VAR_15->d ;VAR_35++, VAR_37 = VAR_37->next) {
            if(FUNC_11(VAR_15->od[VAR_35] & VAR_2)) continue;
            if(FUNC_11((VAR_17 & VAR_8) && !(VAR_15->od[VAR_35] & VAR_3))) continue;

            calculated_number VAR_50 = VAR_42[VAR_35];

            FUNC_3(VAR_16, VAR_28);

            if( VAR_17 & VAR_10 )
                FUNC_2(VAR_16, "%s%s%s: ", VAR_22, VAR_37->name, VAR_22);

            if(VAR_43[VAR_35] & VAR_13) {
                if(VAR_17 & VAR_9)
                    FUNC_3(VAR_16, "0");
                else
                    FUNC_3(VAR_16, "null");
            }
            else {
                if(FUNC_11((VAR_17 & VAR_5) && VAR_50 < 0))
                    VAR_50 = -VAR_50;

                if(FUNC_11(VAR_17 & VAR_11)) {
                    VAR_50 = VAR_50 * 100 / VAR_41;

                    if(FUNC_11(VAR_48)) {
                        VAR_15->min = VAR_15->max = VAR_50;
                        VAR_48 = 0;
                    }

                    if(VAR_50 < VAR_15->min) VAR_15->min = VAR_50;
                    if(VAR_50 > VAR_15->max) VAR_15->max = VAR_50;
                }

                FUNC_1(VAR_16, VAR_50);
            }

            FUNC_3(VAR_16, VAR_29);
        }

        FUNC_3(VAR_16, VAR_30);
    }

    FUNC_3(VAR_16, VAR_34);

}
