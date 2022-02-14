
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int dummy; } ;
struct nl_info {unsigned int portid; struct nlmsghdr* nlh; } ;
struct net {int dummy; } ;
struct mpls_route {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,unsigned int,struct mpls_route*,struct nlmsghdr*,struct net*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct net *VAR_4, unsigned VAR_5,
         struct mpls_route *VAR_6, struct mpls_route *VAR_7,
         const struct nl_info *VAR_8)
{
 struct nlmsghdr *VAR_9 = VAR_8 ? VAR_8->nlh : ((void*)0);
 unsigned VAR_10 = VAR_8 ? VAR_8->portid : 0;
 int VAR_11 = VAR_7 ? VAR_3 : VAR_2;
 struct mpls_route *VAR_12 = VAR_7 ? VAR_7 : VAR_6;
 unsigned VAR_13 = (VAR_6 && VAR_7) ? VAR_1 : 0;

 if (VAR_12 && (VAR_5 >= VAR_0))
  FUNC_0(VAR_11, VAR_5, VAR_12, VAR_9, VAR_4, VAR_10, VAR_13);
}
