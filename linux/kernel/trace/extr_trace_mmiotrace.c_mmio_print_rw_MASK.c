
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct mmiotrace_rw {int opcode; int value; int pc; scalar_t__ phys; int map_id; int width; } ;
struct trace_mmiotrace_rw {struct mmiotrace_rw rw; } ;
struct trace_iterator {int ts; struct trace_seq seq; struct trace_entry* ent; } ;
struct trace_entry {int dummy; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;





 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long long,int ) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (struct trace_mmiotrace_rw*,struct trace_entry*) ;
 int FUNC_3 (struct trace_seq*) ;
 int FUNC_4 (struct trace_seq*,char*,unsigned int,unsigned long,unsigned long,unsigned long long,int,int,int,int ,...) ;
 int FUNC_5 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t FUNC_6(struct trace_iterator *VAR_1)
{
 struct trace_entry *VAR_2 = VAR_1->ent;
 struct trace_mmiotrace_rw *VAR_3;
 struct mmiotrace_rw *VAR_4;
 struct trace_seq *VAR_5 = &VAR_1->seq;
 unsigned long long VAR_6 = FUNC_1(VAR_1->ts);
 unsigned long VAR_7 = FUNC_0(VAR_6, VAR_0);
 unsigned VAR_8 = (unsigned long)VAR_6;

 FUNC_2(VAR_3, VAR_2);
 VAR_4 = &VAR_3->rw;

 switch (VAR_4->opcode) {
 case 130:
  FUNC_4(VAR_5,
   "R %d %u.%06lu %d 0x%llx 0x%lx 0x%lx %d\n",
   VAR_4->width, VAR_8, VAR_7, VAR_4->map_id,
   (unsigned long long)VAR_4->phys,
   VAR_4->value, VAR_4->pc, 0);
  break;
 case 128:
  FUNC_4(VAR_5,
   "W %d %u.%06lu %d 0x%llx 0x%lx 0x%lx %d\n",
   VAR_4->width, VAR_8, VAR_7, VAR_4->map_id,
   (unsigned long long)VAR_4->phys,
   VAR_4->value, VAR_4->pc, 0);
  break;
 case 129:
  FUNC_4(VAR_5,
   "UNKNOWN %u.%06lu %d 0x%llx %02lx,%02lx,"
   "%02lx 0x%lx %d\n",
   VAR_8, VAR_7, VAR_4->map_id,
   (unsigned long long)VAR_4->phys,
   (VAR_4->value >> 16) & 0xff, (VAR_4->value >> 8) & 0xff,
   (VAR_4->value >> 0) & 0xff, VAR_4->pc, 0);
  break;
 default:
  FUNC_5(VAR_5, "rw what?\n");
  break;
 }

 return FUNC_3(VAR_5);
}
