
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ipv6_pinfo {int ipv6_fl_list; } ;
struct ipv6_fl_socklist {int fl; int next; } ;


 int FUNC_0 (int ) ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 int VAR_0 ;
 int FUNC_2 (struct ipv6_fl_socklist*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 struct ipv6_fl_socklist* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct sock *VAR_2)
{
 struct ipv6_pinfo *VAR_3 = FUNC_1(VAR_2);
 struct ipv6_fl_socklist *VAR_4;

 if (!FUNC_4(VAR_3->ipv6_fl_list))
  return;

 FUNC_6(&VAR_0);
 while ((VAR_4 = FUNC_5(VAR_3->ipv6_fl_list,
      FUNC_3(&VAR_0))) != ((void*)0)) {
  VAR_3->ipv6_fl_list = VAR_4->next;
  FUNC_7(&VAR_0);

  FUNC_0(VAR_4->fl);
  FUNC_2(VAR_4, VAR_1);

  FUNC_6(&VAR_0);
 }
 FUNC_7(&VAR_0);
}
