
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (char*,double) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_0;

 struct timeval VAR_1, VAR_2;

 FUNC_0(&VAR_1, ((void*)0));

 for(VAR_0 = 0; VAR_0 < 100000000; VAR_0++) {
  FUNC_0(&VAR_2, ((void*)0));
 }

 FUNC_1("time = %.6f\n", VAR_2.tv_sec - VAR_1.tv_sec + (VAR_2.tv_usec - VAR_1.tv_usec) * 1e-6);

 return 0;
}
