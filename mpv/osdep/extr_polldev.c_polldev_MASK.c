
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct pollfd {int fd; int events; int revents; } ;
typedef size_t nfds_t ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct pollfd*,size_t,int) ;
 int FUNC_4 (int,int *,int *,int *,struct timeval*) ;

int FUNC_5(struct pollfd VAR_3[], nfds_t VAR_4, int VAR_5) {
    return FUNC_3(VAR_3, VAR_4, VAR_5);

}
