
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vec4 {float z; float y; float x; float w; } ;



__attribute__((used)) static inline void FUNC_0(struct vec4 *VAR_0, uint32_t VAR_1)
{
 VAR_0->z = (float)((double)(VAR_1 & 0xFF) * (1.0 / 255.0));
 VAR_1 >>= 8;
 VAR_0->y = (float)((double)(VAR_1 & 0xFF) * (1.0 / 255.0));
 VAR_1 >>= 8;
 VAR_0->x = (float)((double)(VAR_1 & 0xFF) * (1.0 / 255.0));
 VAR_1 >>= 8;
 VAR_0->w = (float)((double)(VAR_1 & 0xFF) * (1.0 / 255.0));
}
