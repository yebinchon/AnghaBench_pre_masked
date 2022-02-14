
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; int revents; } ;


 int VAR_0 ;
 int FUNC_0 (struct pollfd*,int,int ) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(int VAR_2, char *VAR_3, size_t VAR_4) {
 int VAR_5;
 size_t VAR_6;
 struct pollfd VAR_7[1];

 VAR_7[0].fd = VAR_2;
 VAR_7[0].events = VAR_0;
 for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_7[0].revents = 0;
  VAR_5 = FUNC_0(VAR_7, 1, VAR_1);
  if(VAR_5 != 1 || !(VAR_7[0].revents & VAR_0) || 1 != FUNC_1(VAR_2, &VAR_3[VAR_6], 1))
   return -1;
 }
 return (int) VAR_4;
}
