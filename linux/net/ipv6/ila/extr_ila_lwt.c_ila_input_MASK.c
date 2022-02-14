
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ protocol; } ;
struct ila_lwt {int lwt_output; } ;
struct dst_entry {TYPE_1__* lwtstate; } ;
struct TYPE_3__ {int (* orig_input ) (struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ila_lwt* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct sk_buff*,int ,int) ;
 int FUNC_4 (struct sk_buff*) ;
 struct dst_entry* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_2)
{
 struct dst_entry *VAR_3 = FUNC_5(VAR_2);
 struct ila_lwt *VAR_4 = FUNC_1(VAR_3->lwtstate);

 if (VAR_2->protocol != FUNC_0(VAR_1))
  goto drop;

 if (!VAR_4->lwt_output)
  FUNC_3(VAR_2,
     FUNC_2(VAR_3->lwtstate),
     0);

 return VAR_3->lwtstate->orig_input(VAR_2);

drop:
 FUNC_4(VAR_2);
 return -VAR_0;
}
