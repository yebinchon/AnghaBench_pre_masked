
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct batadv_tt_common_entry {int vid; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static inline u32 FUNC_1(const void *VAR_1, u32 VAR_2)
{
 struct batadv_tt_common_entry *VAR_3;
 u32 VAR_4 = 0;

 VAR_3 = (struct batadv_tt_common_entry *)VAR_1;
 VAR_4 = FUNC_0(&VAR_3->addr, VAR_0, VAR_4);
 VAR_4 = FUNC_0(&VAR_3->vid, sizeof(VAR_3->vid), VAR_4);

 return VAR_4 % VAR_2;
}
