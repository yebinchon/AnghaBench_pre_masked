
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {double tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (unsigned int*,int ,int,int *,int *,int ) ;
 int FUNC_2 (char*,double) ;

int FUNC_3(void)
{
 struct timespec VAR_3, VAR_4;
 unsigned long VAR_5 = VAR_2;

 FUNC_0(VAR_0, &VAR_3);

 while (VAR_5--) {
  unsigned int VAR_6 = 0;
  FUNC_1(&VAR_6, VAR_1, 1, ((void*)0), ((void*)0), 0);
 }

 FUNC_0(VAR_0, &VAR_4);

 FUNC_2("time = %.6f\n", VAR_4.tv_sec - VAR_3.tv_sec + (VAR_4.tv_nsec - VAR_3.tv_nsec) / 1e9);

 return 0;
}
