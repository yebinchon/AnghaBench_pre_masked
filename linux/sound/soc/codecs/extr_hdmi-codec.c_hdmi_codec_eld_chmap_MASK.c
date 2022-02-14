
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hdmi_codec_priv {TYPE_1__* chmap_info; int eld; } ;
struct TYPE_2__ {int max_channels; int chmap; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 unsigned long FUNC_1 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct hdmi_codec_priv *VAR_4)
{
 u8 VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_0(VAR_4->eld);
 VAR_6 = FUNC_1(VAR_5);


 if ((VAR_6 & ~(VAR_0 | VAR_1)) && VAR_4->chmap_info->max_channels > 2)
  VAR_4->chmap_info->chmap = VAR_2;
 else
  VAR_4->chmap_info->chmap = VAR_3;
}
