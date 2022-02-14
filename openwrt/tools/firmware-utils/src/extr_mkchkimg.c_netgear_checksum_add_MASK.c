
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngr_checksum {scalar_t__ c0; int c1; } ;



__attribute__((used)) static inline void
FUNC_0 (struct ngr_checksum * VAR_0, unsigned char * VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 for (VAR_3=0; VAR_3<VAR_2; VAR_3++) {
  VAR_0->c0 += VAR_1[VAR_3] & 0xff;
  VAR_0->c1 += VAR_0->c0;
 }
}
