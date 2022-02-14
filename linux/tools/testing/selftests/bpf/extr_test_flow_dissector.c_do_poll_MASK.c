
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; short events; int revents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*,...) ;
 int FUNC_1 (struct pollfd*,int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_2, short VAR_3, int VAR_4)
{
 struct pollfd VAR_5;
 int VAR_6;

 VAR_5.fd = VAR_2;
 VAR_5.events = VAR_3;

 VAR_6 = FUNC_1(&VAR_5, 1, VAR_4);
 if (VAR_6 == -1)
  FUNC_0(1, VAR_1, "poll");
 if (VAR_6 && !(VAR_5.revents & VAR_0))
  FUNC_0(1, VAR_1, "poll: unexpected event 0x%x\n", VAR_5.revents);

 return VAR_6;
}
