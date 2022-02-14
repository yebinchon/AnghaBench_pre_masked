
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct special_params {scalar_t__ ctl_id_sync; } ;
struct snd_bebob {int card; int unit; struct special_params* maudio_special_quirk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_bebob *VAR_3, unsigned int VAR_4)
{
 struct special_params *VAR_5 = VAR_3->maudio_special_quirk;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3->unit, VAR_4,
          VAR_1, 0);
 if (VAR_6 < 0)
  goto end;





 FUNC_1(100);

 VAR_6 = FUNC_0(VAR_3->unit, VAR_4,
          VAR_0, 0);
 if (VAR_6 < 0)
  goto end;

 if (VAR_5->ctl_id_sync)
  FUNC_2(VAR_3->card, VAR_2,
          VAR_5->ctl_id_sync);
end:
 return VAR_6;
}
