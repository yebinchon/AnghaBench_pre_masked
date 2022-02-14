
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct echoaudio {int sample_rate; int output_clock; int input_clock; int vmixer_gain; int monitor_gain; int input_gain; int output_gain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_2(struct echoaudio *VAR_3)
{
 FUNC_0(VAR_3->output_gain, VAR_0, sizeof(VAR_3->output_gain));
 FUNC_0(VAR_3->input_gain, VAR_0, sizeof(VAR_3->input_gain));
 FUNC_0(VAR_3->monitor_gain, VAR_0, sizeof(VAR_3->monitor_gain));
 FUNC_0(VAR_3->vmixer_gain, VAR_0, sizeof(VAR_3->vmixer_gain));
 VAR_3->input_clock = VAR_1;
 VAR_3->output_clock = VAR_2;
 VAR_3->sample_rate = 44100;
 return FUNC_1(VAR_3);
}
