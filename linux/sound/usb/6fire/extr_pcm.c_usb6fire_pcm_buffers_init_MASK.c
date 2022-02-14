
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcm_runtime {TYPE_2__* in_urbs; TYPE_1__* out_urbs; } ;
struct TYPE_4__ {void* buffer; } ;
struct TYPE_3__ {void* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct pcm_runtime *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5->out_urbs[VAR_6].buffer = FUNC_0(VAR_2,
       VAR_3,
       VAR_1);
  if (!VAR_5->out_urbs[VAR_6].buffer)
   return -VAR_0;
  VAR_5->in_urbs[VAR_6].buffer = FUNC_0(VAR_2,
      VAR_3,
      VAR_1);
  if (!VAR_5->in_urbs[VAR_6].buffer)
   return -VAR_0;
 }
 return 0;
}
