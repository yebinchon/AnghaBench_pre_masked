
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (char*,long,int) ;
 int FUNC_1 (struct timeval*,int *) ;

int FUNC_2(long long VAR_0)
{
 struct timeval VAR_1;
 int VAR_2;

 VAR_1.tv_sec = (time_t)VAR_0;
 VAR_1.tv_usec = 0;

 VAR_2 = FUNC_1(&VAR_1, ((void*)0));

 FUNC_0("Setting time to 0x%lx: %d\n", (long)VAR_0, VAR_2);
 return VAR_2;
}
