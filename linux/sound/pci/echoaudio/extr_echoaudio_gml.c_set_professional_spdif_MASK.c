
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {int sample_rate; char professional_spdif; TYPE_1__* card; TYPE_2__* comm_page; } ;
struct TYPE_4__ {int control_register; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct echoaudio*,int,int) ;

__attribute__((used)) static int FUNC_3(struct echoaudio *VAR_7, char VAR_8)
{
 u32 VAR_9;
 int VAR_10;


 VAR_9 = FUNC_1(VAR_7->comm_page->control_register);
 VAR_9 &= VAR_2;


 VAR_9 |= VAR_6 | VAR_0 |
  VAR_1;
 if (VAR_8) {

  VAR_9 |= VAR_3;

  switch (VAR_7->sample_rate) {
  case 32000:
   VAR_9 |= VAR_4 |
    VAR_5;
   break;
  case 44100:
   VAR_9 |= VAR_4;
   break;
  case 48000:
   VAR_9 |= VAR_5;
   break;
  }
 } else {

  switch (VAR_7->sample_rate) {
  case 32000:
   VAR_9 |= VAR_4 |
    VAR_5;
   break;
  case 48000:
   VAR_9 |= VAR_5;
   break;
  }
 }

 if ((VAR_10 = FUNC_2(VAR_7, VAR_9, 0)))
  return VAR_10;
 VAR_7->professional_spdif = VAR_8;
 FUNC_0(VAR_7->card->dev, "set_professional_spdif to %s\n",
  VAR_8 ? "Professional" : "Consumer");
 return 0;
}
