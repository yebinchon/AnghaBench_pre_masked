
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct vendor {scalar_t__ vendorid; char const* name; struct vendor* next; } ;


 size_t FUNC_0 (scalar_t__) ;
 struct vendor** VAR_0 ;

const char *FUNC_1(u_int16_t VAR_1)
{
 struct vendor *VAR_2;

 VAR_2 = VAR_0[FUNC_0(VAR_1)];
 for (; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2->vendorid == VAR_1)
   return VAR_2->name;
 return ((void*)0);
}
