
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct Masscan {int retries; scalar_t__ echo; scalar_t__ echo_all; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct Masscan *VAR_3, const char *VAR_4, const char *VAR_5)
{
    uint64_t VAR_6;

    FUNC_0(VAR_4);
    if (VAR_3->echo) {
        if (VAR_3->retries || VAR_3->echo_all)
            FUNC_1(VAR_3->echo, "retries = %u\n", VAR_3->retries);
        return 0;
    }
    VAR_6 = FUNC_2(VAR_5, 0, 0);
    if (VAR_6 >= 1000) {
        FUNC_1(VAR_2, "FAIL: retries=<n>: expected number less than 1000\n");
        return VAR_0;
    }
    VAR_3->retries = (unsigned)VAR_6;
    return VAR_1;

}
