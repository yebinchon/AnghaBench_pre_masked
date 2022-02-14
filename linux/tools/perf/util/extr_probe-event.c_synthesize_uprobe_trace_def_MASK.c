
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct probe_trace_point {scalar_t__ ref_ctr_offset; int address; int module; } ;
struct probe_trace_event {struct probe_trace_point point; } ;


 int FUNC_0 (struct strbuf*,char*,scalar_t__,...) ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct probe_trace_event *VAR_0, struct strbuf *VAR_1)
{
 struct probe_trace_point *VAR_2 = &VAR_0->point;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, "%s:0x%lx", VAR_2->module, VAR_2->address);

 if (VAR_3 >= 0 && VAR_2->ref_ctr_offset) {
  if (!FUNC_1())
   return -1;
  VAR_3 = FUNC_0(VAR_1, "(0x%lx)", VAR_2->ref_ctr_offset);
 }
 return VAR_3 >= 0 ? 0 : -1;
}
