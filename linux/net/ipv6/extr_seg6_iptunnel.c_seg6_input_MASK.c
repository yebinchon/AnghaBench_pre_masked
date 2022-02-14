
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct seg6_lwt {int cache; } ;
struct dst_entry {int dev; int error; int lwtstate; } ;
struct TYPE_2__ {int saddr; } ;


 int FUNC_0 (int ) ;
 struct dst_entry* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct dst_entry*,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct sk_buff*) ;
 struct seg6_lwt* FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 struct dst_entry* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,struct dst_entry*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_0)
{
 struct dst_entry *VAR_1 = FUNC_12(VAR_0);
 struct dst_entry *VAR_2 = ((void*)0);
 struct seg6_lwt *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_9(VAR_0);
 if (FUNC_15(VAR_4)) {
  FUNC_6(VAR_0);
  return VAR_4;
 }

 VAR_3 = FUNC_10(VAR_1->lwtstate);

 FUNC_7();
 VAR_2 = FUNC_1(&VAR_3->cache);
 FUNC_8();

 FUNC_13(VAR_0);

 if (!VAR_2) {
  FUNC_4(VAR_0);
  VAR_2 = FUNC_12(VAR_0);
  if (!VAR_2->error) {
   FUNC_7();
   FUNC_2(&VAR_3->cache, VAR_2,
       &FUNC_5(VAR_0)->saddr);
   FUNC_8();
  }
 } else {
  FUNC_14(VAR_0, VAR_2);
 }

 VAR_4 = FUNC_11(VAR_0, FUNC_0(VAR_2->dev));
 if (FUNC_15(VAR_4))
  return VAR_4;

 return FUNC_3(VAR_0);
}
