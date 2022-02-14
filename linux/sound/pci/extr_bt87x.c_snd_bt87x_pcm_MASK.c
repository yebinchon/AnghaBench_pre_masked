
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; struct snd_bt87x* private_data; } ;
struct snd_bt87x {int pci; int card; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int ) ;
 int FUNC_3 (int ,char*,int,int ,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct snd_bt87x *VAR_3, int VAR_4, char *VAR_5)
{
 int VAR_6;
 struct snd_pcm *VAR_7;

 VAR_6 = FUNC_3(VAR_3->card, VAR_5, VAR_4, 0, 1, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7->private_data = VAR_3;
 FUNC_5(VAR_7->name, VAR_5);
 FUNC_4(VAR_7, VAR_1, &VAR_2);
 FUNC_2(VAR_7, VAR_0,
           FUNC_1(VAR_3->pci),
           128 * 1024,
           FUNC_0(255 * 4092, 1024));
 return 0;
}
