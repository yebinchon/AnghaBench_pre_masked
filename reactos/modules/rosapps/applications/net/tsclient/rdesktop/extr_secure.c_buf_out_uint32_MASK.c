
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint8 ;
typedef int uint32 ;



void
FUNC_0(uint8 * VAR_0, uint32 VAR_1)
{
 VAR_0[0] = (VAR_1) & 0xff;
 VAR_0[1] = (VAR_1 >> 8) & 0xff;
 VAR_0[2] = (VAR_1 >> 16) & 0xff;
 VAR_0[3] = (VAR_1 >> 24) & 0xff;
}
