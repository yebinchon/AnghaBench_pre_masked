
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
 size_t FUNC_1 (struct nlattr*) ;
 struct nlattr* FUNC_2 (struct nlmsghdr*,int,int ) ;
 int FUNC_3 (char*) ;

const void *FUNC_4(struct sk_buff *VAR_1, size_t *VAR_2)
{
 struct nlmsghdr *VAR_3 = (void *) VAR_1->head;
 struct nlattr *VAR_4;

 VAR_4 = FUNC_2(VAR_3, sizeof(struct genlmsghdr),
         VAR_0);
 if (VAR_4 == ((void*)0)) {
  FUNC_3("Cannot find attribute WIMAX_GNL_MSG_DATA\n");
  return ((void*)0);
 }
 *VAR_2 = FUNC_1(VAR_4);
 return FUNC_0(VAR_4);
}
