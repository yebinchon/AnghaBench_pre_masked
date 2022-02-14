
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sw_flow_key_range {int start; int end; } ;
struct sw_flow_key {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*,int,int ) ;

__attribute__((used)) static u32 FUNC_2(const struct sw_flow_key *VAR_0,
       const struct sw_flow_key_range *VAR_1)
{
 int VAR_2 = VAR_1->start;
 int VAR_3 = VAR_1->end;
 const u32 *VAR_4 = (const u32 *)((const u8 *)VAR_0 + VAR_2);
 int VAR_5 = (VAR_3 - VAR_2) >> 2;


 FUNC_0(sizeof(long) % sizeof(u32));

 return FUNC_1(VAR_4, VAR_5, 0);
}
