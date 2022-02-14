
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct pollfd {int fd; int events; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int ,int ,int*,int*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct pollfd*,int,int ) ;
 int VAR_7 ;
 int FUNC_6 (int,struct sockaddr const*,int) ;

__attribute__((used)) static int FUNC_7(int VAR_8, const struct sockaddr *VAR_9, socklen_t VAR_10) {
 int VAR_11, VAR_12;
 socklen_t VAR_13;
 struct pollfd VAR_14[1];
 FUNC_1();

 VAR_14[0].fd = VAR_8;
 VAR_14[0].events = VAR_3;
 FUNC_2(VAR_8, VAR_1, VAR_2);
 VAR_11 = FUNC_6(VAR_8, VAR_9, VAR_10);
 FUNC_0("\nconnect ret=%d\n", VAR_11);

 if(VAR_11 == -1 && VAR_6 == VAR_0) {
  VAR_11 = FUNC_5(VAR_14, 1, VAR_7);
  FUNC_0("\npoll ret=%d\n", VAR_11);
  if(VAR_11 == 1) {
   VAR_13 = sizeof(socklen_t);
   FUNC_3(VAR_8, VAR_4, VAR_5, &VAR_12, &VAR_13);
   FUNC_0("\nvalue=%d\n", VAR_12);
   if(!VAR_12)
    VAR_11 = 0;
   else
    VAR_11 = -1;
  } else {
   VAR_11 = -1;
  }
 } else {




  if(VAR_11 != 0)
   VAR_11 = -1;
 }

 FUNC_2(VAR_8, VAR_1, !VAR_2);
 return VAR_11;
}
