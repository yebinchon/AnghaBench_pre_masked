
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tz ;
struct timezone {int tz_minuteswest; } ;
struct timeval {int dummy; } ;


 int FUNC_0 (struct timeval*,struct timezone*) ;
 int FUNC_1 (struct timezone*,int ,int) ;

int FUNC_2(void)
{
 struct timezone VAR_0;
 struct timeval VAR_1;

 FUNC_1(&VAR_0, 0, sizeof(VAR_0));
 FUNC_0(&VAR_1, &VAR_0);
 return VAR_0.tz_minuteswest;
}
