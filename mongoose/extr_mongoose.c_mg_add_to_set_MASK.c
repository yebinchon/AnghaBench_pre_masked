
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sock_t ;
typedef int fd_set ;


 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1(sock_t VAR_2, fd_set *VAR_3, sock_t *VAR_4) {
  if (VAR_2 != VAR_1

      && VAR_2 < (sock_t) VAR_0

      ) {
    FUNC_0(VAR_2, VAR_3);
    if (*VAR_4 == VAR_1 || VAR_2 > *VAR_4) {
      *VAR_4 = VAR_2;
    }
  }
}
