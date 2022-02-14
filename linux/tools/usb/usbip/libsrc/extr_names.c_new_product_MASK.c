
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct product {int vendorid; int productid; struct product* next; int name; } ;


 unsigned int FUNC_0 (int) ;
 struct product* FUNC_1 (scalar_t__) ;
 struct product** VAR_0 ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, u_int16_t VAR_2,
         u_int16_t VAR_3)
{
 struct product *VAR_4;
 unsigned int VAR_5 = FUNC_0((VAR_2 << 16) | VAR_3);

 VAR_4 = VAR_0[VAR_5];
 for (; VAR_4; VAR_4 = VAR_4->next)
  if (VAR_4->vendorid == VAR_2 && VAR_4->productid == VAR_3)
   return -1;
 VAR_4 = FUNC_1(sizeof(struct product) + FUNC_3(VAR_1));
 if (!VAR_4)
  return -1;
 FUNC_2(VAR_4->name, VAR_1);
 VAR_4->vendorid = VAR_2;
 VAR_4->productid = VAR_3;
 VAR_4->next = VAR_0[VAR_5];
 VAR_0[VAR_5] = VAR_4;
 return 0;
}
