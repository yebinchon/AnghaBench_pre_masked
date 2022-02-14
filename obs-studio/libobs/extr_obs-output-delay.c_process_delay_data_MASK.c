
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {int (* delay_callback ) (struct obs_output*,int *) ;} ;
struct delay_data {int msg; int ts; int packet; } ;





 int FUNC_0 (struct obs_output*) ;
 int FUNC_1 (struct obs_output*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct obs_output*) ;
 int FUNC_4 (struct obs_output*,int,int ) ;
 int FUNC_5 (struct obs_output*,int *) ;

__attribute__((used)) static inline void FUNC_6(struct obs_output *VAR_0,
          struct delay_data *VAR_1)
{
 switch (VAR_1->msg) {
 case 130:
  if (!FUNC_0(VAR_0) || !FUNC_1(VAR_0))
   FUNC_2(&VAR_1->packet);
  else
   VAR_0->delay_callback(VAR_0, &VAR_1->packet);
  break;
 case 129:
  FUNC_3(VAR_0);
  break;
 case 128:
  FUNC_4(VAR_0, 0, VAR_1->ts);
  break;
 }
}
