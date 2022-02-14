
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* snd_soc_dai_link ;
struct TYPE_2__ {void** dai_link; unsigned int num_links; int dev; } ;
struct axg_card {void** link_data; TYPE_1__ card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (void**,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct axg_card *VAR_3,
         unsigned int VAR_4)
{
 struct snd_soc_dai_link *VAR_5;
 void **VAR_6;

 VAR_5 = FUNC_1(VAR_3->card.dai_link,
    VAR_4 * sizeof(*VAR_3->card.dai_link),
    VAR_1 | VAR_2);
 VAR_6 = FUNC_1(VAR_3->link_data,
    VAR_4 * sizeof(*VAR_3->link_data),
    VAR_1 | VAR_2);

 if (!VAR_5 || !VAR_6) {
  FUNC_0(VAR_3->card.dev, "failed to allocate links\n");
  return -VAR_0;
 }

 VAR_3->card.dai_link = VAR_5;
 VAR_3->link_data = VAR_6;
 VAR_3->card.num_links = VAR_4;
 return 0;
}
