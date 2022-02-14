
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dapm_widget {int dummy; } ;
struct axg_tdm_stream {TYPE_1__* iface; } ;
struct axg_tdm_formatter {int pclk; struct axg_tdm_stream* stream; int lrclk_sel; int sclk_sel; TYPE_3__* drv; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {struct axg_tdm_stream* (* get_stream ) (struct snd_soc_dapm_widget*) ;} ;
struct TYPE_4__ {int lrclk; int sclk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct axg_tdm_formatter*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 struct axg_tdm_stream* FUNC_5 (struct snd_soc_dapm_widget*) ;

__attribute__((used)) static int FUNC_6(struct axg_tdm_formatter *VAR_1,
          struct snd_soc_dapm_widget *VAR_2)
{
 struct axg_tdm_stream *VAR_3 = VAR_1->drv->ops->get_stream(VAR_2);
 int VAR_4;






 if (FUNC_0(!VAR_3))
  return -VAR_0;


 VAR_4 = FUNC_3(VAR_1->pclk);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_4(VAR_1->sclk_sel, VAR_3->iface->sclk);
 if (VAR_4)
  goto disable_pclk;


 VAR_4 = FUNC_4(VAR_1->lrclk_sel, VAR_3->iface->lrclk);
 if (VAR_4)
  goto disable_pclk;

 VAR_1->stream = VAR_3;
 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  goto disable_pclk;

 return 0;

disable_pclk:
 FUNC_2(VAR_1->pclk);
 return VAR_4;
}
