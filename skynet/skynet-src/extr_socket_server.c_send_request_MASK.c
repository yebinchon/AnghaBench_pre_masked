
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct socket_server {int sendctrl_fd; } ;
struct request_package {void** header; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_2 ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,void**,int) ;

__attribute__((used)) static void
FUNC_4(struct socket_server *VAR_3, struct request_package *VAR_4, char VAR_5, int VAR_6) {
 VAR_4->header[6] = (uint8_t)VAR_5;
 VAR_4->header[7] = (uint8_t)VAR_6;
 for (;;) {
  ssize_t VAR_7 = FUNC_3(VAR_3->sendctrl_fd, &VAR_4->header[6], VAR_6+2);
  if (VAR_7<0) {
   if (VAR_1 != VAR_0) {
    FUNC_1(VAR_2, "socket-server : send ctrl command error %s.\n", FUNC_2(VAR_1));
   }
   continue;
  }
  FUNC_0(VAR_7 == VAR_6+2);
  return;
 }
}
