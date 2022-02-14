
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_motu {TYPE_2__* spec; } ;
typedef int reg ;
typedef int __be32 ;
struct TYPE_4__ {TYPE_1__* protocol; } ;
struct TYPE_3__ {int (* switch_fetching_mode ) (struct snd_motu*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_motu*,int ,int *,int) ;
 int FUNC_3 (struct snd_motu*,int ,int *,int) ;
 int FUNC_4 (struct snd_motu*,int) ;

__attribute__((used)) static void FUNC_5(struct snd_motu *VAR_5)
{
 __be32 VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = VAR_5->spec->protocol->switch_fetching_mode(VAR_5, 0);
 if (VAR_8 < 0)
  return;

 VAR_8 = FUNC_2(VAR_5, VAR_2, &VAR_6,
     sizeof(VAR_6));
 if (VAR_8 < 0)
  return;
 VAR_7 = FUNC_0(VAR_6);

 VAR_7 &= ~(VAR_3 | VAR_4);
 VAR_7 |= VAR_0 | VAR_1;

 VAR_6 = FUNC_1(VAR_7);
 FUNC_3(VAR_5, VAR_2, &VAR_6,
       sizeof(VAR_6));
}
