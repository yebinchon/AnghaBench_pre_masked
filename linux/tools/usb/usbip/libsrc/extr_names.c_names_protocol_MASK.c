
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct protocol {int classid; int subclassid; int protocolid; char const* name; struct protocol* next; } ;


 size_t FUNC_0 (int) ;
 struct protocol** VAR_0 ;

const char *FUNC_1(u_int8_t VAR_1, u_int8_t VAR_2,
      u_int8_t VAR_3)
{
 struct protocol *VAR_4;

 VAR_4 = VAR_0[FUNC_0((VAR_1 << 16) | (VAR_2 << 8)
         | VAR_3)];
 for (; VAR_4; VAR_4 = VAR_4->next)
  if (VAR_4->classid == VAR_1 && VAR_4->subclassid == VAR_2 &&
      VAR_4->protocolid == VAR_3)
   return VAR_4->name;
 return ((void*)0);
}
