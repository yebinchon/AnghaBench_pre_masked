
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_2__ {int l3num; } ;
struct nf_conntrack_tuple {TYPE_1__ src; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct nlattr**,struct nf_conntrack_tuple*) ;
 int FUNC_1 (struct nlattr**,struct nf_conntrack_tuple*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int *,int *) ;
 int FUNC_3 (struct nlattr*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct nlattr *VAR_2,
        struct nf_conntrack_tuple *VAR_3)
{
 struct nlattr *VAR_4[VAR_0+1];
 int VAR_5 = 0;

 VAR_5 = FUNC_2(VAR_4, VAR_0, VAR_2, ((void*)0), ((void*)0));
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_2, VAR_0,
          VAR_1, ((void*)0));
 if (VAR_5)
  return VAR_5;

 switch (VAR_3->src.l3num) {
 case 129:
  VAR_5 = FUNC_0(VAR_4, VAR_3);
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_4, VAR_3);
  break;
 }

 return VAR_5;
}
