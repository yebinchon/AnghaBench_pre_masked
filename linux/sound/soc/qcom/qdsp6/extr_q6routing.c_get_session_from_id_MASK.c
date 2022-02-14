
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session_data {int fedai_id; } ;
struct msm_routing_data {struct session_data* sessions; } ;


 int VAR_0 ;

__attribute__((used)) static struct session_data *FUNC_0(struct msm_routing_data *VAR_1,
      int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2 == VAR_1->sessions[VAR_3].fedai_id)
   return &VAR_1->sessions[VAR_3];
 }

 return ((void*)0);
}
