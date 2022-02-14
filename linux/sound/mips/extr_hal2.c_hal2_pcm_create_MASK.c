
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; struct snd_hal2* private_data; } ;
struct snd_hal2 {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int ,int) ;
 int FUNC_2 (int ,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_hal2 *VAR_6)
{
 struct snd_pcm *VAR_7;
 int VAR_8;


 VAR_8 = FUNC_2(VAR_6->card, "SGI HAL2 Audio", 0, 1, 1, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7->private_data = VAR_6;
 FUNC_4(VAR_7->name, "SGI HAL2");


 FUNC_3(VAR_7, VAR_3,
   &VAR_5);
 FUNC_3(VAR_7, VAR_2,
   &VAR_4);
 FUNC_1(VAR_7, VAR_1,
        FUNC_0(VAR_0),
        0, 1024 * 1024);

 return 0;
}
