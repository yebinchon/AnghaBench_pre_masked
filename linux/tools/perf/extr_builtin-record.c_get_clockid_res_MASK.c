
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
typedef int clockid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(clockid_t VAR_1, u64 *VAR_2)
{
 struct timespec VAR_3;

 *VAR_2 = 0;
 if (!FUNC_0(VAR_1, &VAR_3))
  *VAR_2 = VAR_3.tv_nsec + VAR_3.tv_sec * VAR_0;
 else
  FUNC_1("WARNING: Failed to determine specified clock resolution.\n");

 return 0;
}
