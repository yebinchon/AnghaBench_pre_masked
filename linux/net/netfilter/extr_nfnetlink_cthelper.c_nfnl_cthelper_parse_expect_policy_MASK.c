
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conntrack_helper {unsigned int expect_class_max; struct nf_conntrack_expect_policy* expect_policy; } ;
struct nf_conntrack_expect_policy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 unsigned int VAR_7 ;
 struct nf_conntrack_expect_policy* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (struct nf_conntrack_expect_policy*) ;
 int FUNC_2 (struct nf_conntrack_expect_policy*,struct nlattr*) ;
 int VAR_8 ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct nf_conntrack_helper *VAR_9,
      const struct nlattr *VAR_10)
{
 int VAR_11, VAR_12;
 struct nf_conntrack_expect_policy *VAR_13;
 struct nlattr *VAR_14[VAR_5+1];
 unsigned int VAR_15;

 VAR_12 = FUNC_4(VAR_14, VAR_5, VAR_10,
       VAR_8,
       ((void*)0));
 if (VAR_12 < 0)
  return VAR_12;

 if (!VAR_14[VAR_6])
  return -VAR_0;

 VAR_15 = FUNC_5(FUNC_3(VAR_14[VAR_6]));
 if (VAR_15 == 0)
  return -VAR_0;
 if (VAR_15 > VAR_7)
  return -VAR_2;

 VAR_13 = FUNC_0(VAR_15,
    sizeof(struct nf_conntrack_expect_policy),
    VAR_3);
 if (VAR_13 == ((void*)0))
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11++) {
  if (!VAR_14[VAR_4+VAR_11])
   goto err;

  VAR_12 = FUNC_2(&VAR_13[VAR_11],
        VAR_14[VAR_4+VAR_11]);
  if (VAR_12 < 0)
   goto err;
 }

 VAR_9->expect_class_max = VAR_15 - 1;
 VAR_9->expect_policy = VAR_13;
 return 0;
err:
 FUNC_1(VAR_13);
 return -VAR_0;
}
