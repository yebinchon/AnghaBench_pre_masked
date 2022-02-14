
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_7__ {int in6; } ;
struct TYPE_8__ {TYPE_3__ u3; } ;
struct TYPE_5__ {int in6; } ;
struct TYPE_6__ {TYPE_1__ u3; } ;
struct nf_conntrack_tuple {TYPE_4__ dst; TYPE_2__ src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_3,
    const struct nf_conntrack_tuple *VAR_4)
{
 if (FUNC_0(VAR_3, VAR_1, &VAR_4->src.u3.in6) ||
     FUNC_0(VAR_3, VAR_0, &VAR_4->dst.u3.in6))
  return -VAR_2;
 return 0;
}
