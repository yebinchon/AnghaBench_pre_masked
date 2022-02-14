
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct src_mgr {int (* get_src ) (struct src_mgr*,struct src_desc*,struct src**) ;int (* get_amixer ) (struct src_mgr*,struct amixer_desc*,struct amixer**) ;} ;
struct src_desc {int multi; int msr; int mode; int member_0; } ;
struct src {TYPE_3__* ops; } ;
struct ct_atc_pcm {scalar_t__ n_amixer; int * amixers; TYPE_2__* substream; struct src* src; } ;
struct ct_atc {unsigned int pll_rate; int card; struct src_mgr** rsc_mgrs; } ;
struct amixer_mgr {int (* get_src ) (struct src_mgr*,struct src_desc*,struct src**) ;int (* get_amixer ) (struct src_mgr*,struct amixer_desc*,struct amixer**) ;} ;
struct amixer_desc {unsigned int msr; int member_0; } ;
struct amixer {int dummy; } ;
struct TYPE_6__ {int (* set_bp ) (struct src*,int) ;int * (* next_interleave ) (struct src*) ;int (* set_pm ) (struct src*,int ) ;int (* set_sf ) (struct src*,int ) ;int (* set_rom ) (struct src*,int ) ;int (* set_pitch ) (struct src*,unsigned int) ;} ;
struct TYPE_5__ {TYPE_1__* runtime; } ;
struct TYPE_4__ {int channels; unsigned int rate; int format; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct ct_atc*,struct ct_atc_pcm*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ct_atc*,struct ct_atc_pcm*) ;
 int * FUNC_4 (int,int,int ) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct src_mgr*,struct src_desc*,struct src**) ;
 int FUNC_7 (struct src*,unsigned int) ;
 int FUNC_8 (struct src*,int ) ;
 int FUNC_9 (struct src*,int ) ;
 int FUNC_10 (struct src*,int ) ;
 int * FUNC_11 (struct src*) ;
 int FUNC_12 (struct src*,int) ;
 int FUNC_13 (struct src_mgr*,struct amixer_desc*,struct amixer**) ;

__attribute__((used)) static int FUNC_14(struct ct_atc *VAR_5,
       struct ct_atc_pcm *VAR_6)
{
 struct src_mgr *VAR_7 = VAR_5->rsc_mgrs[VAR_4];
 struct amixer_mgr *VAR_8 = VAR_5->rsc_mgrs[VAR_0];
 struct src_desc VAR_9 = {0};
 struct amixer_desc VAR_10 = {0};
 struct src *VAR_11;
 int VAR_12;
 int VAR_13 = VAR_6->substream->runtime->channels, VAR_14;
 unsigned int VAR_15, VAR_16 = VAR_5->pll_rate;


 FUNC_1(VAR_5, VAR_6);


 VAR_9.multi = VAR_6->substream->runtime->channels;
 VAR_9.msr = 1;
 while (VAR_6->substream->runtime->rate > (VAR_16 * VAR_9.msr))
  VAR_9.msr <<= 1;

 VAR_9.mode = VAR_3;
 VAR_12 = VAR_7->get_src(VAR_7, &VAR_9, (struct src **)&VAR_6->src);
 if (VAR_12)
  goto error1;

 VAR_15 = FUNC_0(VAR_6->substream->runtime->rate, (VAR_16 * VAR_9.msr));
 VAR_11 = VAR_6->src;
 VAR_11->ops->set_pitch(VAR_11, VAR_15);
 VAR_11->ops->set_rom(VAR_11, FUNC_5(VAR_15));
 VAR_11->ops->set_sf(VAR_11, FUNC_2(VAR_6->substream->runtime->format,
          VAR_5->card));
 VAR_11->ops->set_pm(VAR_11, (VAR_11->ops->next_interleave(VAR_11) != ((void*)0)));
 VAR_11->ops->set_bp(VAR_11, 1);


 VAR_13 = (VAR_13 < 2) ? 2 : VAR_13;
 VAR_6->amixers = FUNC_4(VAR_13, sizeof(void *), VAR_2);
 if (!VAR_6->amixers) {
  VAR_12 = -VAR_1;
  goto error1;
 }
 VAR_10.msr = VAR_9.msr;
 for (VAR_14 = 0, VAR_6->n_amixer = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_12 = VAR_8->get_amixer(VAR_8, &VAR_10,
     (struct amixer **)&VAR_6->amixers[VAR_14]);
  if (VAR_12)
   goto error1;

  VAR_6->n_amixer++;
 }


 VAR_12 = FUNC_3(VAR_5, VAR_6);
 if (VAR_12 < 0)
  goto error1;

 return 0;

error1:
 FUNC_1(VAR_5, VAR_6);
 return VAR_12;
}
