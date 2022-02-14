
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_actions {scalar_t__ actions_len; } ;


 int VAR_0 ;
 struct sw_flow_actions* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct sw_flow_actions* FUNC_2 (int,int ) ;

__attribute__((used)) static struct sw_flow_actions *FUNC_3(int VAR_3)
{
 struct sw_flow_actions *VAR_4;

 FUNC_1(VAR_3 > VAR_2);

 VAR_4 = FUNC_2(sizeof(*VAR_4) + VAR_3, VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->actions_len = 0;
 return VAR_4;
}
