
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; scalar_t__ tv_usec; } ;
typedef scalar_t__ php_socket_t ;
typedef int fd_set ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int *) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static inline int FUNC_4(php_socket_t VAR_1)
{
 fd_set VAR_2;
 struct timeval VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2);

 FUNC_2(VAR_1, &VAR_2);

 VAR_3.tv_sec = (long)FUNC_1(VAR_0);
 VAR_3.tv_usec = 0;

 VAR_4 = FUNC_3(VAR_1+1, ((void*)0), &VAR_2, ((void*)0), &VAR_3);

 return VAR_4 != -1;
}
