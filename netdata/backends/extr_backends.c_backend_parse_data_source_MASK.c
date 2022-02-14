
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BACKEND_OPTIONS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char*) ;

inline BACKEND_OPTIONS FUNC_2(const char *VAR_4, BACKEND_OPTIONS VAR_5) {
    if(!FUNC_1(VAR_4, "raw") || !FUNC_1(VAR_4, "as collected") || !FUNC_1(VAR_4, "as-collected") || !FUNC_1(VAR_4, "as_collected") || !FUNC_1(VAR_4, "ascollected")) {
        VAR_5 |= VAR_1;
        VAR_5 &= ~(VAR_0 ^ VAR_1);
    }
    else if(!FUNC_1(VAR_4, "average")) {
        VAR_5 |= VAR_2;
        VAR_5 &= ~(VAR_0 ^ VAR_2);
    }
    else if(!FUNC_1(VAR_4, "sum") || !FUNC_1(VAR_4, "volume")) {
        VAR_5 |= VAR_3;
        VAR_5 &= ~(VAR_0 ^ VAR_3);
    }
    else {
        FUNC_0("BACKEND: invalid data source method '%s'.", VAR_4);
    }

    return VAR_5;
}
