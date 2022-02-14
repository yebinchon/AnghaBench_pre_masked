
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {TYPE_1__* dev; } ;
struct TYPE_2__ {int type; int addr_len; } ;


 int FUNC_0 (struct sk_buff*,int,void*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct sk_buff*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct sk_buff *VAR_0, int VAR_1,
       void *VAR_2, u8 VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->dev->addr_len,
     FUNC_1(VAR_0->dev->type));
 FUNC_2(VAR_0->dev, VAR_0, VAR_3);
}
