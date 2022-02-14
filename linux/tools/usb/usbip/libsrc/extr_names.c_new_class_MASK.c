
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
struct class {scalar_t__ classid; struct class* next; int name; } ;


 struct class** VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct class* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, u_int8_t VAR_2)
{
 struct class *VAR_3;
 unsigned int VAR_4 = FUNC_0(VAR_2);

 VAR_3 = VAR_0[VAR_4];
 for (; VAR_3; VAR_3 = VAR_3->next)
  if (VAR_3->classid == VAR_2)
   return -1;
 VAR_3 = FUNC_1(sizeof(struct class) + FUNC_3(VAR_1));
 if (!VAR_3)
  return -1;
 FUNC_2(VAR_3->name, VAR_1);
 VAR_3->classid = VAR_2;
 VAR_3->next = VAR_0[VAR_4];
 VAR_0[VAR_4] = VAR_3;
 return 0;
}
