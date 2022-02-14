
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcm_runtime {TYPE_2__* in_urbs; TYPE_1__* out_urbs; } ;
struct TYPE_4__ {int buffer; } ;
struct TYPE_3__ {int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct pcm_runtime *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1->out_urbs[VAR_2].buffer);
  FUNC_0(VAR_1->in_urbs[VAR_2].buffer);
 }
}
