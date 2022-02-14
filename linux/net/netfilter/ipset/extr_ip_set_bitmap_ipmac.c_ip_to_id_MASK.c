
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bitmap_ipmac {scalar_t__ first_ip; } ;



__attribute__((used)) static inline u32
FUNC_0(const struct bitmap_ipmac *VAR_0, u32 VAR_1)
{
 return VAR_1 - VAR_0->first_ip;
}
