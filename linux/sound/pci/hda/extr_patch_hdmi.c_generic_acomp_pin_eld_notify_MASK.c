
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec {int (* port2pin ) (struct hda_codec*,int) ;} ;
struct hda_codec {int core; int card; struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_6(void *VAR_2, int VAR_3, int VAR_4)
{
 struct hda_codec *VAR_5 = VAR_2;
 struct hdmi_spec *VAR_6 = VAR_5->spec;
 hda_nid_t VAR_7 = VAR_6->port2pin(VAR_5, VAR_3);

 if (!VAR_7)
  return;
 if (FUNC_2(FUNC_1(VAR_5, VAR_7)) != VAR_0)
  return;



 if (FUNC_4(VAR_5->card) != VAR_1)
  return;

 if (FUNC_3(&VAR_5->core))
  return;

 FUNC_0(VAR_5, VAR_7, VAR_4);
}
