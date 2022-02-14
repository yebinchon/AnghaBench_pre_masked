
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int net; } ;
struct nf_queue_entry {int skb; TYPE_1__ state; } ;
struct nf_ct_hook {int (* update ) (int ,int ) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nf_queue_entry*,unsigned int) ;
 struct nf_ct_hook* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct nf_queue_entry *VAR_5, unsigned int VAR_6)
{
 struct nf_ct_hook *VAR_7;
 int VAR_8;

 if (VAR_6 == VAR_0 ||
     VAR_6 == VAR_2 ||
     VAR_6 == VAR_3) {
  FUNC_2();
  VAR_7 = FUNC_1(VAR_4);
  if (VAR_7) {
   VAR_8 = VAR_7->update(VAR_5->state.net, VAR_5->skb);
   if (VAR_8 < 0)
    VAR_6 = VAR_1;
  }
  FUNC_3();
 }
 FUNC_0(VAR_5, VAR_6);
}
