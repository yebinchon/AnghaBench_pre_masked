
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RRDCALC_STATUS ;
 int FUNC_0 (char*,int) ;

inline const char *FUNC_1(RRDCALC_STATUS VAR_0) {
    switch(VAR_0) {
        case 131:
            return "REMOVED";

        case 130:
            return "UNDEFINED";

        case 129:
            return "UNINITIALIZED";

        case 134:
            return "CLEAR";

        case 132:
            return "RAISED";

        case 128:
            return "WARNING";

        case 133:
            return "CRITICAL";

        default:
            FUNC_0("Unknown alarm status %d", VAR_0);
            return "UNKNOWN";
    }
}
