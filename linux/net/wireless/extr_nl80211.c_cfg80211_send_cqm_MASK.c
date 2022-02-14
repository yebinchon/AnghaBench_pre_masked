
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct cfg80211_registered_device {int wiphy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_2, gfp_t VAR_3)
{
 void **VAR_4 = (void **)VAR_2->cb;
 struct cfg80211_registered_device *VAR_5 = VAR_4[2];

 FUNC_3(VAR_2, VAR_4[1]);
 FUNC_0(VAR_2, VAR_4[0]);

 FUNC_2(VAR_2->cb, 0, sizeof(VAR_2->cb));

 FUNC_1(&VAR_1, FUNC_4(&VAR_5->wiphy), VAR_2, 0,
    VAR_0, VAR_3);
}
