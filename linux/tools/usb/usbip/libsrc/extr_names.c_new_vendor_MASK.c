
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct vendor {scalar_t__ vendorid; struct vendor* next; int name; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 struct vendor* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 struct vendor** VAR_0 ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, u_int16_t VAR_2)
{
 struct vendor *VAR_3;
 unsigned int VAR_4 = FUNC_0(VAR_2);

 VAR_3 = VAR_0[VAR_4];
 for (; VAR_3; VAR_3 = VAR_3->next)
  if (VAR_3->vendorid == VAR_2)
   return -1;
 VAR_3 = FUNC_1(sizeof(struct vendor) + FUNC_3(VAR_1));
 if (!VAR_3)
  return -1;
 FUNC_2(VAR_3->name, VAR_1);
 VAR_3->vendorid = VAR_2;
 VAR_3->next = VAR_0[VAR_4];
 VAR_0[VAR_4] = VAR_3;
 return 0;
}
