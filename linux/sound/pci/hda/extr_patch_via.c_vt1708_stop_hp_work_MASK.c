
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hp_outs; } ;
struct TYPE_4__ {TYPE_1__ autocfg; } ;
struct via_spec {scalar_t__ codec_type; int hp_work_active; TYPE_2__ gen; } ;
struct hda_codec {int jackpoll_work; scalar_t__ jackpoll_interval; struct via_spec* spec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hda_codec*,int,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1)
{
 struct via_spec *VAR_2 = VAR_1->spec;
 if (VAR_2->codec_type != VAR_0 || !VAR_2->gen.autocfg.hp_outs)
  return;
 if (VAR_2->hp_work_active) {
  FUNC_1(VAR_1, 0x1, 0, 0xf81, 1);
  VAR_1->jackpoll_interval = 0;
  FUNC_0(&VAR_1->jackpoll_work);
  VAR_2->hp_work_active = 0;
 }
}
