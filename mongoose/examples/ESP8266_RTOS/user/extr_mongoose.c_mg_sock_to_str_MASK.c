
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union socket_address {int dummy; } socket_address ;
typedef int sock_t ;


 int VAR_0 ;
 int FUNC_0 (union socket_address*,char*,size_t,int) ;
 int FUNC_1 (int ,int,union socket_address*) ;

void FUNC_2(sock_t VAR_1, char *VAR_2, size_t VAR_3, int VAR_4) {
  union socket_address VAR_5;
  FUNC_1(VAR_1, VAR_4 & VAR_0, &VAR_5);
  FUNC_0(&VAR_5, VAR_2, VAR_3, VAR_4);
}
