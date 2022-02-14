
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {char* alpha2; int wiphy_idx; int initiator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct regulatory_request* FUNC_0 (int,int ) ;
 int FUNC_1 (struct regulatory_request*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_4)
{
 struct regulatory_request *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct regulatory_request), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->alpha2[0] = VAR_4[0];
 VAR_5->alpha2[1] = VAR_4[1];
 VAR_5->initiator = VAR_2;
 VAR_5->wiphy_idx = VAR_3;

 FUNC_1(VAR_5);

 return 0;
}
