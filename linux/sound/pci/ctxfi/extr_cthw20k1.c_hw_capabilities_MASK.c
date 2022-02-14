
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {scalar_t__ model; } ;
struct capabilities {int digit_io_switch; scalar_t__ mic_source_switch; scalar_t__ output_switch; scalar_t__ dedicated_mic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static struct capabilities FUNC_0(struct hw *VAR_2)
{
 struct capabilities VAR_3;


 VAR_3.digit_io_switch = !(VAR_2->model == VAR_0 || VAR_2->model == VAR_1);
 VAR_3.dedicated_mic = 0;
 VAR_3.output_switch = 0;
 VAR_3.mic_source_switch = 0;

 return VAR_3;
}
