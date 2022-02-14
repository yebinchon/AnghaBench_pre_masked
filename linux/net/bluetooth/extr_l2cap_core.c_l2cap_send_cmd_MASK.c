
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int priority; } ;
struct l2cap_conn {int hchan; TYPE_1__* hcon; } ;
struct TYPE_4__ {int force_active; } ;
struct TYPE_3__ {scalar_t__ type; int hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_3 (struct l2cap_conn*,int ,int ,int ,void*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct l2cap_conn *VAR_5, u8 VAR_6, u8 VAR_7, u16 VAR_8,
      void *VAR_9)
{
 struct sk_buff *VAR_10 = FUNC_3(VAR_5, VAR_7, VAR_6, VAR_8, VAR_9);
 u8 VAR_11;

 FUNC_0("code 0x%2.2x", VAR_7);

 if (!VAR_10)
  return;



 if (FUNC_4(VAR_5->hcon->hdev) ||
     VAR_5->hcon->type == VAR_4)
  VAR_11 = VAR_1;
 else
  VAR_11 = VAR_0;

 FUNC_1(VAR_10)->force_active = VAR_2;
 VAR_10->priority = VAR_3;

 FUNC_2(VAR_5->hchan, VAR_10, VAR_11);
}
