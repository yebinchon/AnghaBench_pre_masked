
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
struct class {scalar_t__ classid; char const* name; struct class* next; } ;


 struct class** VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;

const char *FUNC_1(u_int8_t VAR_1)
{
 struct class *VAR_2;

 VAR_2 = VAR_0[FUNC_0(VAR_1)];
 for (; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2->classid == VAR_1)
   return VAR_2->name;
 return ((void*)0);
}
