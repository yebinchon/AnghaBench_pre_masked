
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conntrack_expect_policy {scalar_t__ max_expected; void* timeout; int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 int FUNC_2 (int ,struct nlattr*,int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct nf_conntrack_expect_policy *VAR_8,
       const struct nlattr *VAR_9)
{
 int VAR_10;
 struct nlattr *VAR_11[VAR_3+1];

 VAR_10 = FUNC_1(VAR_11, VAR_3, VAR_9,
       VAR_7, ((void*)0));
 if (VAR_10 < 0)
  return VAR_10;

 if (!VAR_11[VAR_4] ||
     !VAR_11[VAR_1] ||
     !VAR_11[VAR_2])
  return -VAR_0;

 FUNC_2(VAR_8->name,
      VAR_11[VAR_4], VAR_6);
 VAR_8->max_expected =
  FUNC_3(FUNC_0(VAR_11[VAR_1]));
 if (VAR_8->max_expected > VAR_5)
  return -VAR_0;

 VAR_8->timeout =
  FUNC_3(FUNC_0(VAR_11[VAR_2]));

 return 0;
}
