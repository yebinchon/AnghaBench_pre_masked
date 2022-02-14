
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr_entry; int entries; } ;
struct TYPE_3__ {int total_size; } ;
union jr_entry {TYPE_2__ info; TYPE_1__ prefix; } ;
struct jit_buf_desc {int nr_debug_entries; void* debug_data; } ;


 void* FUNC_0 (size_t) ;
 int FUNC_1 (void*,int *,size_t) ;

__attribute__((used)) static int FUNC_2(struct jit_buf_desc *VAR_0, union jr_entry *VAR_1)
{
 void *VAR_2;
 size_t VAR_3;

 if (!(VAR_0 && VAR_1))
  return -1;

 VAR_3 = VAR_1->prefix.total_size - sizeof(VAR_1->info);
 VAR_2 = FUNC_0(VAR_3);
 if (!VAR_2)
  return -1;

 FUNC_1(VAR_2, &VAR_1->info.entries, VAR_3);

 VAR_0->debug_data = VAR_2;





 VAR_0->nr_debug_entries = VAR_1->info.nr_entry;

 return 0;
}
