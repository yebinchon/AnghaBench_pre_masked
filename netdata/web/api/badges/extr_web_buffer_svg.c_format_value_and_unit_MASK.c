
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct units_formatter {char const* units; scalar_t__ hash; scalar_t__ format; } ;
typedef double calculated_number ;
typedef scalar_t__ UNITS_FORMAT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 struct units_formatter* VAR_13 ;
 char* FUNC_0 (char*,size_t,double,char const*,int) ;
 scalar_t__ FUNC_1 (double) ;
 scalar_t__ FUNC_2 (double) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (char*,size_t,char*,...) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (int) ;

static inline char *FUNC_8(char *VAR_14, size_t VAR_15, calculated_number VAR_16, const char *VAR_17, int VAR_18) {
    static int VAR_19 = -1;
    int VAR_20;

    if(FUNC_7(VAR_19 == -1)) {
        for(VAR_20 = 0; VAR_13[VAR_20].units; VAR_20++)
            VAR_13[VAR_20].hash = FUNC_3(VAR_13[VAR_20].units);

        VAR_19 = VAR_20;
    }

    if(FUNC_7(!VAR_17)) VAR_17 = "";
    uint32_t VAR_21 = FUNC_3(VAR_17);

    UNITS_FORMAT VAR_22 = VAR_5;
    for(VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
        struct units_formatter *VAR_23 = &VAR_13[VAR_20];

        if(VAR_21 == VAR_23->hash && !FUNC_5(VAR_17, VAR_23->units)) {
            VAR_22 = VAR_23->format;
            break;
        }
    }

    if(FUNC_7(VAR_22 == VAR_10 || VAR_22 == VAR_11)) {
        if(VAR_16 == 0.0) {
            FUNC_4(VAR_14, VAR_15, "%s", "now");
            return VAR_14;
        }
        else if(FUNC_2(VAR_16) || FUNC_1(VAR_16)) {
            FUNC_4(VAR_14, VAR_15, "%s", "undefined");
            return VAR_14;
        }

        const char *VAR_24 = (VAR_22 == VAR_11)?" ago":"";

        size_t VAR_25 = (size_t)VAR_16;
        size_t VAR_26 = VAR_25 / 86400;
        VAR_25 = VAR_25 % 86400;

        size_t VAR_27 = VAR_25 / 3600;
        VAR_25 = VAR_25 % 3600;

        size_t VAR_28 = VAR_25 / 60;
        VAR_25 = VAR_25 % 60;

        if(VAR_26)
            FUNC_4(VAR_14, VAR_15, "%zu %s %02zu:%02zu:%02zu%s", VAR_26, (VAR_26 == 1)?"day":"days", VAR_27, VAR_28, VAR_25, VAR_24);
        else
            FUNC_4(VAR_14, VAR_15, "%02zu:%02zu:%02zu%s", VAR_27, VAR_28, VAR_25, VAR_24);

        return VAR_14;
    }

    else if(FUNC_7(VAR_22 == VAR_3 || VAR_22 == VAR_4)) {
        if(VAR_16 == 0.0) {
            FUNC_4(VAR_14, VAR_15, "%s", "now");
            return VAR_14;
        }
        else if(FUNC_2(VAR_16) || FUNC_1(VAR_16)) {
            FUNC_4(VAR_14, VAR_15, "%s", "undefined");
            return VAR_14;
        }

        const char *VAR_29 = (VAR_22 == VAR_4)?" ago":"";

        size_t VAR_30 = (size_t)VAR_16;
        size_t VAR_31 = VAR_30 / (60 * 24);
        VAR_30 = VAR_30 % (60 * 24);

        size_t VAR_32 = VAR_30 / 60;
        VAR_30 = VAR_30 % 60;

        if(VAR_31)
            FUNC_4(VAR_14, VAR_15, "%zud %02zuh %02zum%s", VAR_31, VAR_32, VAR_30, VAR_29);
        else
            FUNC_4(VAR_14, VAR_15, "%zuh %zum%s", VAR_32, VAR_30, VAR_29);

        return VAR_14;
    }

    else if(FUNC_7(VAR_22 == VAR_1 || VAR_22 == VAR_2)) {
        if(VAR_16 == 0.0) {
            FUNC_4(VAR_14, VAR_15, "%s", "now");
            return VAR_14;
        }
        else if(FUNC_2(VAR_16) || FUNC_1(VAR_16)) {
            FUNC_4(VAR_14, VAR_15, "%s", "undefined");
            return VAR_14;
        }

        const char *VAR_33 = (VAR_22 == VAR_2)?" ago":"";

        size_t VAR_34 = (size_t)VAR_16;
        size_t VAR_35 = VAR_34 / 24;
        VAR_34 = VAR_34 % 24;

        if(VAR_35)
            FUNC_4(VAR_14, VAR_15, "%zud %zuh%s", VAR_35, VAR_34, VAR_33);
        else
            FUNC_4(VAR_14, VAR_15, "%zuh%s", VAR_34, VAR_33);

        return VAR_14;
    }

    else if(FUNC_7(VAR_22 == VAR_8)) {
        FUNC_4(VAR_14, VAR_15, "%s", (VAR_16 != 0.0)?"on":"off");
        return VAR_14;
    }

    else if(FUNC_7(VAR_22 == VAR_12)) {
        FUNC_4(VAR_14, VAR_15, "%s", (VAR_16 != 0.0)?"up":"down");
        return VAR_14;
    }

    else if(FUNC_7(VAR_22 == VAR_6)) {
        FUNC_4(VAR_14, VAR_15, "%s", (VAR_16 != 0.0)?"ok":"error");
        return VAR_14;
    }

    else if(FUNC_7(VAR_22 == VAR_7)) {
        FUNC_4(VAR_14, VAR_15, "%s", (VAR_16 != 0.0)?"ok":"failed");
        return VAR_14;
    }

    else if(FUNC_7(VAR_22 == VAR_0))
        VAR_17 = "";

    else if(FUNC_7(VAR_22 == VAR_9))
        VAR_17 = "%";

    if(FUNC_7(FUNC_2(VAR_16) || FUNC_1(VAR_16))) {
        FUNC_6(VAR_14, "-");
        return VAR_14;
    }

    return FUNC_0(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);
}
