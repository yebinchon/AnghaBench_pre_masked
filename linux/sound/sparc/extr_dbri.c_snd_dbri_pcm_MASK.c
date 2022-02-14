
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; scalar_t__ info_flags; int private_data; } ;
struct snd_card {int shortname; int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (struct snd_card*,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_card *VAR_5)
{
 struct snd_pcm *VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_2(VAR_5,
                        "sun_dbri",
                           0,
                               1,
                               1, &VAR_6)) < 0)
  return VAR_7;

 FUNC_3(VAR_6, VAR_3, &VAR_4);
 FUNC_3(VAR_6, VAR_2, &VAR_4);

 VAR_6->private_data = VAR_5->private_data;
 VAR_6->info_flags = 0;
 FUNC_4(VAR_6->name, VAR_5->shortname);

 FUNC_1(VAR_6, VAR_1,
           FUNC_0(VAR_0),
           64 * 1024, 64 * 1024);
 return 0;
}
