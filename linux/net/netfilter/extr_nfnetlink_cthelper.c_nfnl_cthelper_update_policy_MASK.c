
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conntrack_helper {int expect_class_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nlattr**,struct nf_conntrack_helper*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nf_conntrack_helper *VAR_5,
           const struct nlattr *VAR_6)
{
 struct nlattr *VAR_7[VAR_2 + 1];
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_2, VAR_6,
       VAR_4,
       ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;

 if (!VAR_7[VAR_3])
  return -VAR_1;

 VAR_8 = FUNC_3(FUNC_1(VAR_7[VAR_3]));
 if (VAR_5->expect_class_max + 1 != VAR_8)
  return -VAR_0;

 return FUNC_0(VAR_7, VAR_5);
}
