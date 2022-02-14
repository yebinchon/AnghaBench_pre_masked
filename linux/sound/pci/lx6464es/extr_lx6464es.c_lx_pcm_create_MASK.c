
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm {int nonatomic; int name; scalar_t__ info_flags; struct lx6464es* private_data; } ;
struct TYPE_2__ {int is_capture; } ;
struct lx6464es {TYPE_1__ capture_stream; struct snd_pcm* pcm; int pci; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (int ,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct lx6464es *VAR_8)
{
 int VAR_9;
 struct snd_pcm *VAR_10;

 u32 VAR_11 = 64 *
  3 *
  VAR_0 *
  VAR_1 *
  2;

 VAR_11 = FUNC_0(VAR_11);


 VAR_9 = FUNC_3(VAR_8->card, (char *)VAR_5, 0,
     1, 1, &VAR_10);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_10->private_data = VAR_8;

 FUNC_4(VAR_10, VAR_4, &VAR_7);
 FUNC_4(VAR_10, VAR_3, &VAR_6);

 VAR_10->info_flags = 0;
 VAR_10->nonatomic = 1;
 FUNC_5(VAR_10->name, VAR_5);

 FUNC_2(VAR_10, VAR_2,
           FUNC_1(VAR_8->pci),
           VAR_11, VAR_11);

 VAR_8->pcm = VAR_10;
 VAR_8->capture_stream.is_capture = 1;

 return 0;
}
