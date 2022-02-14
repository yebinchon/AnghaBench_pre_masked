
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conntrack_helper {int expect_class_max; int * expect_policy; } ;
struct nf_conntrack_expect_policy {int timeout; int max_expected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nf_conntrack_expect_policy*) ;
 struct nf_conntrack_expect_policy* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *,struct nf_conntrack_expect_policy*,struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct nlattr *VAR_4[],
        struct nf_conntrack_helper *VAR_5)
{
 struct nf_conntrack_expect_policy *VAR_6;
 struct nf_conntrack_expect_policy *VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_6 = FUNC_1(VAR_5->expect_class_max + 1,
       sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;




 for (VAR_8 = 0; VAR_8 < VAR_5->expect_class_max + 1; VAR_8++) {

  if (!VAR_4[VAR_3 + VAR_8]) {
   VAR_9 = -VAR_0;
   goto err;
  }

  VAR_9 = FUNC_2(&VAR_5->expect_policy[VAR_8],
            &VAR_6[VAR_8],
            VAR_4[VAR_3 + VAR_8]);
  if (VAR_9 < 0)
   goto err;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->expect_class_max + 1; VAR_8++) {
  VAR_7 = (struct nf_conntrack_expect_policy *)
    &VAR_5->expect_policy[VAR_8];
  VAR_7->max_expected = VAR_6->max_expected;
  VAR_7->timeout = VAR_6->timeout;
 }

err:
 FUNC_0(VAR_6);
 return VAR_9;
}
