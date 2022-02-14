
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int channel; } ;
struct TYPE_3__ {int channel; } ;
struct snd_motu {TYPE_2__ tx_resources; TYPE_1__ rx_resources; } ;
typedef int reg ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_motu*,int ,int *,int) ;
 int FUNC_3 (struct snd_motu*,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct snd_motu *VAR_8)
{
 __be32 VAR_9;
 u32 VAR_10;
 int VAR_11;


 VAR_11 = FUNC_2(VAR_8, VAR_3, &VAR_9,
     sizeof(VAR_9));
 if (VAR_11 < 0)
  return VAR_11;
 VAR_10 = FUNC_0(VAR_9) & ~VAR_2;

 VAR_10 |= VAR_0 | VAR_5 |
  (VAR_8->rx_resources.channel << VAR_4) |
  VAR_1 | VAR_7 |
  (VAR_8->tx_resources.channel << VAR_6);

 VAR_9 = FUNC_1(VAR_10);
 return FUNC_3(VAR_8, VAR_3, &VAR_9,
       sizeof(VAR_9));
}
