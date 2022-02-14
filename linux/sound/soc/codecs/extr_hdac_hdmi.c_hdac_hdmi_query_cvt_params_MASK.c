
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int channels_max; } ;
struct hdac_hdmi_priv {TYPE_1__ chmap; } ;
struct TYPE_4__ {int channels_min; unsigned int channels_max; int maxbps; int formats; int rates; } ;
struct hdac_hdmi_cvt {int nid; TYPE_2__ params; } ;
struct hdac_device {int dev; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 unsigned int FUNC_1 (struct hdac_device*,int ) ;
 unsigned int FUNC_2 (unsigned int) ;
 struct hdac_hdmi_priv* FUNC_3 (struct hdac_device*) ;
 int FUNC_4 (struct hdac_device*,int ,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct hdac_device *VAR_0, struct hdac_hdmi_cvt *VAR_1)
{
 unsigned int VAR_2;
 struct hdac_hdmi_priv *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;

 VAR_2 = FUNC_1(VAR_0, VAR_1->nid);
 VAR_2 = FUNC_2(VAR_2);

 VAR_1->params.channels_min = 2;

 VAR_1->params.channels_max = VAR_2;
 if (VAR_2 > VAR_3->chmap.channels_max)
  VAR_3->chmap.channels_max = VAR_2;

 VAR_4 = FUNC_4(VAR_0, VAR_1->nid,
   &VAR_1->params.rates,
   &VAR_1->params.formats,
   &VAR_1->params.maxbps);
 if (VAR_4 < 0)
  FUNC_0(&VAR_0->dev,
   "Failed to query pcm params for nid %d: %d\n",
   VAR_1->nid, VAR_4);

 return VAR_4;
}
