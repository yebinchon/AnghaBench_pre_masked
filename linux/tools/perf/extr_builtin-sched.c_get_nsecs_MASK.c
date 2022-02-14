
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;

__attribute__((used)) static u64 FUNC_1(void)
{
 struct timespec VAR_2;

 FUNC_0(VAR_0, &VAR_2);

 return VAR_2.tv_sec * VAR_1 + VAR_2.tv_nsec;
}
