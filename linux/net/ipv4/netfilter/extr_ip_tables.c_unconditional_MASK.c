
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uncond ;
struct ipt_ip {int dummy; } ;
struct ipt_entry {int target_offset; int ip; } ;


 scalar_t__ FUNC_0 (int *,struct ipt_ip const*,int) ;

__attribute__((used)) static inline bool FUNC_1(const struct ipt_entry *VAR_0)
{
 static const struct ipt_ip VAR_1;

 return VAR_0->target_offset == sizeof(struct ipt_entry) &&
        FUNC_0(&VAR_0->ip, &VAR_1, sizeof(VAR_1)) == 0;
}
