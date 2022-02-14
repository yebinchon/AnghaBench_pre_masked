
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,char*,char const*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;

__attribute__((used)) static int64_t FUNC_2(const char *VAR_2, zval *VAR_3) {
    int64_t VAR_4 = -1;


    if (FUNC_1(VAR_3, &VAR_4) == VAR_1 || VAR_4 < 0) {
        FUNC_0(((void*)0), VAR_0,
            "Invalid XCLAIM option '%s' will be ignored", VAR_2);
    }

    return VAR_4;
}
