
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int dummy; } ;
struct trace_array {int dummy; } ;


 int VAR_0 ;
 struct trace_event_file* FUNC_0 (int ) ;
 struct trace_event_file* FUNC_1 (struct trace_array*,char*,char*) ;

__attribute__((used)) static struct trace_event_file *FUNC_2(struct trace_array *VAR_1,
        char *VAR_2, char *VAR_3)
{
 struct trace_event_file *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 return VAR_4;
}
