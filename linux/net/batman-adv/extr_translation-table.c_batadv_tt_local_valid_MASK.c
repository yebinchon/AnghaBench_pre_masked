
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct batadv_tt_common_entry {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const void *VAR_1,
      const void *VAR_2,
      u8 *VAR_3)
{
 const struct batadv_tt_common_entry *VAR_4 = VAR_1;

 if (VAR_4->flags & VAR_0)
  return 0;

 if (VAR_3)
  *VAR_3 = VAR_4->flags;

 return 1;
}
