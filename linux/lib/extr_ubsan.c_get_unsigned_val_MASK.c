
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_max ;
typedef unsigned long u64 ;
struct type_descriptor {int dummy; } ;


 scalar_t__ FUNC_0 (struct type_descriptor*) ;
 int FUNC_1 (struct type_descriptor*) ;

__attribute__((used)) static u_max FUNC_2(struct type_descriptor *VAR_0, void *VAR_1)
{
 if (FUNC_0(VAR_0))
  return (unsigned long)VAR_1;

 if (FUNC_1(VAR_0) == 64)
  return *(u64 *)VAR_1;

 return *(u_max *)VAR_1;
}
