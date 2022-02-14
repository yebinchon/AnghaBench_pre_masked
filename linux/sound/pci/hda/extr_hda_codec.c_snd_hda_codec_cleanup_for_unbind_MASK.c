
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int core; int nids; int mixers; scalar_t__ spdif_status_reset; int * slave_dig_outs; int * preset; int verbs; int spdif_out; int cvt_setups; int driver_pins; int * spec; int * proc_widget_hook; int patch_ops; int in_freeing; int jackpoll_work; scalar_t__ registered; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct hda_codec*) ;
 int FUNC_9 (struct hda_codec*) ;
 int FUNC_10 (struct hda_codec*) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct hda_codec *VAR_0)
{
 if (VAR_0->registered) {

  FUNC_5(FUNC_2(VAR_0));
  FUNC_4(FUNC_2(VAR_0));
  VAR_0->registered = 0;
 }

 FUNC_0(&VAR_0->jackpoll_work);
 if (!VAR_0->in_freeing)
  FUNC_8(VAR_0);
 FUNC_1(VAR_0);
 FUNC_9(VAR_0);
 FUNC_3(&VAR_0->patch_ops, 0, sizeof(VAR_0->patch_ops));
 FUNC_10(VAR_0);
 VAR_0->proc_widget_hook = ((void*)0);
 VAR_0->spec = ((void*)0);


 FUNC_7(&VAR_0->driver_pins);
 FUNC_7(&VAR_0->cvt_setups);
 FUNC_7(&VAR_0->spdif_out);
 FUNC_7(&VAR_0->verbs);
 VAR_0->preset = ((void*)0);
 VAR_0->slave_dig_outs = ((void*)0);
 VAR_0->spdif_status_reset = 0;
 FUNC_7(&VAR_0->mixers);
 FUNC_7(&VAR_0->nids);
 FUNC_6(VAR_0);
 FUNC_11(&VAR_0->core);
}
