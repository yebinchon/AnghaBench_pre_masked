
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ socklen_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int,struct sockaddr const*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,void const*,size_t,int,struct sockaddr const*,scalar_t__) ;

ssize_t FUNC_4(int VAR_3, const void *VAR_4, size_t VAR_5, int VAR_6,
        const struct sockaddr *VAR_7, socklen_t VAR_8) {
 FUNC_0();
 FUNC_1();
 if (VAR_6 & VAR_1) {
  if (!FUNC_2(VAR_3, VAR_7, VAR_8) && VAR_2 != VAR_0) {
   return -1;
  }
  VAR_7 = ((void*)0);
  VAR_8 = 0;
  VAR_6 &= ~VAR_1;
 }
 return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
