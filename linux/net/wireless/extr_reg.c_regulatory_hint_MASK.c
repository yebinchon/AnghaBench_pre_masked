
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regulatory_flags; } ;
struct regulatory_request {char* alpha2; int initiator; int wiphy_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct wiphy*) ;
 struct regulatory_request* FUNC_2 (int,int ) ;
 int FUNC_3 (struct regulatory_request*) ;
 int FUNC_4 () ;

int FUNC_5(struct wiphy *VAR_5, const char *VAR_6)
{
 struct regulatory_request *VAR_7;

 if (FUNC_0(!VAR_6 || !VAR_5))
  return -VAR_0;

 VAR_5->regulatory_flags &= ~VAR_4;

 VAR_7 = FUNC_2(sizeof(struct regulatory_request), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->wiphy_idx = FUNC_1(VAR_5);

 VAR_7->alpha2[0] = VAR_6[0];
 VAR_7->alpha2[1] = VAR_6[1];
 VAR_7->initiator = VAR_3;


 FUNC_4();

 FUNC_3(VAR_7);

 return 0;
}
