
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;

__attribute__((used)) static uint64_t FUNC_1(void)
{
 struct timespec VAR_1;

 if (FUNC_0(VAR_0, &VAR_1) != 0) {
  return 0;
 }
 return ((uint64_t)VAR_1.tv_sec * 1000000000) + VAR_1.tv_nsec;
}
