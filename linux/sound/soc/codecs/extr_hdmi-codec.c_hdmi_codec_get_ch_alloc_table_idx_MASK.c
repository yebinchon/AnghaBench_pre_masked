
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdmi_codec_priv {int eld; } ;
struct hdmi_codec_cea_spk_alloc {scalar_t__ ca_id; unsigned char n_ch; unsigned long mask; } ;


 int FUNC_0 (struct hdmi_codec_cea_spk_alloc*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct hdmi_codec_cea_spk_alloc* VAR_1 ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hdmi_codec_priv *VAR_2,
          unsigned char VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 unsigned long VAR_6;
 const struct hdmi_codec_cea_spk_alloc *VAR_7 = VAR_1;

 VAR_5 = FUNC_1(VAR_2->eld);
 VAR_6 = FUNC_2(VAR_5);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++, VAR_7++) {

  if (!VAR_5 && VAR_7->ca_id == 0)
   return VAR_4;
  if (VAR_7->n_ch != VAR_3)
   continue;
  if (!(VAR_7->mask == (VAR_6 & VAR_7->mask)))
   continue;
  return VAR_4;
 }

 return -VAR_0;
}
