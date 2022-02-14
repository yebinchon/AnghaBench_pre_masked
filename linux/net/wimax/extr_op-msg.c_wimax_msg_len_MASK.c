
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ head; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct genlmsghdr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nlattr*) ;
 struct nlattr* FUNC_1 (struct nlmsghdr*,int,int ) ;
 int FUNC_2 (char*) ;

ssize_t FUNC_3(struct sk_buff *VAR_2)
{
 struct nlmsghdr *VAR_3 = (void *) VAR_2->head;
 struct nlattr *VAR_4;

 VAR_4 = FUNC_1(VAR_3, sizeof(struct genlmsghdr),
         VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_2("Cannot find attribute WIMAX_GNL_MSG_DATA\n");
  return -VAR_0;
 }
 return FUNC_0(VAR_4);
}
