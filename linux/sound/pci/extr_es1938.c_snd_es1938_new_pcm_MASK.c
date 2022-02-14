
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; scalar_t__ info_flags; struct es1938* private_data; } ;
struct es1938 {struct snd_pcm* pcm; int pci; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct es1938 *VAR_5, int VAR_6)
{
 struct snd_pcm *VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_2(VAR_5->card, "es-1938-1946", VAR_6, 2, 1, &VAR_7)) < 0)
  return VAR_8;
 FUNC_3(VAR_7, VAR_2, &VAR_4);
 FUNC_3(VAR_7, VAR_1, &VAR_3);

 VAR_7->private_data = VAR_5;
 VAR_7->info_flags = 0;
 FUNC_4(VAR_7->name, "ESS Solo-1");

 FUNC_1(VAR_7, VAR_0,
           FUNC_0(VAR_5->pci), 64*1024, 64*1024);

 VAR_5->pcm = VAR_7;
 return 0;
}
