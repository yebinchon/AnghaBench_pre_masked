
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct in_addr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_6__ {int bsd_socket; } ;
typedef TYPE_1__ php_socket ;
typedef int ipv4_mcast_ttl_lback ;
typedef int if_addr ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;






 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int VAR_3 ;
 long FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,int,int,int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,unsigned int*) ;
 int FUNC_8 (unsigned int,TYPE_1__*,struct in_addr*) ;
 int FUNC_9 (int ,int,int,void*,int) ;

int FUNC_10(php_socket *VAR_5,
          int VAR_6,
          int VAR_7,
          zval *VAR_8)
{
 unsigned int VAR_9;
 struct in_addr VAR_10;
 void *VAR_11;
 socklen_t VAR_12;
 unsigned char VAR_13;
 int VAR_14;

 switch (VAR_7) {
 case 132:
 case 130:






  if (FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8) == VAR_1) {
   return VAR_1;
  } else {
   return VAR_3;
  }

 case 136:
  if (FUNC_7(VAR_8, &VAR_9) == VAR_1) {
   return VAR_1;
  }

  if (FUNC_8(VAR_9, VAR_5, &VAR_10) == VAR_1) {
   return VAR_1;
  }
  VAR_11 = &VAR_10;
  VAR_12 = sizeof(VAR_10);
  goto dosockopt;

 case 135:
  FUNC_3(VAR_8);
  VAR_13 = (unsigned char) (FUNC_2(VAR_8) == VAR_2);
  goto ipv4_loop_ttl;

 case 134:
  FUNC_4(VAR_8);
  if (FUNC_1(VAR_8) < 0L || FUNC_1(VAR_8) > 255L) {
   FUNC_6(((void*)0), VAR_0,
     "Expected a value between 0 and 255");
   return VAR_1;
  }
  VAR_13 = (unsigned char) FUNC_1(VAR_8);
ipv4_loop_ttl:
  VAR_11 = &VAR_13;
  VAR_12 = sizeof(VAR_13);
  goto dosockopt;
 }

 return 1;

dosockopt:
 VAR_14 = FUNC_9(VAR_5->bsd_socket, VAR_6, VAR_7, VAR_11, VAR_12);
 if (VAR_14 != 0) {
  FUNC_0(VAR_5, "unable to set socket option", VAR_4);
  return VAR_1;
 }

 return VAR_3;
}
