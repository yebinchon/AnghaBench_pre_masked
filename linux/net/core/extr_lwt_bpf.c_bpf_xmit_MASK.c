
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct dst_entry {int lwtstate; } ;
struct TYPE_2__ {scalar_t__ prog; } ;
struct bpf_lwt {TYPE_1__ xmit; } ;
typedef int __be16 ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bpf_lwt* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,TYPE_1__*,struct dst_entry*,int ) ;
 struct dst_entry* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_4)
{
 struct dst_entry *VAR_5 = FUNC_4(VAR_4);
 struct bpf_lwt *VAR_6;

 VAR_6 = FUNC_0(VAR_5->lwtstate);
 if (VAR_6->xmit.prog) {
  __be16 VAR_7 = VAR_4->protocol;
  int VAR_8;

  VAR_8 = FUNC_3(VAR_4, &VAR_6->xmit, VAR_5, VAR_0);
  switch (VAR_8) {
  case 129:




   if (VAR_4->protocol != VAR_7) {
    FUNC_2(VAR_4);
    return -VAR_1;
   }



   VAR_8 = FUNC_6(VAR_4);
   if (FUNC_5(VAR_8))
    return VAR_8;

   return VAR_2;
  case 128:
   return VAR_3;
  case 130:
   return FUNC_1(VAR_4);
  default:
   return VAR_8;
  }
 }

 return VAR_2;
}
