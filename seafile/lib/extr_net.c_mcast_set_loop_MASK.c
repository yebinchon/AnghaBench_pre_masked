
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int flag ;
typedef int evutil_socket_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int*,int) ;
 int FUNC_1 (int ) ;

int
FUNC_2(evutil_socket_t VAR_6, int VAR_7)
{


 switch (FUNC_1(VAR_6)) {
 case 129: {
  u_char VAR_8;

  VAR_8 = VAR_7;
  return(FUNC_0(VAR_6, VAR_1, VAR_4,
        &VAR_8, sizeof(VAR_8)));
 }
 default:
  VAR_5 = VAR_0;
  return(-1);
 }




}
