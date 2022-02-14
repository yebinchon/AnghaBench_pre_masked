
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_msnd {void* capture_channels; void* capture_sample_rate; void* capture_sample_size; void* play_channels; void* play_sample_rate; void* play_sample_size; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct snd_msnd *VAR_3)
{
 VAR_3->play_sample_size = FUNC_0(VAR_2);
 VAR_3->play_sample_rate = VAR_1;
 VAR_3->play_channels = VAR_0;
 VAR_3->capture_sample_size = FUNC_0(VAR_2);
 VAR_3->capture_sample_rate = VAR_1;
 VAR_3->capture_channels = VAR_0;
}
