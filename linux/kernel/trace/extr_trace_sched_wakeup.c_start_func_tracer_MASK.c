
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;


 int FUNC_0 (struct trace_array*,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct trace_array *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, 0);

 if (!VAR_3 && FUNC_1())
  VAR_0 = 1;
 else
  VAR_0 = 0;

 return VAR_3;
}
