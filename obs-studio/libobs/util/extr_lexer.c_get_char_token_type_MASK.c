
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum base_token_type { ____Placeholder_base_token_type } base_token_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static inline enum base_token_type FUNC_1(const char VAR_4)
{
 if (FUNC_0(VAR_4))
  return VAR_3;
 else if (VAR_4 >= '0' && VAR_4 <= '9')
  return VAR_1;
 else if ((VAR_4 >= 'a' && VAR_4 <= 'z') || (VAR_4 >= 'A' && VAR_4 <= 'Z'))
  return VAR_0;

 return VAR_2;
}
