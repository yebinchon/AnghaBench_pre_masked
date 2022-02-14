
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct echoaudio {int digital_in_automute; int input_clock; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct echoaudio*,int ) ;

__attribute__((used)) static int FUNC_2(struct echoaudio *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->card->dev, "set_input_auto_mute %d\n", VAR_1);

 VAR_0->digital_in_automute = VAR_1;



 return FUNC_1(VAR_0, VAR_0->input_clock);
}
