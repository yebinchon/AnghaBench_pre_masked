
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct batadv_bla_claim {int vid; int addr; } ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static inline u32 FUNC_1(const void *VAR_0, u32 VAR_1)
{
 const struct batadv_bla_claim *VAR_2 = (struct batadv_bla_claim *)VAR_0;
 u32 VAR_3 = 0;

 VAR_3 = FUNC_0(&VAR_2->addr, sizeof(VAR_2->addr), VAR_3);
 VAR_3 = FUNC_0(&VAR_2->vid, sizeof(VAR_2->vid), VAR_3);

 return VAR_3 % VAR_1;
}
