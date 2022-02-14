
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct epoll_event {TYPE_1__ data; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int ,int,struct epoll_event*) ;
 int VAR_2 ;
 int FUNC_5 (int,int ,char*) ;
 int FUNC_6 (int*,int,int,int,int) ;
 int FUNC_7 (int,int,int) ;

__attribute__((used)) static void FUNC_8(int *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct epoll_event VAR_7;
 int VAR_8, VAR_9;

 FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_3[0]);

 VAR_8 = FUNC_3(1);
 if (VAR_8 < 0)
  FUNC_5(1, VAR_2, "failed to create epoll");
 for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9) {
  VAR_7.events = VAR_0;
  VAR_7.data.fd = VAR_3[VAR_9];
  if (FUNC_4(VAR_8, VAR_1, VAR_3[VAR_9], &VAR_7))
   FUNC_5(1, VAR_2, "failed to register sock epoll");
 }


 for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9) {
  FUNC_7(VAR_9, VAR_5, VAR_6);
  FUNC_6(VAR_3, VAR_4, VAR_8, VAR_9, VAR_6);
 }


 for (VAR_9 = VAR_4 - 1; VAR_9 >= 0; --VAR_9) {
  FUNC_7(VAR_9, VAR_5, VAR_6);
  FUNC_6(VAR_3, VAR_4, VAR_8, VAR_9, VAR_6);
 }


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 += 2) {
  FUNC_7(VAR_9, VAR_5, VAR_6);
  FUNC_6(VAR_3, VAR_4, VAR_8, VAR_9, VAR_6);
 }


 for (VAR_9 = 1; VAR_9 < VAR_4; VAR_9 += 2) {
  FUNC_7(VAR_9, VAR_5, VAR_6);
  FUNC_6(VAR_3, VAR_4, VAR_8, VAR_9, VAR_6);
 }

 FUNC_2(VAR_8);
 for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9)
  FUNC_2(VAR_3[VAR_9]);
}
