
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fq_tin {int dummy; } ;
struct txq_info {struct fq_tin tin; } ;
struct sk_buff {int dummy; } ;
struct fq {int lock; } ;
struct ieee80211_local {struct fq fq; } ;


 int VAR_0 ;
 int FUNC_0 (struct fq*,struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct fq*,struct fq_tin*,int ,struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_local *VAR_2,
      struct txq_info *VAR_3,
      struct sk_buff *VAR_4)
{
 struct fq *VAR_5 = &VAR_2->fq;
 struct fq_tin *VAR_6 = &VAR_3->tin;
 u32 VAR_7 = FUNC_0(VAR_5, VAR_4);

 FUNC_2(VAR_4);

 FUNC_3(&VAR_5->lock);
 FUNC_1(VAR_5, VAR_6, VAR_7, VAR_4,
         VAR_1,
         VAR_0);
 FUNC_4(&VAR_5->lock);
}
