
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {int tv_sec; } ;
typedef int clockid_t ;


 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline time_t FUNC_3(clockid_t VAR_0) {
    struct timespec VAR_1;
    if(FUNC_2(FUNC_0(VAR_0, &VAR_1) == -1)) {
        FUNC_1("clock_gettime(%d, &timespec) failed.", VAR_0);
        return 0;
    }
    return VAR_1.tv_sec;
}
