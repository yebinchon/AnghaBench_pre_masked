
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 long long FUNC_2 (char const*,char**) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline long long FUNC_4(const char *VAR_0, long long VAR_1) {
    long long VAR_2;

    if(FUNC_1(VAR_0 && *VAR_0)) {
        char *VAR_3 = ((void*)0);
        VAR_2 = FUNC_2(VAR_0, &VAR_3);
        if(FUNC_3(VAR_3 && *VAR_3))
            FUNC_0("STATSD: excess data '%s' after value '%s'", VAR_3, VAR_0);
    }
    else
        VAR_2 = VAR_1;

    return VAR_2;
}
