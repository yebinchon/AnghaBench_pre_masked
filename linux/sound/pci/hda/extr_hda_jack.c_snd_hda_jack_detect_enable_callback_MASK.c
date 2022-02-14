
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {int jack_detect; int tag; struct hda_jack_callback* callback; int nid; } ;
struct hda_jack_callback {struct hda_jack_callback* next; int nid; scalar_t__ func; } ;
struct hda_codec {scalar_t__ jackpoll_interval; } ;
typedef int hda_nid_t ;
typedef scalar_t__ hda_jack_callback_fn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hda_jack_callback* FUNC_0 (int) ;
 int VAR_3 ;
 struct hda_jack_callback* FUNC_1 (int,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int) ;
 struct hda_jack_tbl* FUNC_3 (struct hda_codec*,int ) ;

struct hda_jack_callback *
FUNC_4(struct hda_codec *VAR_4, hda_nid_t VAR_5,
        hda_jack_callback_fn VAR_6)
{
 struct hda_jack_tbl *VAR_7;
 struct hda_jack_callback *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_7 = FUNC_3(VAR_4, VAR_5);
 if (!VAR_7)
  return FUNC_0(-VAR_2);
 if (VAR_6) {
  VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_3);
  if (!VAR_8)
   return FUNC_0(-VAR_2);
  VAR_8->func = VAR_6;
  VAR_8->nid = VAR_7->nid;
  VAR_8->next = VAR_7->callback;
  VAR_7->callback = VAR_8;
 }

 if (VAR_7->jack_detect)
  return VAR_8;
 VAR_7->jack_detect = 1;
 if (VAR_4->jackpoll_interval > 0)
  return VAR_8;
 VAR_9 = FUNC_2(VAR_4, VAR_5, 0,
      VAR_1,
      VAR_0 | VAR_7->tag);
 if (VAR_9 < 0)
  return FUNC_0(VAR_9);
 return VAR_8;
}
