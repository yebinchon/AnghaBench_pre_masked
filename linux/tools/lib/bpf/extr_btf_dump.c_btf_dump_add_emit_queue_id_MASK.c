
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_dump {int emit_queue_cnt; int emit_queue_cap; int * emit_queue; } ;
typedef int new_queue ;
typedef int __u32 ;


 int VAR_0 ;
 size_t FUNC_0 (int,int) ;
 int * FUNC_1 (int *,size_t) ;

__attribute__((used)) static int FUNC_2(struct btf_dump *VAR_1, __u32 VAR_2)
{
 __u32 *VAR_3;
 size_t VAR_4;

 if (VAR_1->emit_queue_cnt >= VAR_1->emit_queue_cap) {
  VAR_4 = FUNC_0(16, VAR_1->emit_queue_cap * 3 / 2);
  VAR_3 = FUNC_1(VAR_1->emit_queue,
        VAR_4 * sizeof(VAR_3[0]));
  if (!VAR_3)
   return -VAR_0;
  VAR_1->emit_queue = VAR_3;
  VAR_1->emit_queue_cap = VAR_4;
 }

 VAR_1->emit_queue[VAR_1->emit_queue_cnt++] = VAR_2;
 return 0;
}
