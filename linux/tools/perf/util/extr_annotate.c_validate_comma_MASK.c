
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ins_operands {char const* raw_comment; } ;



__attribute__((used)) static inline const char *FUNC_0(const char *VAR_0, struct ins_operands *VAR_1)
{
 if (VAR_1->raw_comment && VAR_0 > VAR_1->raw_comment)
  return ((void*)0);

 return VAR_0;
}
