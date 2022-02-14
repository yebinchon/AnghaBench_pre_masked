
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mapped_size; int unwinding_size; int eh_frame_hdr_size; int unwinding_data; } ;
struct TYPE_4__ {scalar_t__ total_size; } ;
union jr_entry {TYPE_1__ unwinding; TYPE_2__ prefix; } ;
typedef scalar_t__ uint32_t ;
struct jit_buf_desc {void* unwinding_data; int unwinding_mapped_size; int unwinding_size; int eh_frame_hdr_size; } ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct jit_buf_desc *VAR_0, union jr_entry *VAR_1)
{
 void *VAR_2;
 uint32_t VAR_3;

 if (!(VAR_0 && VAR_1))
  return -1;

 VAR_3 = VAR_1->prefix.total_size - sizeof(VAR_1->unwinding);
 VAR_2 = FUNC_0(VAR_3);
 if (!VAR_2)
  return -1;

 FUNC_1(VAR_2, &VAR_1->unwinding.unwinding_data,
        VAR_3);

 VAR_0->eh_frame_hdr_size = VAR_1->unwinding.eh_frame_hdr_size;
 VAR_0->unwinding_size = VAR_1->unwinding.unwinding_size;
 VAR_0->unwinding_mapped_size = VAR_1->unwinding.mapped_size;
 VAR_0->unwinding_data = VAR_2;

 return 0;
}
