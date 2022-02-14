
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct symbol {int name; int start; } ;
struct probe_trace_point {int retprobe; scalar_t__ offset; scalar_t__ symbol; int module; scalar_t__ address; } ;
struct perf_probe_point {scalar_t__ function; scalar_t__ offset; int retprobe; } ;
struct map {scalar_t__ (* unmap_ip ) (struct map*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct map* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__*,int,int) ;
 struct symbol* FUNC_2 (int ,scalar_t__,struct map**) ;
 struct symbol* FUNC_3 (struct map*,scalar_t__) ;
 int FUNC_4 (struct map*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct map*,int ) ;

__attribute__((used)) static int FUNC_7(struct probe_trace_point *VAR_3,
       struct perf_probe_point *VAR_4,
       bool VAR_5)
{
 struct symbol *VAR_6 = ((void*)0);
 struct map *VAR_7 = ((void*)0);
 u64 VAR_8 = VAR_3->address;
 int VAR_9 = -VAR_0;

 if (!VAR_5) {
  VAR_7 = FUNC_0(VAR_3->module);
  if (!VAR_7)
   goto out;
  VAR_6 = FUNC_3(VAR_7, VAR_8);
 } else {
  if (VAR_3->symbol && !VAR_8) {
   if (FUNC_1(VAR_3->symbol,
      &VAR_8, 1, 0) < 0)
    goto out;
  }
  if (VAR_8) {
   VAR_8 += VAR_3->offset;
   VAR_6 = FUNC_2(VAR_2, VAR_8, &VAR_7);
  }
 }

 if (!VAR_6)
  goto out;

 VAR_4->retprobe = VAR_3->retprobe;
 VAR_4->offset = VAR_8 - VAR_7->unmap_ip(VAR_7, VAR_6->start);
 VAR_4->function = FUNC_5(VAR_6->name);
 VAR_9 = VAR_4->function ? 0 : -VAR_1;

out:
 if (VAR_7 && !VAR_5) {
  FUNC_4(VAR_7);
 }

 return VAR_9;
}
