
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* codecs; TYPE_1__* cpus; } ;
struct TYPE_5__ {int of_node; } ;
struct TYPE_4__ {int of_node; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
  FUNC_0(VAR_0[VAR_1].cpus->of_node);
  FUNC_0(VAR_0[VAR_1].codecs->of_node);
 }
}
