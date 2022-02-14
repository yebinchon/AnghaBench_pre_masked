
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct echoaudio {int sample_rate; scalar_t__ input_clock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct echoaudio *VAR_3, u16 VAR_4)
{
 if (FUNC_1(VAR_4 != VAR_1 &&
         VAR_4 != VAR_0))
  return -VAR_2;
 VAR_3->input_clock = VAR_4;
 return FUNC_0(VAR_3, VAR_3->sample_rate);
}
