
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct sk_buff*,int const,int) ;
 int FUNC_3 (struct sk_buff*,struct sk_buff*,int const,int) ;
 int FUNC_4 (struct sk_buff*,struct sk_buff*,int ) ;

void FUNC_5(struct sk_buff *VAR_1, struct sk_buff *VAR_2, const u32 VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_2)->tx_flags |= FUNC_1(VAR_1)->tx_flags &
          VAR_0;
 FUNC_4(VAR_2, VAR_1, 0);
 if (VAR_3 < VAR_4)
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
}
