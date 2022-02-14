
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; int revents; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (struct pollfd*,int,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_2, int VAR_3)
{
 struct pollfd VAR_4;
 int VAR_5;

 VAR_4.events = VAR_3;
 VAR_4.revents = 0;
 VAR_4.fd = VAR_2;

 VAR_5 = FUNC_1(&VAR_4, 1, VAR_0);
 if (VAR_5 == -1)
  FUNC_0(1, VAR_1, "poll");

 return VAR_5 && (VAR_4.revents & VAR_3);
}
