
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_mreqn {int imr_ifindex; } ;
typedef int mreq ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ,int ,struct ip_mreqn*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_2, int VAR_3)
{
 struct ip_mreqn VAR_4 = { .imr_ifindex = VAR_3 };
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1, VAR_0, &VAR_4, sizeof(VAR_4));
 if (VAR_5 < 0)
  FUNC_0("setsockopt(IP_MULTICAST_IF)");

 return VAR_5;
}
