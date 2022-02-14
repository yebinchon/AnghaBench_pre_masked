
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v ;
typedef int u64 ;



__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, u64 VAR_1)
{
    VAR_0[0] = (unsigned char)((VAR_1) & 0xff);
    VAR_0[1] = (unsigned char)((VAR_1 >> 8) & 0xff);
    VAR_0[2] = (unsigned char)((VAR_1 >> 16) & 0xff);
    VAR_0[3] = (unsigned char)((VAR_1 >> 24) & 0xff);
    VAR_0[4] = (unsigned char)((VAR_1 >> 32) & 0xff);
    VAR_0[5] = (unsigned char)((VAR_1 >> 40) & 0xff);
    VAR_0[6] = (unsigned char)((VAR_1 >> 48) & 0xff);
    VAR_0[7] = (unsigned char)((VAR_1 >> 56) & 0xff);
}
