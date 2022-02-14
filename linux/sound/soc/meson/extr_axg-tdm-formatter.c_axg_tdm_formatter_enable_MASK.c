
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct axg_tdm_stream {TYPE_1__* iface; } ;
struct axg_tdm_formatter {int enabled; int map; TYPE_3__* drv; int sclk; int lrclk; struct axg_tdm_stream* stream; int reset; } ;
struct TYPE_8__ {int invert_sclk; } ;
struct TYPE_7__ {TYPE_2__* ops; TYPE_4__* quirks; } ;
struct TYPE_6__ {int (* prepare ) (int ,TYPE_4__*,struct axg_tdm_stream*) ;int (* enable ) (int ) ;} ;
struct TYPE_5__ {int fmt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_4__*,struct axg_tdm_stream*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct axg_tdm_formatter *VAR_0)
{
 struct axg_tdm_stream *VAR_1 = VAR_0->stream;
 bool VAR_2 = VAR_0->drv->quirks->invert_sclk;
 int VAR_3;


 if (VAR_0->enabled)
  return 0;
 VAR_3 = FUNC_4(VAR_0->reset);
 if (VAR_3)
  return VAR_3;





 VAR_2 ^= FUNC_0(VAR_1->iface->fmt);
 VAR_3 = FUNC_3(VAR_0->sclk, VAR_2 ? 180 : 0);
 if (VAR_3)
  return VAR_3;


 VAR_3 = VAR_0->drv->ops->prepare(VAR_0->map,
        VAR_0->drv->quirks,
        VAR_0->stream);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_2(VAR_0->sclk);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_0->lrclk);
 if (VAR_3) {
  FUNC_1(VAR_0->sclk);
  return VAR_3;
 }


 VAR_0->drv->ops->enable(VAR_0->map);
 VAR_0->enabled = 1;

 return 0;
}
