
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct wav_fmt {scalar_t__ channels; scalar_t__ bits_per_sample; scalar_t__ samples_per_sec; } ;
struct nhlt_specific_cfg {scalar_t__ size; scalar_t__ caps; } ;
struct TYPE_2__ {struct wav_fmt fmt; } ;
struct nhlt_fmt_cfg {struct nhlt_specific_cfg config; TYPE_1__ fmt_ext; } ;
struct nhlt_fmt {int fmt_count; struct nhlt_fmt_cfg* fmt_config; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,scalar_t__,...) ;

__attribute__((used)) static struct nhlt_specific_cfg *FUNC_1(
  struct device *VAR_1, struct nhlt_fmt *VAR_2,
  u8 VAR_3, u32 VAR_4, u16 VAR_5, u8 VAR_6)
{
 struct nhlt_specific_cfg *VAR_7;
 struct wav_fmt *VAR_8;
 struct nhlt_fmt_cfg *VAR_9 = VAR_2->fmt_config;
 int VAR_10;

 FUNC_0(VAR_1, "Format count =%d\n", VAR_2->fmt_count);

 for (VAR_10 = 0; VAR_10 < VAR_2->fmt_count; VAR_10++) {
  VAR_8 = &VAR_9->fmt_ext.fmt;
  FUNC_0(VAR_1, "ch=%d fmt=%d s_rate=%d\n", VAR_8->channels,
    VAR_8->bits_per_sample, VAR_8->samples_per_sec);
  if (VAR_8->channels == VAR_3 && VAR_8->bits_per_sample == VAR_5) {




   VAR_7 = &VAR_9->config;
   if (VAR_6 == VAR_0)
    return VAR_7;

   if (VAR_8->samples_per_sec == VAR_4)
    return VAR_7;
  }

  VAR_9 = (struct nhlt_fmt_cfg *)(VAR_9->config.caps +
      VAR_9->config.size);
 }

 return ((void*)0);
}
