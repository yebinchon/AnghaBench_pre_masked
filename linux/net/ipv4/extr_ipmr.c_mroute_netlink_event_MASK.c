
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct mr_table {int maxvif; int net; } ;
struct TYPE_2__ {scalar_t__ mfc_parent; } ;
struct mfc_cache {TYPE_1__ _c; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mr_table*,struct sk_buff*,int ,int ,struct mfc_cache*,int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int,int ) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 struct net* FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_6 (struct net*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct mr_table *VAR_4, struct mfc_cache *VAR_5,
     int VAR_6)
{
 struct net *VAR_7 = FUNC_4(&VAR_4->net);
 struct sk_buff *VAR_8;
 int VAR_9 = -VAR_0;

 VAR_8 = FUNC_3(FUNC_2(VAR_5->_c.mfc_parent >= VAR_2,
           VAR_4->maxvif),
   VAR_1);
 if (!VAR_8)
  goto errout;

 VAR_9 = FUNC_0(VAR_4, VAR_8, 0, 0, VAR_5, VAR_6, 0);
 if (VAR_9 < 0)
  goto errout;

 FUNC_5(VAR_8, VAR_7, 0, VAR_3, ((void*)0), VAR_1);
 return;

errout:
 FUNC_1(VAR_8);
 if (VAR_9 < 0)
  FUNC_6(VAR_7, VAR_3, VAR_9);
}
