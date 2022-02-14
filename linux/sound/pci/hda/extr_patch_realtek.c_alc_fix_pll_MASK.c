
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int pll_coef_bit; int pll_coef_idx; scalar_t__ pll_nid; } ;


 int FUNC_0 (struct hda_codec*,scalar_t__,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0)
{
 struct alc_spec *VAR_1 = VAR_0->spec;

 if (VAR_1->pll_nid)
  FUNC_0(VAR_0, VAR_1->pll_nid, VAR_1->pll_coef_idx,
          1 << VAR_1->pll_coef_bit, 0);
}
