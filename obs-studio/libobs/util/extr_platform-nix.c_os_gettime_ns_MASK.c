
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;

uint64_t FUNC_1(void)
{
 struct timespec VAR_1;
 FUNC_0(VAR_0, &VAR_1);
 return ((uint64_t)VAR_1.tv_sec * 1000000000ULL + (uint64_t)VAR_1.tv_nsec);
}
