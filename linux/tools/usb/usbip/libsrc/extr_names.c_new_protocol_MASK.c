
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct protocol {int classid; int subclassid; int protocolid; struct protocol* next; int name; } ;


 unsigned int FUNC_0 (int) ;
 struct protocol* FUNC_1 (scalar_t__) ;
 struct protocol** VAR_0 ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, u_int8_t VAR_2, u_int8_t VAR_3,
   u_int8_t VAR_4)
{
 struct protocol *VAR_5;
 unsigned int VAR_6 = FUNC_0((VAR_2 << 16) | (VAR_3 << 8)
     | VAR_4);

 VAR_5 = VAR_0[VAR_6];
 for (; VAR_5; VAR_5 = VAR_5->next)
  if (VAR_5->classid == VAR_2 && VAR_5->subclassid == VAR_3
      && VAR_5->protocolid == VAR_4)
   return -1;
 VAR_5 = FUNC_1(sizeof(struct protocol) + FUNC_3(VAR_1));
 if (!VAR_5)
  return -1;
 FUNC_2(VAR_5->name, VAR_1);
 VAR_5->classid = VAR_2;
 VAR_5->subclassid = VAR_3;
 VAR_5->protocolid = VAR_4;
 VAR_5->next = VAR_0[VAR_6];
 VAR_0[VAR_6] = VAR_5;
 return 0;
}
