
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_card {int shortname; } ;
struct echoaudio {TYPE_1__* rmidi; } ;
struct TYPE_3__ {int info_flags; struct echoaudio* private_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_card*,int ,int ,int,int,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_card *VAR_7,
    struct echoaudio *VAR_8)
{
 int VAR_9;

 if ((VAR_9 = FUNC_0(VAR_7, VAR_7->shortname, 0, 1, 1,
       &VAR_8->rmidi)) < 0)
  return VAR_9;

 FUNC_2(VAR_8->rmidi->name, VAR_7->shortname);
 VAR_8->rmidi->private_data = VAR_8;

 FUNC_1(VAR_8->rmidi, VAR_3,
       &VAR_5);
 FUNC_1(VAR_8->rmidi, VAR_4,
       &VAR_6);

 VAR_8->rmidi->info_flags |= VAR_2 |
  VAR_1 | VAR_0;
 return 0;
}
