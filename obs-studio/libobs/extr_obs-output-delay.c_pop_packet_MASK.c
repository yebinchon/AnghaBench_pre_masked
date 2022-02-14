
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ size; } ;
struct obs_output {int delay_cur_flags; scalar_t__ active_delay_ns; int delay_mutex; TYPE_1__ delay_data; scalar_t__ reconnecting; } ;
struct delay_data {scalar_t__ ts; } ;
typedef int dd ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct delay_data*,int) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (struct obs_output*,struct delay_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline bool FUNC_5(struct obs_output *VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3;
 struct delay_data VAR_4;
 bool VAR_5 = 0;
 bool VAR_6;



 VAR_6 = (VAR_1->delay_cur_flags & VAR_0) != 0;

 FUNC_3(&VAR_1->delay_mutex);

 if (VAR_1->delay_data.size) {
  FUNC_0(&VAR_1->delay_data, &VAR_4, sizeof(VAR_4));
  VAR_3 = (VAR_2 - VAR_4.ts);

  if (VAR_6 && VAR_1->reconnecting) {
   VAR_1->active_delay_ns = VAR_3;

  } else if (VAR_3 > VAR_1->active_delay_ns) {
   FUNC_1(&VAR_1->delay_data, ((void*)0),
         sizeof(VAR_4));
   VAR_5 = 1;
  }
 }

 FUNC_4(&VAR_1->delay_mutex);



 if (VAR_5)
  FUNC_2(VAR_1, &VAR_4);

 return VAR_5;
}
