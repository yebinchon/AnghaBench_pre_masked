
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RRDSET ;
typedef int RRDHOST ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static inline RRDSET *FUNC_4(RRDHOST *VAR_1, const char *VAR_2) {
    RRDSET *VAR_3 = FUNC_1(VAR_1, VAR_2);
    if(FUNC_3(VAR_3)) {
        FUNC_2(VAR_3);
        FUNC_0(VAR_0, "RRDSET '%s', already exists.", VAR_2);
        return VAR_3;
    }

    return ((void*)0);
}
