
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ll {int sll_ifindex; int sll_protocol; int sll_family; int member_0; } ;
typedef int laddr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,void*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(int VAR_4)
{
 struct sockaddr_ll VAR_5 = {0};

 VAR_5.sll_family = VAR_0;
 VAR_5.sll_protocol = FUNC_2(VAR_1);
 VAR_5.sll_ifindex = FUNC_3(VAR_2);
 if (!VAR_5.sll_ifindex)
  FUNC_1(1, VAR_3, "if_nametoindex");

 if (FUNC_0(VAR_4, (void *)&VAR_5, sizeof(VAR_5)))
  FUNC_1(1, VAR_3, "bind");
}
