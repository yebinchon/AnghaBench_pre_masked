
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct pollfd {int dummy; } ;
typedef int nfds_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (struct pollfd*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pollfd *VAR_2, nfds_t VAR_3, int VAR_4) {
 int VAR_5;
 int VAR_6 = VAR_4;
 int VAR_7 = 0;

 struct timeval VAR_8;
 struct timeval VAR_9;

 FUNC_0(&VAR_8, ((void*)0));

 do {

  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_6);
  FUNC_0(&VAR_9, ((void*)0));
  VAR_7 = ((VAR_9.tv_sec - VAR_8.tv_sec) * 1000 + (VAR_9.tv_usec - VAR_8.tv_usec) / 1000);

  VAR_6 = VAR_4 - VAR_7;
 } while(VAR_5 == -1 && VAR_1 == VAR_0 && VAR_6 > 0);



 return VAR_5;
}
