
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct datalink_proto {int type; } ;
struct TYPE_4__ {int lsap; } ;
struct TYPE_5__ {TYPE_1__ laddr; } ;


 int FUNC_0 (TYPE_2__*,struct sk_buff*,int *,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct datalink_proto *VAR_1,
   struct sk_buff *VAR_2, u8 *VAR_3)
{
 FUNC_1(FUNC_2(VAR_2, 5), VAR_1->type, 5);
 FUNC_0(VAR_0, VAR_2, VAR_3, VAR_0->laddr.lsap);
 return 0;
}
