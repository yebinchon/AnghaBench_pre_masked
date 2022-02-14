
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef enum libbpf_print_level { ____Placeholder_libbpf_print_level } libbpf_print_level ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_2(enum libbpf_print_level VAR_3,
         const char *VAR_4, va_list VAR_5)
{
 if (VAR_3 == VAR_0 && !VAR_1)
  return 0;

 FUNC_0(VAR_2, "[%d] ", VAR_3);
 return FUNC_1(VAR_2, VAR_4, VAR_5);
}
