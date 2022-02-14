
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct process_symbol_args {char const* name; int start; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,struct process_symbol_args*,int ) ;

int FUNC_1(const char *VAR_1,
     const char *VAR_2, u64 *VAR_3)
{
 struct process_symbol_args VAR_4 = { .name = VAR_2, };

 if (FUNC_0(VAR_1, &VAR_4, VAR_0) <= 0)
  return -1;

 *VAR_3 = VAR_4.start;
 return 0;
}
