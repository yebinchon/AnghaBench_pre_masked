
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; } ;
struct seg6_local_lwt {struct seg6_action_desc* desc; } ;
struct seg6_action_desc {int (* input ) (struct sk_buff*,struct seg6_local_lwt*) ;} ;
struct dst_entry {int lwtstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct seg6_local_lwt* FUNC_2 (int ) ;
 struct dst_entry* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct seg6_local_lwt*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2)
{
 struct dst_entry *VAR_3 = FUNC_3(VAR_2);
 struct seg6_action_desc *VAR_4;
 struct seg6_local_lwt *VAR_5;

 if (VAR_2->protocol != FUNC_0(VAR_1)) {
  FUNC_1(VAR_2);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_3->lwtstate);
 VAR_4 = VAR_5->desc;

 return VAR_4->input(VAR_2, VAR_5);
}
