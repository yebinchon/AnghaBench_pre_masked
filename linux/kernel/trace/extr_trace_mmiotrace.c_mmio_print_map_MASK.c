
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct mmiotrace_map {int opcode; int map_id; int len; int virt; scalar_t__ phys; } ;
struct trace_mmiotrace_map {struct mmiotrace_map map; } ;
struct trace_iterator {int ts; struct trace_seq seq; struct trace_entry* ent; } ;
struct trace_entry {int dummy; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;




 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long long,int ) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (struct trace_mmiotrace_map*,struct trace_entry*) ;
 int FUNC_3 (struct trace_seq*) ;
 int FUNC_4 (struct trace_seq*,char*,unsigned int,unsigned long,int ,unsigned long,int ,...) ;
 int FUNC_5 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t FUNC_6(struct trace_iterator *VAR_1)
{
 struct trace_entry *VAR_2 = VAR_1->ent;
 struct trace_mmiotrace_map *VAR_3;
 struct mmiotrace_map *VAR_4;
 struct trace_seq *VAR_5 = &VAR_1->seq;
 unsigned long long VAR_6 = FUNC_1(VAR_1->ts);
 unsigned long VAR_7 = FUNC_0(VAR_6, VAR_0);
 unsigned VAR_8 = (unsigned long)VAR_6;

 FUNC_2(VAR_3, VAR_2);
 VAR_4 = &VAR_3->map;

 switch (VAR_4->opcode) {
 case 129:
  FUNC_4(VAR_5,
   "MAP %u.%06lu %d 0x%llx 0x%lx 0x%lx 0x%lx %d\n",
   VAR_8, VAR_7, VAR_4->map_id,
   (unsigned long long)VAR_4->phys, VAR_4->virt, VAR_4->len,
   0UL, 0);
  break;
 case 128:
  FUNC_4(VAR_5,
   "UNMAP %u.%06lu %d 0x%lx %d\n",
   VAR_8, VAR_7, VAR_4->map_id, 0UL, 0);
  break;
 default:
  FUNC_5(VAR_5, "map what?\n");
  break;
 }

 return FUNC_3(VAR_5);
}
