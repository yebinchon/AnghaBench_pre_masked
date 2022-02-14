
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ad198x_spec* spec; } ;
struct ad198x_spec {scalar_t__ eapd_nid; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, int VAR_2)
{
 struct hda_codec *VAR_3 = VAR_1;
 struct ad198x_spec *VAR_4 = VAR_3->spec;

 if (VAR_4->eapd_nid)
  FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_3, 0x01, 0,
       VAR_0,
       VAR_2 ? 0x00 : 0x02);
}
