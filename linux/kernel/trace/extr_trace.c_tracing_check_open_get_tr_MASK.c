
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct trace_array*) ;
 scalar_t__ VAR_2 ;

int FUNC_2(struct trace_array *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4)
  return VAR_4;

 if (VAR_2)
  return -VAR_0;

 if (VAR_3 && FUNC_1(VAR_3) < 0)
  return -VAR_0;

 return 0;
}
