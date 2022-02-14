
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct echoaudio {int output_clock; TYPE_2__* comm_page; TYPE_1__* card; } ;
struct TYPE_4__ {int output_clock; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_4 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_5, u16 VAR_6)
{
 switch (VAR_6) {
 case 129:
  VAR_6 = VAR_3;
  break;
 case 128:
  VAR_6 = VAR_4;
  break;
 default:
  FUNC_2(VAR_5->card->dev, "set_output_clock wrong clock\n");
  return -VAR_1;
 }

 if (FUNC_4(VAR_5))
  return -VAR_2;

 VAR_5->comm_page->output_clock = FUNC_1(VAR_6);
 VAR_5->output_clock = VAR_6;
 FUNC_0(VAR_5);
 return FUNC_3(VAR_5, VAR_0);
}
