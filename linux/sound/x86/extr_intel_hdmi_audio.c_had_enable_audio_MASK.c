
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int aud_en; } ;
struct TYPE_4__ {int regval; TYPE_1__ regx; } ;
struct snd_intelhad {TYPE_2__ aud_config; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_intelhad*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_intelhad *VAR_1,
        bool VAR_2)
{

 VAR_1->aud_config.regx.aud_en = VAR_2;
 FUNC_0(VAR_1, VAR_0,
      VAR_1->aud_config.regval);
}
