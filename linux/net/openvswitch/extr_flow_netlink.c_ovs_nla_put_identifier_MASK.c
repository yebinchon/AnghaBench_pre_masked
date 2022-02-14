
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unmasked_key; int ufid; int ufid_len; } ;
struct sw_flow {TYPE_1__ id; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int,struct sk_buff*) ;

int FUNC_3(const struct sw_flow *VAR_2, struct sk_buff *VAR_3)
{
 if (FUNC_1(&VAR_2->id))
  return FUNC_0(VAR_3, VAR_1, VAR_2->id.ufid_len,
          VAR_2->id.ufid);

 return FUNC_2(VAR_2->id.unmasked_key, VAR_2->id.unmasked_key,
          VAR_0, 0, VAR_3);
}
