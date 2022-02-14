
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_server {int dummy; } ;
struct socket_message {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 struct socket_server* VAR_7 ;


 int FUNC_0 (struct socket_server*) ;
 int FUNC_1 (int ,int,struct socket_message*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct socket_server*,struct socket_message*,int*) ;

int
FUNC_4() {
 struct socket_server *VAR_8 = VAR_7;
 FUNC_0(VAR_8);
 struct socket_message VAR_9;
 int VAR_10 = 1;
 int VAR_11 = FUNC_3(VAR_8, &VAR_9, &VAR_10);
 switch (VAR_11) {
 case 131:
  return 0;
 case 133:
  FUNC_1(VAR_3, 0, &VAR_9);
  break;
 case 134:
  FUNC_1(VAR_1, 0, &VAR_9);
  break;
 case 130:
  FUNC_1(VAR_2, 1, &VAR_9);
  break;
 case 132:
  FUNC_1(VAR_4, 1, &VAR_9);
  break;
 case 135:
  FUNC_1(VAR_0, 1, &VAR_9);
  break;
 case 129:
  FUNC_1(VAR_5, 0, &VAR_9);
  break;
 case 128:
  FUNC_1(VAR_6, 0, &VAR_9);
  break;
 default:
  FUNC_2(((void*)0), "Unknown socket message type %d.",VAR_11);
  return -1;
 }
 if (VAR_10) {
  return -1;
 }
 return 1;
}
