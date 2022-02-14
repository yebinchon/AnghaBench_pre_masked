
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct inet6_dev {int lock; struct ifmcaddr6* mc_list; int mc_lock; struct ifmcaddr6* mc_tomb; } ;
struct ifmcaddr6 {size_t mca_sfmode; scalar_t__ mca_crcount; int mca_lock; scalar_t__* mca_sfcount; struct ifmcaddr6* next; int idev; int mca_sources; int mca_tomb; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,struct ifmcaddr6*,int,int,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ifmcaddr6*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct inet6_dev *VAR_6)
{
 struct ifmcaddr6 *VAR_7, *VAR_8, *VAR_9;
 struct sk_buff *VAR_10 = ((void*)0);
 int VAR_11, VAR_12;

 FUNC_5(&VAR_6->lock);
 FUNC_7(&VAR_6->mc_lock);


 VAR_8 = ((void*)0);
 for (VAR_7 = VAR_6->mc_tomb; VAR_7; VAR_7 = VAR_9) {
  VAR_9 = VAR_7->next;
  if (VAR_7->mca_sfmode == VAR_1) {
   VAR_11 = VAR_3;
   VAR_12 = VAR_3;
   VAR_10 = FUNC_0(VAR_10, VAR_7, VAR_11, 1, 0, 0);
   VAR_10 = FUNC_0(VAR_10, VAR_7, VAR_12, 1, 1, 0);
  }
  if (VAR_7->mca_crcount) {
   if (VAR_7->mca_sfmode == VAR_0) {
    VAR_11 = VAR_5;
    VAR_10 = FUNC_0(VAR_10, VAR_7, VAR_11, 1, 0, 0);
   }
   VAR_7->mca_crcount--;
   if (VAR_7->mca_crcount == 0) {
    FUNC_3(&VAR_7->mca_tomb);
    FUNC_3(&VAR_7->mca_sources);
   }
  }
  if (VAR_7->mca_crcount == 0 && !VAR_7->mca_tomb &&
      !VAR_7->mca_sources) {
   if (VAR_8)
    VAR_8->next = VAR_9;
   else
    VAR_6->mc_tomb = VAR_9;
   FUNC_1(VAR_7->idev);
   FUNC_2(VAR_7);
  } else
   VAR_8 = VAR_7;
 }
 FUNC_9(&VAR_6->mc_lock);


 for (VAR_7 = VAR_6->mc_list; VAR_7; VAR_7 = VAR_7->next) {
  FUNC_8(&VAR_7->mca_lock);
  if (VAR_7->mca_sfcount[VAR_0]) {
   VAR_11 = VAR_3;
   VAR_12 = VAR_2;
  } else {
   VAR_11 = VAR_2;
   VAR_12 = VAR_3;
  }
  VAR_10 = FUNC_0(VAR_10, VAR_7, VAR_11, 0, 0, 0);
  VAR_10 = FUNC_0(VAR_10, VAR_7, VAR_12, 0, 1, 0);


  if (VAR_7->mca_crcount) {
   if (VAR_7->mca_sfmode == VAR_0)
    VAR_11 = VAR_4;
   else
    VAR_11 = VAR_5;
   VAR_10 = FUNC_0(VAR_10, VAR_7, VAR_11, 0, 0, 0);
   VAR_7->mca_crcount--;
  }
  FUNC_10(&VAR_7->mca_lock);
 }
 FUNC_6(&VAR_6->lock);
 if (!VAR_10)
  return;
 (void) FUNC_4(VAR_10);
}
