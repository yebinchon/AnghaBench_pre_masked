
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vec4 {scalar_t__ w; scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;



__attribute__((used)) static inline uint32_t FUNC_0(const struct vec4 *VAR_0)
{
 uint32_t VAR_1;
 VAR_1 = (uint32_t)((double)VAR_0->x * 255.0);
 VAR_1 |= (uint32_t)((double)VAR_0->y * 255.0) << 8;
 VAR_1 |= (uint32_t)((double)VAR_0->z * 255.0) << 16;
 VAR_1 |= (uint32_t)((double)VAR_0->w * 255.0) << 24;
 return VAR_1;
}
