
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned long long tv_sec; scalar_t__ tv_nsec; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;

__attribute__((used)) static __u64 FUNC_1(void)
{
 struct timespec VAR_1;

 FUNC_0(VAR_0, &VAR_1);
 return VAR_1.tv_sec * 1000000000ull + VAR_1.tv_nsec;
}
