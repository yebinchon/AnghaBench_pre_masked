
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {scalar_t__ max_latency; int trace_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_array*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct trace_array*,int ,int) ;
 int FUNC_2 (struct trace_array*) ;
 int VAR_3 ;
 struct trace_array* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct trace_array *VAR_6)
{
 VAR_2 = VAR_6->trace_flags;


 FUNC_1(VAR_6, VAR_1, 1);
 FUNC_1(VAR_6, VAR_0, 1);

 VAR_6->max_latency = 0;
 VAR_4 = VAR_6;
 FUNC_0(VAR_6, VAR_5);
 FUNC_2(VAR_6);

 VAR_3 = 1;
 return 0;
}
