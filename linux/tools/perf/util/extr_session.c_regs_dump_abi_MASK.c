
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regs_dump {size_t abi; } ;


 size_t VAR_0 ;
 char const** VAR_1 ;

__attribute__((used)) static inline const char *FUNC_0(struct regs_dump *VAR_2)
{
 if (VAR_2->abi > VAR_0)
  return "unknown";

 return VAR_1[VAR_2->abi];
}
