
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static bool FUNC_5(int VAR_1)
{
 fd_set VAR_2;
 struct timeval VAR_3;
 int VAR_4;
 int VAR_5 = 0;

 VAR_3.tv_sec = 0;
 VAR_3.tv_usec = VAR_0;
 FUNC_1(&VAR_2);
 VAR_5 = FUNC_2(VAR_1, VAR_5, &VAR_2);
 VAR_4 = FUNC_4(VAR_5+1, &VAR_2, ((void*)0), ((void*)0), &VAR_3);
 if (VAR_4 < 0)
  FUNC_3("select");
 if (VAR_4 > 0 && FUNC_0(VAR_1, &VAR_2))
  return 1;
 return 0;
}
