
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct hda_amp_list* amplist; } ;
struct TYPE_4__ {TYPE_1__ loopback; } ;
struct via_spec {TYPE_2__ gen; } ;
struct hda_codec {struct via_spec* spec; } ;
struct hda_amp_list {int idx; int dir; scalar_t__ nid; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,scalar_t__,int,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct hda_codec *VAR_1)
{
 struct via_spec *VAR_2 = VAR_1->spec;
 const struct hda_amp_list *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = VAR_2->gen.loopback.amplist;
 if (!VAR_3)
  return 1;
 for (; VAR_3->nid; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
   VAR_5 = FUNC_0(VAR_1, VAR_3->nid, VAR_4, VAR_3->dir,
         VAR_3->idx);
   if (!(VAR_5 & VAR_0) && VAR_5 > 0)
    return 0;
  }
 }
 return 1;
}
