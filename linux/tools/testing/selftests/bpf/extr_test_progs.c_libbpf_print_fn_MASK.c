
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
typedef enum libbpf_print_level { ____Placeholder_libbpf_print_level } libbpf_print_level ;
struct TYPE_2__ {int very_verbose; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char const*,int ) ;

__attribute__((used)) static int FUNC_1(enum libbpf_print_level VAR_2,
      const char *VAR_3, va_list VAR_4)
{
 if (!VAR_1.very_verbose && VAR_2 == VAR_0)
  return 0;
 FUNC_0(VAR_3, VAR_4);
 return 0;
}
