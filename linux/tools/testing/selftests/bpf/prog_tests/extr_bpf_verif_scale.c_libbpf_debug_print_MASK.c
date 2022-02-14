
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef enum libbpf_print_level { ____Placeholder_libbpf_print_level } libbpf_print_level ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,int ) ;

__attribute__((used)) static int FUNC_2(enum libbpf_print_level VAR_1,
         const char *VAR_2, va_list VAR_3)
{
 if (VAR_1 != VAR_0) {
  FUNC_1(VAR_2, VAR_3);
  return 0;
 }

 if (!FUNC_0(VAR_2, "verifier log"))
  return 0;
 FUNC_1("%s", VAR_3);
 return 0;
}
