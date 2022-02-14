
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_netport4_elem {int port; int ip; } ;



__attribute__((used)) static inline void
FUNC_0(struct hash_netport4_elem *VAR_0,
   const struct hash_netport4_elem *VAR_1)
{
 VAR_0->ip = VAR_1->ip;
 VAR_0->port = VAR_1->port;
}
