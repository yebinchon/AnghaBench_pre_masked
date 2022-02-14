
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int signals; } ;
struct obs_output {TYPE_1__ context; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int *,char const*,int *,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct obs_output *VAR_2, const char *VAR_3,
     obs_data_t *VAR_4, obs_data_t *VAR_5)
{
 if (!FUNC_0(&VAR_2->context, VAR_0,
       VAR_4, VAR_3, VAR_5, 0))
  return 0;

 FUNC_1(VAR_2->context.signals, VAR_1);
 return 1;
}
