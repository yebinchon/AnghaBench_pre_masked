
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sw_flow_key {int dummy; } ;



__attribute__((used)) static bool FUNC_0(const struct sw_flow_key *VAR_0,
      const struct sw_flow_key *VAR_1,
      int VAR_2, int VAR_3)
{
 const long *VAR_4 = (const long *)((const u8 *)VAR_0 + VAR_2);
 const long *VAR_5 = (const long *)((const u8 *)VAR_1 + VAR_2);
 long VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = VAR_2; VAR_7 < VAR_3; VAR_7 += sizeof(long))
  VAR_6 |= *VAR_4++ ^ *VAR_5++;

 return VAR_6 == 0;
}
