
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sessions; } ;
struct TYPE_3__ {int port_id; int fedai_id; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_soc_component *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_1->sessions[VAR_3].port_id = -1;
  VAR_1->sessions[VAR_3].fedai_id = -1;
 }

 return 0;
}
