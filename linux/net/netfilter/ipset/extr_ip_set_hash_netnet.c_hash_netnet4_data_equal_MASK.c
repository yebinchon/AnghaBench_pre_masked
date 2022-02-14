
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hash_netnet4_elem {scalar_t__ ipcmp; scalar_t__ ccmp; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct hash_netnet4_elem *VAR_0,
   const struct hash_netnet4_elem *VAR_1,
   u32 *VAR_2)
{
 return VAR_0->ipcmp == VAR_1->ipcmp &&
        VAR_0->ccmp == VAR_1->ccmp;
}
