
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_dpipe_dump_ctx {int hdr; int skb; int nest; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct devlink_dpipe_dump_ctx *VAR_0)
{
 FUNC_1(VAR_0->skb, VAR_0->nest);
 FUNC_0(VAR_0->skb, VAR_0->hdr);
 return 0;
}
