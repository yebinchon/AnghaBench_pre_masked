
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timespec {unsigned long long tv_sec; scalar_t__ tv_nsec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,char*) ;

__attribute__((used)) static uint64_t FUNC_2(void)
{
 struct timespec VAR_2;

 if (FUNC_0(VAR_0, &VAR_2))
  FUNC_1(1, VAR_1, "gettime");

 return VAR_2.tv_sec * (1000ULL * 1000 * 1000) + VAR_2.tv_nsec;
}
