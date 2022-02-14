
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spdif_mixer_control {int* ch_status; } ;



__attribute__((used)) static void FUNC_0(struct spdif_mixer_control *VAR_0,
    u8 VAR_1, u8 VAR_2)
{
 VAR_0->ch_status[3] &= ~VAR_1;
 VAR_0->ch_status[3] |= VAR_2 & VAR_1;
}
