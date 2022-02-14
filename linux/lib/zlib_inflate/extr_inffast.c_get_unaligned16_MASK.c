
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union uu {unsigned char* b; unsigned short us; } ;



__attribute__((used)) static inline unsigned short
FUNC_0(const unsigned short *VAR_0)
{
 union uu VAR_1;
 unsigned char *VAR_2 = (unsigned char *)VAR_0;

 VAR_1.b[0] = VAR_2[0];
 VAR_1.b[1] = VAR_2[1];
 return VAR_1.us;
}
