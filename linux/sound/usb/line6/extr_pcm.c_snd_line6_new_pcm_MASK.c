
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {TYPE_1__* properties; int card; } ;
struct snd_pcm {int name; } ;
struct TYPE_2__ {scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct usb_line6 *VAR_6, struct snd_pcm **VAR_7)
{
 struct snd_pcm *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_6->card, (char *)VAR_6->properties->name,
     0, 1, 1, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_8 = *VAR_7;
 FUNC_4(VAR_8->name, VAR_6->properties->name);


 FUNC_3(VAR_8, VAR_3,
   &VAR_5);
 FUNC_3(VAR_8, VAR_2, &VAR_4);


 FUNC_1(VAR_8, VAR_1,
           FUNC_0
           (VAR_0), 64 * 1024,
           128 * 1024);
 return 0;
}
