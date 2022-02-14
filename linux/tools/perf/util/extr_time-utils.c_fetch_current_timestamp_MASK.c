
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef int dt ;


 scalar_t__ FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (char*,size_t,char*,char*,unsigned int) ;
 int FUNC_3 (char*,int,char*,struct tm*) ;

int FUNC_4(char *VAR_0, size_t VAR_1)
{
 struct timeval VAR_2;
 struct tm VAR_3;
 char VAR_4[32];

 if (FUNC_0(&VAR_2, ((void*)0)) || !FUNC_1(&VAR_2.tv_sec, &VAR_3))
  return -1;

 if (!FUNC_3(VAR_4, sizeof(VAR_4), "%Y%m%d%H%M%S", &VAR_3))
  return -1;

 FUNC_2(VAR_0, VAR_1, "%s%02u", VAR_4, (unsigned)VAR_2.tv_usec / 10000);

 return 0;
}
