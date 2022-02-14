
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct subclass {int classid; int subclassid; char const* name; struct subclass* next; } ;


 size_t FUNC_0 (int) ;
 struct subclass** VAR_0 ;

const char *FUNC_1(u_int8_t VAR_1, u_int8_t VAR_2)
{
 struct subclass *VAR_3;

 VAR_3 = VAR_0[FUNC_0((VAR_1 << 8) | VAR_2)];
 for (; VAR_3; VAR_3 = VAR_3->next)
  if (VAR_3->classid == VAR_1 && VAR_3->subclassid == VAR_2)
   return VAR_3->name;
 return ((void*)0);
}
