
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline void FUNC_0(char VAR_0[4], uint32_t VAR_1)
{
 VAR_0[3] = (unsigned char) ((VAR_1 & 0xff000000) >> 24);
 VAR_0[2] = (unsigned char) ((VAR_1 & 0xff0000) >> 16);
 VAR_0[1] = (unsigned char) ((VAR_1 & 0xff00) >> 8);
 VAR_0[0] = (unsigned char) (VAR_1 & 0xff);
}
