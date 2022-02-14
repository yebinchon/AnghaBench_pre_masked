
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_msnd {long play_sample_size; long play_sample_rate; long play_channels; } ;


 long VAR_0 ;

__attribute__((used)) static inline long FUNC_0(struct snd_msnd *VAR_1, long VAR_2)
{
 long VAR_3 = (VAR_2 * VAR_0 * VAR_1->play_sample_size) / 8;
 return VAR_3 / (VAR_1->play_sample_rate * VAR_1->play_channels);
}
