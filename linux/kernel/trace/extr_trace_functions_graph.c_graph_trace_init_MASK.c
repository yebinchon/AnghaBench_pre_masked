
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct trace_array*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct trace_array *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_3);
 if (VAR_2)
  VAR_4 = FUNC_0(&VAR_1);
 else
  VAR_4 = FUNC_0(&VAR_0);
 if (VAR_4)
  return VAR_4;
 FUNC_2();

 return 0;
}
