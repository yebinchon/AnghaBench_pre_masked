
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int ,int) ;
 scalar_t__ FUNC_2 (int,int ,int *) ;

int
FUNC_3(evutil_socket_t VAR_5)
{
 {
  int VAR_6;
  if ((VAR_6 = FUNC_1(VAR_5, VAR_1, ((void*)0))) < 0) {
   FUNC_0 ("fcntl(%d, F_GETFL)", VAR_5);
   return -1;
  }
  if (FUNC_1(VAR_5, VAR_2, VAR_6 & ~VAR_3) == -1) {
   FUNC_0 ("fcntl(%d, F_SETFL)", VAR_5);
   return -1;
  }
 }

 return 0;
}
