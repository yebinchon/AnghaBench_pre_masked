
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (struct timeval*,int *) ;

__attribute__((used)) static uint64_t
FUNC_2() {
 uint64_t VAR_1;

 struct timespec VAR_2;
 FUNC_0(VAR_0, &VAR_2);
 VAR_1 = (uint64_t)VAR_2.tv_sec * 100;
 VAR_1 += VAR_2.tv_nsec / 10000000;






 return VAR_1;
}
