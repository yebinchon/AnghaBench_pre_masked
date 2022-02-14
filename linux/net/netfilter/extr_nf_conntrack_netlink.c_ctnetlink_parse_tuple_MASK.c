
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef size_t u32 ;
struct nlattr {int dummy; } ;
struct nf_conntrack_zone {int dummy; } ;
struct TYPE_4__ {int dir; } ;
struct TYPE_3__ {int l3num; } ;
struct nf_conntrack_tuple {TYPE_2__ dst; TYPE_1__ src; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nlattr*,struct nf_conntrack_tuple*) ;
 int FUNC_1 (struct nlattr*,struct nf_conntrack_tuple*) ;
 int FUNC_2 (struct nlattr*,size_t,struct nf_conntrack_zone*) ;
 int FUNC_3 (struct nf_conntrack_tuple*,int ,int) ;
 int FUNC_4 (struct nlattr**,int ,struct nlattr const* const,int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_5(const struct nlattr * const VAR_9[],
        struct nf_conntrack_tuple *VAR_10, u32 VAR_11,
        u_int8_t VAR_12, struct nf_conntrack_zone *VAR_13)
{
 struct nlattr *VAR_14[VAR_1+1];
 int VAR_15;

 FUNC_3(VAR_10, 0, sizeof(*VAR_10));

 VAR_15 = FUNC_4(VAR_14, VAR_1, VAR_9[VAR_11],
       VAR_8, ((void*)0));
 if (VAR_15 < 0)
  return VAR_15;

 if (!VAR_14[VAR_0])
  return -VAR_5;

 VAR_10->src.l3num = VAR_12;

 VAR_15 = FUNC_0(VAR_14[VAR_0], VAR_10);
 if (VAR_15 < 0)
  return VAR_15;

 if (!VAR_14[VAR_2])
  return -VAR_5;

 VAR_15 = FUNC_1(VAR_14[VAR_2], VAR_10);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_14[VAR_4]) {
  if (!VAR_13)
   return -VAR_5;

  VAR_15 = FUNC_2(VAR_14[VAR_4],
       VAR_11, VAR_13);
  if (VAR_15 < 0)
   return VAR_15;
 }


 if (VAR_11 == VAR_3)
  VAR_10->dst.dir = VAR_7;
 else
  VAR_10->dst.dir = VAR_6;

 return 0;
}
