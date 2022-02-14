
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {scalar_t__ model; } ;
struct capabilities {int dedicated_mic; int output_switch; int mic_source_switch; scalar_t__ digit_io_switch; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct capabilities FUNC_0(struct hw *VAR_1)
{
 struct capabilities VAR_2;

 VAR_2.digit_io_switch = 0;
 VAR_2.dedicated_mic = VAR_1->model == VAR_0;
 VAR_2.output_switch = VAR_1->model == VAR_0;
 VAR_2.mic_source_switch = VAR_1->model == VAR_0;

 return VAR_2;
}
