
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uncond ;
struct arpt_entry {int target_offset; int arp; } ;
struct arpt_arp {int dummy; } ;


 scalar_t__ FUNC_0 (int *,struct arpt_arp const*,int) ;

__attribute__((used)) static inline bool FUNC_1(const struct arpt_entry *VAR_0)
{
 static const struct arpt_arp VAR_1;

 return VAR_0->target_offset == sizeof(struct arpt_entry) &&
        FUNC_0(&VAR_0->arp, &VAR_1, sizeof(VAR_1)) == 0;
}
