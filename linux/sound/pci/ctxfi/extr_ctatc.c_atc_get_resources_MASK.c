
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sum_mgr {int (* get_src ) (struct sum_mgr*,struct src_desc*,struct src**) ;int (* get_srcimp ) (struct sum_mgr*,struct srcimp_desc*,struct srcimp**) ;int (* get_sum ) (struct sum_mgr*,struct sum_desc*,struct sum**) ;} ;
struct sum_desc {int msr; int member_0; } ;
struct sum {int dummy; } ;
struct srcimp_mgr {int (* get_src ) (struct sum_mgr*,struct src_desc*,struct src**) ;int (* get_srcimp ) (struct sum_mgr*,struct srcimp_desc*,struct srcimp**) ;int (* get_sum ) (struct sum_mgr*,struct sum_desc*,struct sum**) ;} ;
struct srcimp_desc {int msr; int member_0; } ;
struct srcimp {int dummy; } ;
struct src_mgr {int (* get_src ) (struct sum_mgr*,struct src_desc*,struct src**) ;int (* get_srcimp ) (struct sum_mgr*,struct srcimp_desc*,struct srcimp**) ;int (* get_sum ) (struct sum_mgr*,struct sum_desc*,struct sum**) ;} ;
struct src_desc {int multi; int mode; int msr; int member_0; } ;
struct src {int dummy; } ;
struct daio_mgr {int (* get_daio ) (struct daio_mgr*,struct daio_desc*,struct daio**) ;} ;
struct daio_desc {int type; int msr; int member_0; } ;
struct daio {int dummy; } ;
struct ct_atc {scalar_t__ model; scalar_t__ n_pcm; int * pcm; int msr; struct sum_mgr** rsc_mgrs; scalar_t__ n_srcimp; int * srcimps; scalar_t__ n_src; int * srcs; scalar_t__ n_daio; TYPE_1__* card; int * daios; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (int ,char*,int) ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct daio_mgr*,struct daio_desc*,struct daio**) ;
 int FUNC_3 (struct sum_mgr*,struct src_desc*,struct src**) ;
 int FUNC_4 (struct sum_mgr*,struct srcimp_desc*,struct srcimp**) ;
 int FUNC_5 (struct sum_mgr*,struct sum_desc*,struct sum**) ;

__attribute__((used)) static int FUNC_6(struct ct_atc *VAR_11)
{
 struct daio_desc VAR_12 = {0};
 struct daio_mgr *VAR_13;
 struct src_desc VAR_14 = {0};
 struct src_mgr *VAR_15;
 struct srcimp_desc VAR_16 = {0};
 struct srcimp_mgr *VAR_17;
 struct sum_desc VAR_18 = {0};
 struct sum_mgr *VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_23 = ((VAR_11->model == VAR_2) ? 8 : 7);
 VAR_22 = ((VAR_11->model == VAR_2) ? 6 : 4);

 VAR_11->daios = FUNC_1(VAR_23, sizeof(void *), VAR_5);
 if (!VAR_11->daios)
  return -VAR_4;

 VAR_11->srcs = FUNC_1(VAR_22, sizeof(void *), VAR_5);
 if (!VAR_11->srcs)
  return -VAR_4;

 VAR_11->srcimps = FUNC_1(VAR_22, sizeof(void *), VAR_5);
 if (!VAR_11->srcimps)
  return -VAR_4;

 VAR_11->pcm = FUNC_1(2 * 4, sizeof(void *), VAR_5);
 if (!VAR_11->pcm)
  return -VAR_4;

 VAR_13 = (struct daio_mgr *)VAR_11->rsc_mgrs[VAR_3];
 VAR_12.msr = VAR_11->msr;
 for (VAR_21 = 0, VAR_11->n_daio = 0; VAR_21 < VAR_23; VAR_21++) {
  VAR_12.type = (VAR_11->model != VAR_1) ? VAR_21 :
        ((VAR_21 == VAR_7) ? VAR_6 : VAR_21);
  VAR_20 = VAR_13->get_daio(VAR_13, &VAR_12,
     (struct daio **)&VAR_11->daios[VAR_21]);
  if (VAR_20) {
   FUNC_0(VAR_11->card->dev,
    "Failed to get DAIO resource %d!!!\n",
    VAR_21);
   return VAR_20;
  }
  VAR_11->n_daio++;
 }

 VAR_15 = VAR_11->rsc_mgrs[VAR_8];
 VAR_14.multi = 1;
 VAR_14.msr = VAR_11->msr;
 VAR_14.mode = VAR_0;
 for (VAR_21 = 0, VAR_11->n_src = 0; VAR_21 < VAR_22; VAR_21++) {
  VAR_20 = VAR_15->get_src(VAR_15, &VAR_14,
     (struct src **)&VAR_11->srcs[VAR_21]);
  if (VAR_20)
   return VAR_20;

  VAR_11->n_src++;
 }

 VAR_17 = VAR_11->rsc_mgrs[VAR_9];
 VAR_16.msr = 8;
 for (VAR_21 = 0, VAR_11->n_srcimp = 0; VAR_21 < VAR_22; VAR_21++) {
  VAR_20 = VAR_17->get_srcimp(VAR_17, &VAR_16,
     (struct srcimp **)&VAR_11->srcimps[VAR_21]);
  if (VAR_20)
   return VAR_20;

  VAR_11->n_srcimp++;
 }

 VAR_19 = VAR_11->rsc_mgrs[VAR_10];
 VAR_18.msr = VAR_11->msr;
 for (VAR_21 = 0, VAR_11->n_pcm = 0; VAR_21 < (2*4); VAR_21++) {
  VAR_20 = VAR_19->get_sum(VAR_19, &VAR_18,
     (struct sum **)&VAR_11->pcm[VAR_21]);
  if (VAR_20)
   return VAR_20;

  VAR_11->n_pcm++;
 }

 return 0;
}
