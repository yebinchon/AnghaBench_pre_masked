
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_4__ {int protonum; } ;
struct TYPE_3__ {int l3num; } ;
struct nf_conntrack_tuple {TYPE_2__ dst; TYPE_1__ src; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nf_conntrack_tuple*,int ,int) ;
 int VAR_4 ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct nf_conntrack_tuple *VAR_5,
     const struct nlattr *VAR_6)
{
 int VAR_7;
 struct nlattr *VAR_8[VAR_3+1];

 VAR_7 = FUNC_3(VAR_8, VAR_3, VAR_6,
       VAR_4, ((void*)0));
 if (VAR_7 < 0)
  return VAR_7;

 if (!VAR_8[VAR_1] || !VAR_8[VAR_2])
  return -VAR_0;


 FUNC_0(VAR_5, 0, sizeof(struct nf_conntrack_tuple));

 VAR_5->src.l3num = FUNC_4(FUNC_1(VAR_8[VAR_1]));
 VAR_5->dst.protonum = FUNC_2(VAR_8[VAR_2]);

 return 0;
}
