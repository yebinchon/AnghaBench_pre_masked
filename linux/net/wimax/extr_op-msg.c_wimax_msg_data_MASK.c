
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ head; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct genlmsghdr {int dummy; } ;


 int VAR_0 ;
 void const* FUNC_0 (struct nlattr*) ;
 struct nlattr* FUNC_1 (struct nlmsghdr*,int,int ) ;
 int FUNC_2 (char*) ;

const void *FUNC_3(struct sk_buff *VAR_1)
{
 struct nlmsghdr *VAR_2 = (void *) VAR_1->head;
 struct nlattr *VAR_3;

 VAR_3 = FUNC_1(VAR_2, sizeof(struct genlmsghdr),
         VAR_0);
 if (VAR_3 == ((void*)0)) {
  FUNC_2("Cannot find attribute WIMAX_GNL_MSG_DATA\n");
  return ((void*)0);
 }
 return FUNC_0(VAR_3);
}
