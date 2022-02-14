
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmsg {int dummy; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct nlattr {int dummy; } ;
typedef int (* libbpf_dump_nlmsg_t ) (void*,struct tcmsg*,struct nlattr**) ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct tcmsg* FUNC_1 (struct nlmsghdr*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct nlattr**,int ,struct nlattr*,int,int *) ;

__attribute__((used)) static int FUNC_4(struct nlmsghdr *VAR_2,
         libbpf_dump_nlmsg_t VAR_3,
         void *VAR_4)
{
 struct nlattr *VAR_5[VAR_1 + 1], *VAR_6;
 struct tcmsg *VAR_7 = FUNC_1(VAR_2);
 int VAR_8;

 VAR_8 = VAR_2->nlmsg_len - FUNC_2(sizeof(*VAR_7));
 VAR_6 = (struct nlattr *) ((void *) VAR_7 + FUNC_0(sizeof(*VAR_7)));
 if (FUNC_3(VAR_5, VAR_1, VAR_6, VAR_8, ((void*)0)) != 0)
  return -VAR_0;

 return VAR_3(VAR_4, VAR_7, VAR_5);
}
