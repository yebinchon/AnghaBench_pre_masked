
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conntrack_expect_policy {scalar_t__ max_expected; void* timeout; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 scalar_t__ FUNC_2 (struct nlattr*,int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(const struct nf_conntrack_expect_policy *VAR_8,
    struct nf_conntrack_expect_policy *VAR_9,
    const struct nlattr *VAR_10)
{
 struct nlattr *VAR_11[VAR_4 + 1];
 int VAR_12;

 VAR_12 = FUNC_1(VAR_11, VAR_4, VAR_10,
       VAR_7, ((void*)0));
 if (VAR_12 < 0)
  return VAR_12;

 if (!VAR_11[VAR_5] ||
     !VAR_11[VAR_2] ||
     !VAR_11[VAR_3])
  return -VAR_1;

 if (FUNC_2(VAR_11[VAR_5], VAR_8->name))
  return -VAR_0;

 VAR_9->max_expected =
  FUNC_3(FUNC_0(VAR_11[VAR_2]));
 if (VAR_9->max_expected > VAR_6)
  return -VAR_1;

 VAR_9->timeout =
  FUNC_3(FUNC_0(VAR_11[VAR_3]));

 return 0;
}
