
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mld_msg {int mld_mca; } ;
struct mld2_query {int dummy; } ;
struct TYPE_2__ {int daddr; int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_2)
{
 unsigned int VAR_3 = FUNC_5(VAR_2);
 struct mld_msg *VAR_4;
 unsigned int VAR_5;


 if (!(FUNC_2(&FUNC_3(VAR_2)->saddr) & VAR_1))
  return -VAR_0;


 if (VAR_3 != sizeof(struct mld_msg)) {

  if (VAR_3 < sizeof(struct mld2_query))
   return -VAR_0;

  VAR_5 = FUNC_7(VAR_2) + sizeof(struct mld2_query);
  if (!FUNC_4(VAR_2, VAR_5))
   return -VAR_0;
 }

 VAR_4 = (struct mld_msg *)FUNC_6(VAR_2);




 if (FUNC_0(&VAR_4->mld_mca) &&
     !FUNC_1(&FUNC_3(VAR_2)->daddr))
  return -VAR_0;

 return 0;
}
