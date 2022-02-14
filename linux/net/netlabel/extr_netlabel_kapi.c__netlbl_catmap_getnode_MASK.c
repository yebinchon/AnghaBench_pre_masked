
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct netlbl_lsm_catmap {scalar_t__ startbit; struct netlbl_lsm_catmap* next; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct netlbl_lsm_catmap* FUNC_0 (int ) ;

__attribute__((used)) static struct netlbl_lsm_catmap *FUNC_1(
          struct netlbl_lsm_catmap **VAR_3,
          u32 VAR_4,
          unsigned int VAR_5,
          gfp_t VAR_6)
{
 struct netlbl_lsm_catmap *VAR_7 = *VAR_3;
 struct netlbl_lsm_catmap *VAR_8 = ((void*)0);

 if (VAR_7 == ((void*)0))
  goto catmap_getnode_alloc;
 if (VAR_4 < VAR_7->startbit)
  goto catmap_getnode_walk;
 while (VAR_7 && VAR_4 >= (VAR_7->startbit + VAR_0)) {
  VAR_8 = VAR_7;
  VAR_7 = VAR_7->next;
 }
 if (VAR_7 == ((void*)0) || VAR_4 < VAR_7->startbit)
  goto catmap_getnode_walk;

 return VAR_7;

catmap_getnode_walk:
 if (VAR_5 & VAR_2)
  return VAR_7;
catmap_getnode_alloc:
 if (!(VAR_5 & VAR_1))
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 == ((void*)0))
  return ((void*)0);
 VAR_7->startbit = VAR_4 & ~(VAR_0 - 1);

 if (VAR_8 == ((void*)0)) {
  VAR_7->next = *VAR_3;
  *VAR_3 = VAR_7;
 } else {
  VAR_7->next = VAR_8->next;
  VAR_8->next = VAR_7;
 }

 return VAR_7;
}
