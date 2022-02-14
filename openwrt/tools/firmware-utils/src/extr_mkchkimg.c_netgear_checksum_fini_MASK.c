
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ngr_checksum {int c0; int c1; } ;



__attribute__((used)) static inline unsigned long
FUNC_0 (struct ngr_checksum * VAR_0)
{
 uint32_t VAR_1, VAR_2;

 VAR_1 = (VAR_0->c0 & 65535) + ((VAR_0->c0 >> 16) & 65535);
 VAR_0->c0 = ((VAR_1 >> 16) + VAR_1) & 65535;
 VAR_1 = (VAR_0->c1 & 65535) + ((VAR_0->c1 >> 16) & 65535);
 VAR_0->c1 = ((VAR_1 >> 16) + VAR_1) & 65535;
 VAR_2 = ((VAR_0->c1 << 16) | VAR_0->c0);
 return VAR_2;
}
