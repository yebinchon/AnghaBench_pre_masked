
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct list_set {size_t size; } ;
struct ip_set {size_t ext_size; size_t ref; size_t elements; int dsize; struct list_set* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (struct sk_buff*,struct ip_set*) ;
 size_t FUNC_2 (struct list_set const*,int ) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct ip_set *VAR_6, struct sk_buff *VAR_7)
{
 const struct list_set *VAR_8 = VAR_6->data;
 struct nlattr *VAR_9;
 size_t VAR_10 = FUNC_2(VAR_8, VAR_6->dsize) + VAR_6->ext_size;

 VAR_9 = FUNC_4(VAR_7, VAR_1);
 if (!VAR_9)
  goto nla_put_failure;
 if (FUNC_5(VAR_7, VAR_5, FUNC_0(VAR_8->size)) ||
     FUNC_5(VAR_7, VAR_4, FUNC_0(VAR_6->ref)) ||
     FUNC_5(VAR_7, VAR_3, FUNC_0(VAR_10)) ||
     FUNC_5(VAR_7, VAR_2, FUNC_0(VAR_6->elements)))
  goto nla_put_failure;
 if (FUNC_6(FUNC_1(VAR_7, VAR_6)))
  goto nla_put_failure;
 FUNC_3(VAR_7, VAR_9);

 return 0;
nla_put_failure:
 return -VAR_0;
}
