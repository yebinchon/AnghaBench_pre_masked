
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct product {int vendorid; int productid; char const* name; struct product* next; } ;


 size_t FUNC_0 (int) ;
 struct product** VAR_0 ;

const char *FUNC_1(u_int16_t VAR_1, u_int16_t VAR_2)
{
 struct product *VAR_3;

 VAR_3 = VAR_0[FUNC_0((VAR_1 << 16) | VAR_2)];
 for (; VAR_3; VAR_3 = VAR_3->next)
  if (VAR_3->vendorid == VAR_1 && VAR_3->productid == VAR_2)
   return VAR_3->name;
 return ((void*)0);
}
