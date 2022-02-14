
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {scalar_t__ revents; int fd; scalar_t__ events; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (struct pollfd*,int,int) ;

__attribute__((used)) static void FUNC_2(int VAR_3, int VAR_4)
{
 struct pollfd VAR_5;
 int VAR_6;

 VAR_5.events = VAR_0;
 VAR_5.revents = 0;
 VAR_5.fd = VAR_3;

 do {
  VAR_6 = FUNC_1(&VAR_5, 1, 10);
  if (VAR_2)
   break;
  if (VAR_6 == -1)
   FUNC_0(1, VAR_1, "poll");
  if (VAR_6 == 0) {
   if (!VAR_4)
    continue;

   VAR_4 -= 10;
   if (VAR_4 <= 0) {
    VAR_2 = 1;
    break;
   }
  }
  if (VAR_5.revents != VAR_0)
   FUNC_0(1, VAR_1, "poll: 0x%x expected 0x%x\n",
     VAR_5.revents, VAR_0);
 } while (!VAR_6);
}
