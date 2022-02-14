
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int afg; } ;
struct hda_codec {TYPE_1__ core; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ) ;

u32 FUNC_2(struct hda_codec *VAR_4, hda_nid_t VAR_5, int VAR_6)
{
 if (!(FUNC_0(VAR_4, VAR_5) & VAR_2))
  VAR_5 = VAR_4->core.afg;
 return FUNC_1(VAR_4, VAR_5,
      VAR_6 == VAR_3 ?
      VAR_1 : VAR_0);
}
