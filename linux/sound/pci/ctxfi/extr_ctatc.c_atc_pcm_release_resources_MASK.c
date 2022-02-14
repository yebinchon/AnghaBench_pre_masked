
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sum_mgr {int (* put_src ) (struct sum_mgr*,struct srcimp*) ;int (* put_sum ) (struct sum_mgr*,int *) ;int (* put_amixer ) (struct sum_mgr*,struct srcimp*) ;int (* put_srcimp ) (struct sum_mgr*,struct srcimp*) ;} ;
struct srcimp_mgr {int (* put_src ) (struct sum_mgr*,struct srcimp*) ;int (* put_sum ) (struct sum_mgr*,int *) ;int (* put_amixer ) (struct sum_mgr*,struct srcimp*) ;int (* put_srcimp ) (struct sum_mgr*,struct srcimp*) ;} ;
struct srcimp {TYPE_1__* ops; } ;
struct src_mgr {int (* put_src ) (struct sum_mgr*,struct srcimp*) ;int (* put_sum ) (struct sum_mgr*,int *) ;int (* put_amixer ) (struct sum_mgr*,struct srcimp*) ;int (* put_srcimp ) (struct sum_mgr*,struct srcimp*) ;} ;
struct ct_atc_pcm {int n_srcimp; int n_srcc; int n_amixer; int * vm_block; struct srcimp* src; int * mono; struct srcimp** amixers; struct srcimp** srccs; struct srcimp** srcimps; } ;
struct ct_atc {struct sum_mgr** rsc_mgrs; } ;
struct amixer_mgr {int (* put_src ) (struct sum_mgr*,struct srcimp*) ;int (* put_sum ) (struct sum_mgr*,int *) ;int (* put_amixer ) (struct sum_mgr*,struct srcimp*) ;int (* put_srcimp ) (struct sum_mgr*,struct srcimp*) ;} ;
struct TYPE_2__ {int (* unmap ) (struct srcimp*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct ct_atc*,struct ct_atc_pcm*) ;
 int FUNC_1 (struct srcimp**) ;
 int FUNC_2 (struct srcimp*) ;
 int FUNC_3 (struct sum_mgr*,struct srcimp*) ;
 int FUNC_4 (struct sum_mgr*,struct srcimp*) ;
 int FUNC_5 (struct sum_mgr*,struct srcimp*) ;
 int FUNC_6 (struct sum_mgr*,int *) ;
 int FUNC_7 (struct sum_mgr*,struct srcimp*) ;

__attribute__((used)) static int
FUNC_8(struct ct_atc *VAR_4, struct ct_atc_pcm *VAR_5)
{
 struct src_mgr *VAR_6 = VAR_4->rsc_mgrs[VAR_1];
 struct srcimp_mgr *VAR_7 = VAR_4->rsc_mgrs[VAR_2];
 struct amixer_mgr *VAR_8 = VAR_4->rsc_mgrs[VAR_0];
 struct sum_mgr *VAR_9 = VAR_4->rsc_mgrs[VAR_3];
 struct srcimp *VAR_10;
 int VAR_11;

 if (VAR_5->srcimps) {
  for (VAR_11 = 0; VAR_11 < VAR_5->n_srcimp; VAR_11++) {
   VAR_10 = VAR_5->srcimps[VAR_11];
   VAR_10->ops->unmap(VAR_10);
   VAR_7->put_srcimp(VAR_7, VAR_10);
   VAR_5->srcimps[VAR_11] = ((void*)0);
  }
  FUNC_1(VAR_5->srcimps);
  VAR_5->srcimps = ((void*)0);
 }

 if (VAR_5->srccs) {
  for (VAR_11 = 0; VAR_11 < VAR_5->n_srcc; VAR_11++) {
   VAR_6->put_src(VAR_6, VAR_5->srccs[VAR_11]);
   VAR_5->srccs[VAR_11] = ((void*)0);
  }
  FUNC_1(VAR_5->srccs);
  VAR_5->srccs = ((void*)0);
 }

 if (VAR_5->amixers) {
  for (VAR_11 = 0; VAR_11 < VAR_5->n_amixer; VAR_11++) {
   VAR_8->put_amixer(VAR_8, VAR_5->amixers[VAR_11]);
   VAR_5->amixers[VAR_11] = ((void*)0);
  }
  FUNC_1(VAR_5->amixers);
  VAR_5->amixers = ((void*)0);
 }

 if (VAR_5->mono) {
  VAR_9->put_sum(VAR_9, VAR_5->mono);
  VAR_5->mono = ((void*)0);
 }

 if (VAR_5->src) {
  VAR_6->put_src(VAR_6, VAR_5->src);
  VAR_5->src = ((void*)0);
 }

 if (VAR_5->vm_block) {

  FUNC_0(VAR_4, VAR_5);
  VAR_5->vm_block = ((void*)0);
 }

 return 0;
}
