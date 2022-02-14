
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct src_mgr {int (* get_src ) (struct src_mgr*,struct src_desc*,struct src**) ;int (* get_amixer ) (struct src_mgr*,struct amixer_desc*,struct amixer**) ;} ;
struct src_desc {int multi; int msr; int mode; int member_0; } ;
struct src {TYPE_5__* ops; int rsc; } ;
struct ct_atc_pcm {int timer; struct src* src; struct amixer** amixers; scalar_t__ n_amixer; TYPE_3__* substream; } ;
struct ct_atc {int msr; int rsr; int atc_mutex; int * pcm; int card; struct src_mgr** rsc_mgrs; } ;
struct amixer_mgr {int (* get_src ) (struct src_mgr*,struct src_desc*,struct src**) ;int (* get_amixer ) (struct src_mgr*,struct amixer_desc*,struct amixer**) ;} ;
struct amixer_desc {int msr; int member_0; } ;
struct amixer {TYPE_4__* ops; } ;
struct TYPE_10__ {struct src* (* next_interleave ) (struct src*) ;int (* set_pm ) (struct src*,int ) ;int (* set_sf ) (struct src*,int ) ;int (* set_rom ) (struct src*,int ) ;int (* set_pitch ) (struct src*,unsigned int) ;} ;
struct TYPE_9__ {int (* setup ) (struct amixer*,int *,int ,int ) ;} ;
struct TYPE_8__ {TYPE_2__* runtime; TYPE_1__* pcm; } ;
struct TYPE_7__ {int channels; int format; int rate; } ;
struct TYPE_6__ {int device; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (struct ct_atc*,struct ct_atc_pcm*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ct_atc*,struct ct_atc_pcm*) ;
 int FUNC_4 (int ) ;
 struct amixer** FUNC_5 (int,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (struct src_mgr*,struct src_desc*,struct src**) ;
 int FUNC_10 (struct src*,unsigned int) ;
 int FUNC_11 (struct src*,int ) ;
 int FUNC_12 (struct src*,int ) ;
 int FUNC_13 (struct src*,int ) ;
 struct src* FUNC_14 (struct src*) ;
 int FUNC_15 (struct src_mgr*,struct amixer_desc*,struct amixer**) ;
 int FUNC_16 (struct amixer*,int *,int ,int ) ;
 struct src* FUNC_17 (struct src*) ;

__attribute__((used)) static int FUNC_18(struct ct_atc *VAR_6, struct ct_atc_pcm *VAR_7)
{
 struct src_mgr *VAR_8 = VAR_6->rsc_mgrs[VAR_5];
 struct amixer_mgr *VAR_9 = VAR_6->rsc_mgrs[VAR_0];
 struct src_desc VAR_10 = {0};
 struct amixer_desc VAR_11 = {0};
 struct src *VAR_12;
 struct amixer *VAR_13;
 int VAR_14;
 int VAR_15 = VAR_7->substream->runtime->channels, VAR_16 = 0;
 int VAR_17 = VAR_7->substream->pcm->device;
 unsigned int VAR_18;


 FUNC_1(VAR_6, VAR_7);


 VAR_10.multi = VAR_7->substream->runtime->channels;
 VAR_10.msr = VAR_6->msr;
 VAR_10.mode = VAR_4;
 VAR_14 = VAR_8->get_src(VAR_8, &VAR_10, (struct src **)&VAR_7->src);
 if (VAR_14)
  goto error1;

 VAR_18 = FUNC_0(VAR_7->substream->runtime->rate,
      (VAR_6->rsr * VAR_6->msr));
 VAR_12 = VAR_7->src;
 VAR_12->ops->set_pitch(VAR_12, VAR_18);
 VAR_12->ops->set_rom(VAR_12, FUNC_8(VAR_18));
 VAR_12->ops->set_sf(VAR_12, FUNC_2(VAR_7->substream->runtime->format,
          VAR_6->card));
 VAR_12->ops->set_pm(VAR_12, (VAR_12->ops->next_interleave(VAR_12) != ((void*)0)));


 VAR_15 = (VAR_15 < 2) ? 2 : VAR_15;
 VAR_7->amixers = FUNC_5(VAR_15, sizeof(void *), VAR_2);
 if (!VAR_7->amixers) {
  VAR_14 = -VAR_1;
  goto error1;
 }
 VAR_11.msr = VAR_6->msr;
 for (VAR_16 = 0, VAR_7->n_amixer = 0; VAR_16 < VAR_15; VAR_16++) {
  VAR_14 = VAR_9->get_amixer(VAR_9, &VAR_11,
     (struct amixer **)&VAR_7->amixers[VAR_16]);
  if (VAR_14)
   goto error1;

  VAR_7->n_amixer++;
 }


 VAR_14 = FUNC_3(VAR_6, VAR_7);
 if (VAR_14 < 0)
  goto error1;


 VAR_12 = VAR_7->src;
 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  VAR_13 = VAR_7->amixers[VAR_16];
  FUNC_6(&VAR_6->atc_mutex);
  VAR_13->ops->setup(VAR_13, &VAR_12->rsc,
     VAR_3, VAR_6->pcm[VAR_16+VAR_17*2]);
  FUNC_7(&VAR_6->atc_mutex);
  VAR_12 = VAR_12->ops->next_interleave(VAR_12);
  if (!VAR_12)
   VAR_12 = VAR_7->src;
 }

 FUNC_4(VAR_7->timer);

 return 0;

error1:
 FUNC_1(VAR_6, VAR_7);
 return VAR_14;
}
