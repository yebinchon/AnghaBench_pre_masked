
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int tx_acked; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct j1939_session {int total_message_size; TYPE_3__ pkt; TYPE_2__ skcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct j1939_session *VAR_3)
{
 struct sk_buff *VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(FUNC_1(), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 if (VAR_3->skcb.addr.type == VAR_2)
  VAR_5 = VAR_3->total_message_size;
 else
  VAR_5 = FUNC_2(VAR_3->pkt.tx_acked * 7,
      VAR_3->total_message_size);

 FUNC_3(VAR_4, VAR_1, VAR_5);

 return VAR_4;
}
