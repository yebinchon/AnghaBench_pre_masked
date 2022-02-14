
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct max98088_priv {scalar_t__ sysclk; struct max98088_cdata* dai; } ;
struct max98088_cdata {unsigned int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned long long,unsigned long long) ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_4 (unsigned int,int *) ;
 struct max98088_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_8 (struct snd_soc_component*,int ,unsigned long long) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_12,
                                  struct snd_pcm_hw_params *VAR_13,
                                  struct snd_soc_dai *VAR_14)
{
       struct snd_soc_component *VAR_15 = VAR_14->component;
       struct max98088_priv *VAR_16 = FUNC_5(VAR_15);
       struct max98088_cdata *VAR_17;
       unsigned long long VAR_18;
       unsigned int VAR_19;
       u8 VAR_20;

       VAR_17 = &VAR_16->dai[1];

       VAR_19 = FUNC_2(VAR_13);

       switch (FUNC_3(VAR_13)) {
       case 16:
               FUNC_7(VAR_15, VAR_8,
                       VAR_4, 0);
               break;
       case 24:
               FUNC_7(VAR_15, VAR_8,
                       VAR_4, VAR_4);
               break;
       default:
               return -VAR_0;
       }

       FUNC_7(VAR_15, VAR_10, VAR_11, 0);

       if (FUNC_4(VAR_19, &VAR_20))
               return -VAR_0;

       FUNC_7(VAR_15, VAR_5,
               VAR_1, VAR_20);
       VAR_17->rate = VAR_19;


       if (FUNC_6(VAR_15, VAR_8)
               & VAR_3) {
               if (VAR_16->sysclk == 0) {
                       FUNC_0(VAR_15->dev, "Invalid system clock frequency\n");
                       return -VAR_0;
               }
               VAR_18 = 65536ULL * (VAR_19 < 50000 ? 96ULL : 48ULL)
                               * (unsigned long long int)VAR_19;
               FUNC_1(VAR_18, (unsigned long long int)VAR_16->sysclk);
               FUNC_8(VAR_15, VAR_6,
                       (VAR_18 >> 8) & 0x7F);
               FUNC_8(VAR_15, VAR_7,
                       VAR_18 & 0xFF);
       }


       if (VAR_19 < 50000)
               FUNC_7(VAR_15, VAR_9,
                       VAR_2, 0);
       else
               FUNC_7(VAR_15, VAR_9,
                       VAR_2, VAR_2);

       FUNC_7(VAR_15, VAR_10, VAR_11,
               VAR_11);

       return 0;
}
