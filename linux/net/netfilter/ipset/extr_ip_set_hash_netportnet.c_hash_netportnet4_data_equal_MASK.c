
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hash_netportnet4_elem {scalar_t__ ipcmp; scalar_t__ ccmp; scalar_t__ port; scalar_t__ proto; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct hash_netportnet4_elem *VAR_0,
       const struct hash_netportnet4_elem *VAR_1,
       u32 *VAR_2)
{
 return VAR_0->ipcmp == VAR_1->ipcmp &&
        VAR_0->ccmp == VAR_1->ccmp &&
        VAR_0->port == VAR_1->port &&
        VAR_0->proto == VAR_1->proto;
}
