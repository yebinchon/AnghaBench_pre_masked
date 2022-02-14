
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; int revents; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pollfd*,int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_3)
{
 int VAR_4 = -1;
 struct pollfd VAR_5 = {
  .fd = VAR_3,
  .events = VAR_1,
 };

 while (1) {
  VAR_4 = FUNC_1(&VAR_5, 1, 10000);

  if (VAR_4 == -1) {
   if (VAR_2 == VAR_0)
    continue;
   FUNC_0("Error: poll() failed\n");
   break;
  }

  if (VAR_4 > 0 && VAR_5.revents & VAR_1) {
   VAR_4 = 0;
   break;
  }
 }

 return VAR_4;
}
