
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct timespec {int dummy; } ;
typedef int clockid_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct timespec*) ;

usec_t FUNC_4(clockid_t VAR_0) {
        struct timespec VAR_1;

        FUNC_0(FUNC_1(FUNC_2(VAR_0), &VAR_1) == 0);

        return FUNC_3(&VAR_1);
}
