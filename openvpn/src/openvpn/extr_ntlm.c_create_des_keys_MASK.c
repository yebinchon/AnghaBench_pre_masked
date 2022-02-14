
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int,int) ;

__attribute__((used)) static void
FUNC_1(const unsigned char *VAR_0, unsigned char *VAR_1)
{
    VAR_1[0] = VAR_0[0];
    VAR_1[1] = ((VAR_0[0] & 1) << 7) | (VAR_0[1] >> 1);
    VAR_1[2] = ((VAR_0[1] & 3) << 6) | (VAR_0[2] >> 2);
    VAR_1[3] = ((VAR_0[2] & 7) << 5) | (VAR_0[3] >> 3);
    VAR_1[4] = ((VAR_0[3] & 15) << 4) | (VAR_0[4] >> 4);
    VAR_1[5] = ((VAR_0[4] & 31) << 3) | (VAR_0[5] >> 5);
    VAR_1[6] = ((VAR_0[5] & 63) << 2) | (VAR_0[6] >> 6);
    VAR_1[7] = ((VAR_0[6] & 127) << 1);
    FUNC_0(VAR_1, 8, 1);
}
