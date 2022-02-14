
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
struct timeval {int tv_sec; } ;


 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (struct tm*,char*) ;
 int FUNC_2 (int *,struct tm*) ;

int FUNC_3(char *VAR_0) {
 struct timeval VAR_1;
 struct tm VAR_2;

 FUNC_0(&VAR_1, ((void*)0));


 FUNC_2(&VAR_1.tv_sec, &VAR_2);
 FUNC_1(&VAR_2, VAR_0);
 return 0;
}
