
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct hash_netportnet6_elem {void** cidr; int * ip; } ;


 int FUNC_0 (int *,void*) ;

__attribute__((used)) static inline void
FUNC_1(struct hash_netportnet6_elem *VAR_0,
         u8 VAR_1, bool VAR_2)
{
 if (VAR_2) {
  FUNC_0(&VAR_0->ip[1], VAR_1);
  VAR_0->cidr[1] = VAR_1;
 } else {
  FUNC_0(&VAR_0->ip[0], VAR_1);
  VAR_0->cidr[0] = VAR_1;
 }
}
