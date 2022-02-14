
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int member_0; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct pollfd*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(int VAR_3, const bool VAR_4)
{
 if (VAR_4) {
  struct pollfd VAR_5 = {0};
  int VAR_6;

  VAR_5.fd = VAR_3;
  VAR_6 = FUNC_3(&VAR_5, 1, 500);
  if (VAR_6 == 0) {
   if (VAR_0)
    FUNC_2(VAR_2, "poll timeout\n");
  } else if (VAR_6 < 0) {
   FUNC_0(1, VAR_1, "poll");
  }
 }

 FUNC_1(VAR_3);
}
