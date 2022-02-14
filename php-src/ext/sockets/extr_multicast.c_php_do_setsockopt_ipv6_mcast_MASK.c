
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int socklen_t ;
struct TYPE_5__ {int bsd_socket; } ;
typedef TYPE_1__ php_socket ;
typedef int ov ;
typedef int if_index ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;






 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int VAR_3 ;
 long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,int,int,int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,unsigned int*) ;
 int FUNC_8 (int ,int,int,void*,int) ;

int FUNC_9(php_socket *VAR_5,
         int VAR_6,
         int VAR_7,
         zval *VAR_8)
{
 unsigned int VAR_9;
 void *VAR_10;
 socklen_t VAR_11;
 int VAR_12;
 int VAR_13;

 switch (VAR_7) {
 case 132:
 case 130:






  if (FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8) == VAR_1) {
   return VAR_1;
  } else {
   return VAR_3;
  }

 case 135:
  if (FUNC_7(VAR_8, &VAR_9) == VAR_1) {
   return VAR_1;
  }

  VAR_10 = &VAR_9;
  VAR_11 = sizeof(VAR_9);
  goto dosockopt;

 case 134:
  FUNC_3(VAR_8);
  VAR_12 = (int) FUNC_2(VAR_8) == VAR_2;
  goto ipv6_loop_hops;
 case 136:
  FUNC_4(VAR_8);
  if (FUNC_1(VAR_8) < -1L || FUNC_1(VAR_8) > 255L) {
   FUNC_6(((void*)0), VAR_0,
     "Expected a value between -1 and 255");
   return VAR_1;
  }
  VAR_12 = (int) FUNC_1(VAR_8);
ipv6_loop_hops:
  VAR_10 = &VAR_12;
  VAR_11 = sizeof(VAR_12);
  goto dosockopt;
 }

 return 1;

dosockopt:
 VAR_13 = FUNC_8(VAR_5->bsd_socket, VAR_6, VAR_7, VAR_10, VAR_11);
 if (VAR_13 != 0) {
  FUNC_0(VAR_5, "unable to set socket option", VAR_4);
  return VAR_1;
 }

 return VAR_3;
}
