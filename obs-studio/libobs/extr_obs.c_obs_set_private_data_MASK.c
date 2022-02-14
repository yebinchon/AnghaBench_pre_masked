
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int obs_data_t ;
struct TYPE_3__ {int private_data; } ;
struct TYPE_4__ {TYPE_1__ data; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(obs_data_t *VAR_1)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0->data.private_data);
 if (VAR_1)
  FUNC_0(VAR_0->data.private_data, VAR_1);
}
