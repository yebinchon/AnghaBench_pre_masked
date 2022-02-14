
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (struct timeval*,int *) ;

__attribute__((used)) static void
FUNC_2(uint32_t *VAR_1, uint32_t *VAR_2) {

 struct timespec VAR_3;
 FUNC_0(VAR_0, &VAR_3);
 *VAR_1 = (uint32_t)VAR_3.tv_sec;
 *VAR_2 = (uint32_t)(VAR_3.tv_nsec / 10000000);






}
