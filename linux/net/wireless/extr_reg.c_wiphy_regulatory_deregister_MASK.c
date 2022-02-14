
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regd; } ;
struct regulatory_request {int country_ie_env; int wiphy_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 struct regulatory_request* FUNC_1 () ;
 int FUNC_2 (struct wiphy*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wiphy*) ;
 int VAR_2 ;
 struct wiphy* FUNC_5 (int ) ;

void FUNC_6(struct wiphy *VAR_3)
{
 struct wiphy *VAR_4 = ((void*)0);
 struct regulatory_request *VAR_5;

 VAR_5 = FUNC_1();

 if (!FUNC_4(VAR_3))
  VAR_2--;

 FUNC_3(FUNC_2(VAR_3));
 FUNC_0(VAR_3->regd, ((void*)0));

 if (VAR_5)
  VAR_4 = FUNC_5(VAR_5->wiphy_idx);

 if (!VAR_4 || VAR_4 != VAR_3)
  return;

 VAR_5->wiphy_idx = VAR_1;
 VAR_5->country_ie_env = VAR_0;
}
