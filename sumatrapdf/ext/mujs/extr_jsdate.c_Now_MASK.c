
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_sec; double tv_usec; } ;
struct _timeb {double time; double millitm; } ;


 int FUNC_0 (struct _timeb*) ;
 double FUNC_1 (double) ;
 int FUNC_2 (struct timeval*,int *) ;
 double FUNC_3 (int *) ;

__attribute__((used)) static double FUNC_4(void)
{

 struct timeval VAR_0;
 FUNC_2(&VAR_0, ((void*)0));
 return FUNC_1(VAR_0.tv_sec * 1000.0 + VAR_0.tv_usec / 1000.0);







}
