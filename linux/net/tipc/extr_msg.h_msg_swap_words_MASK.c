
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tipc_msg {size_t* hdr; } ;



__attribute__((used)) static inline void FUNC_0(struct tipc_msg *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = VAR_0->hdr[VAR_1];

 VAR_0->hdr[VAR_1] = VAR_0->hdr[VAR_2];
 VAR_0->hdr[VAR_2] = VAR_3;
}
