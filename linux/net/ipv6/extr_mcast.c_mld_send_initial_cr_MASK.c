
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct inet6_dev {int lock; struct ifmcaddr6* mc_list; } ;
struct ifmcaddr6 {int mca_lock; scalar_t__* mca_sfcount; struct ifmcaddr6* next; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,struct ifmcaddr6*,int,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct inet6_dev*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct inet6_dev *VAR_3)
{
 struct sk_buff *VAR_4;
 struct ifmcaddr6 *VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_3))
  return;

 VAR_4 = ((void*)0);
 FUNC_3(&VAR_3->lock);
 for (VAR_5 = VAR_3->mc_list; VAR_5; VAR_5 = VAR_5->next) {
  FUNC_5(&VAR_5->mca_lock);
  if (VAR_5->mca_sfcount[VAR_0])
   VAR_6 = VAR_2;
  else
   VAR_6 = VAR_1;
  VAR_4 = FUNC_0(VAR_4, VAR_5, VAR_6, 0, 0, 1);
  FUNC_6(&VAR_5->mca_lock);
 }
 FUNC_4(&VAR_3->lock);
 if (VAR_4)
  FUNC_2(VAR_4);
}
