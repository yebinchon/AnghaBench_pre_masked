
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_dump {int emit_queue_cnt; int * emit_queue; TYPE_1__* type_states; void* cached_names; int btf; } ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {int emit_state; int order_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct btf_dump*,int ,int ) ;
 int FUNC_2 (struct btf_dump*) ;
 int FUNC_3 (struct btf_dump*,scalar_t__,int) ;
 void* FUNC_4 (scalar_t__,int) ;

int FUNC_5(struct btf_dump *VAR_4, __u32 VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_5 > FUNC_0(VAR_4->btf))
  return -VAR_0;


 if (!VAR_4->type_states) {
  VAR_4->type_states = FUNC_4(1 + FUNC_0(VAR_4->btf),
     sizeof(VAR_4->type_states[0]));
  if (!VAR_4->type_states)
   return -VAR_2;
  VAR_4->cached_names = FUNC_4(1 + FUNC_0(VAR_4->btf),
      sizeof(VAR_4->cached_names[0]));
  if (!VAR_4->cached_names)
   return -VAR_2;


  VAR_4->type_states[0].order_state = VAR_3;
  VAR_4->type_states[0].emit_state = VAR_1;


  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6)
   return VAR_6;
 }

 VAR_4->emit_queue_cnt = 0;
 VAR_6 = FUNC_3(VAR_4, VAR_5, 0);
 if (VAR_6 < 0)
  return VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_4->emit_queue_cnt; VAR_7++)
  FUNC_1(VAR_4, VAR_4->emit_queue[VAR_7], 0 );

 return 0;
}
