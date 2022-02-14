
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int obs_encoder_t ;
struct TYPE_3__ {int encoders_mutex; int first_encoder; } ;
struct TYPE_4__ {TYPE_1__ data; } ;


 int * FUNC_0 (int *,char const*,int *,int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

obs_encoder_t *FUNC_1(const char *VAR_2)
{
 if (!VAR_0)
  return ((void*)0);
 return FUNC_0(&VAR_0->data.first_encoder, VAR_2,
       &VAR_0->data.encoders_mutex,
       VAR_1);
}
