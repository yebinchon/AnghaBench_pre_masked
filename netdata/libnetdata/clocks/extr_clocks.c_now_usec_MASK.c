
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline usec_t FUNC_3(clockid_t VAR_3) {
    struct timespec VAR_4;
    if(FUNC_2(FUNC_0(VAR_3, &VAR_4) == -1)) {
        FUNC_1("clock_gettime(%d, &timespec) failed.", VAR_3);
        return 0;
    }
    return (usec_t)VAR_4.tv_sec * VAR_2 + (VAR_4.tv_nsec % VAR_0) / VAR_1;
}
