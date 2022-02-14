
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_dsp {struct skl_dev* thread_context; } ;
struct TYPE_2__ {scalar_t__* state; } ;
struct skl_d0i3_data {scalar_t__ non_streaming; scalar_t__ streaming; scalar_t__ non_d0i3; } ;
struct skl_dev {TYPE_1__ cores; struct skl_d0i3_data d0i3; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct sst_dsp *VAR_5)
{
 struct skl_dev *VAR_6 = VAR_5->thread_context;
 struct skl_d0i3_data *VAR_7 = &VAR_6->d0i3;

 if (VAR_6->cores.state[VAR_0] != VAR_4)
  return VAR_1;

 if (VAR_7->non_d0i3)
  return VAR_1;
 else if (VAR_7->streaming)
  return VAR_3;
 else if (VAR_7->non_streaming)
  return VAR_2;
 else
  return VAR_1;
}
