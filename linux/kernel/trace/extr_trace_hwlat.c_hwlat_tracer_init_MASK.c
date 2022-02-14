
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array {scalar_t__ max_latency; } ;
struct TYPE_2__ {scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct trace_array* VAR_4 ;
 int FUNC_0 (struct trace_array*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct trace_array*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_2(struct trace_array *VAR_8)
{

 if (VAR_2)
  return -VAR_0;

 VAR_4 = VAR_8;

 VAR_1 = 0;
 VAR_3.count = 0;
 VAR_8->max_latency = 0;
 VAR_6 = VAR_7;


 if (!VAR_7)
  VAR_7 = VAR_5;

 if (FUNC_1(VAR_8))
  FUNC_0(VAR_8);

 VAR_2 = 1;

 return 0;
}
