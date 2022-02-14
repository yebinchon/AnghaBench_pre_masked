
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tipc_msg {int * hdr; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct tipc_msg *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->hdr[VAR_1]);
}
