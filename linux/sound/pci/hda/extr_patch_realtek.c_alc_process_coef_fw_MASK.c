
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
struct coef_fw {unsigned short mask; int val; int idx; scalar_t__ nid; } ;


 int FUNC_0 (struct hda_codec*,scalar_t__,int ,unsigned short,int ) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0,
    const struct coef_fw *VAR_1)
{
 for (; VAR_1->nid; VAR_1++) {
  if (VAR_1->mask == (unsigned short)-1)
   FUNC_1(VAR_0, VAR_1->nid, VAR_1->idx, VAR_1->val);
  else
   FUNC_0(VAR_0, VAR_1->nid, VAR_1->idx,
           VAR_1->mask, VAR_1->val);
 }
}
