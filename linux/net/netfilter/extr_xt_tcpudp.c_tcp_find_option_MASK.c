
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u_int8_t ;
struct tcphdr {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (char*) ;
 int* FUNC_1 (struct sk_buff const*,unsigned int,unsigned int,int const*) ;

__attribute__((used)) static bool
FUNC_2(u_int8_t VAR_0,
  const struct sk_buff *VAR_1,
  unsigned int VAR_2,
  unsigned int VAR_3,
  bool VAR_4,
  bool *VAR_5)
{

 const u_int8_t *VAR_6;
 u_int8_t VAR_7[60 - sizeof(struct tcphdr)];
 unsigned int VAR_8;

 FUNC_0("finding option\n");

 if (!VAR_3)
  return VAR_4;


 VAR_6 = FUNC_1(VAR_1, VAR_2 + sizeof(struct tcphdr),
    VAR_3, VAR_7);
 if (VAR_6 == ((void*)0)) {
  *VAR_5 = 1;
  return 0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_3; ) {
  if (VAR_6[VAR_8] == VAR_0) return !VAR_4;
  if (VAR_6[VAR_8] < 2) VAR_8++;
  else VAR_8 += VAR_6[VAR_8+1]?:1;
 }

 return VAR_4;
}
