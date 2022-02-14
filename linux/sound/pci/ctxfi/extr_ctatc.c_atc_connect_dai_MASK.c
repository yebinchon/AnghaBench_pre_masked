
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct srcimp {TYPE_2__* ops; } ;
struct src_mgr {int (* commit_write ) (struct src_mgr*) ;int (* src_enable_s ) (struct src_mgr*,struct src*) ;int (* src_disable ) (struct src_mgr*,struct src*) ;} ;
struct src {int rsc; TYPE_3__* ops; } ;
struct rsc {int dummy; } ;
struct TYPE_5__ {struct rsc rscr; struct rsc rscl; } ;
struct dai {TYPE_4__* ops; TYPE_1__ daio; } ;
struct TYPE_8__ {int (* commit_write ) (struct dai*) ;int (* set_enb_srt ) (struct dai*,int) ;int (* set_enb_src ) (struct dai*,int) ;int (* set_srt_srcr ) (struct dai*,int *) ;int (* set_srt_srcl ) (struct dai*,int *) ;} ;
struct TYPE_7__ {int (* commit_write ) (struct src*) ;int (* set_state ) (struct src*,int ) ;int (* set_pm ) (struct src*,int) ;} ;
struct TYPE_6__ {int (* map ) (struct srcimp*,struct src*,struct rsc*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct srcimp*,struct src*,struct rsc*) ;
 int FUNC_1 (struct dai*,int) ;
 int FUNC_2 (struct dai*,int) ;
 int FUNC_3 (struct dai*) ;
 int FUNC_4 (struct src_mgr*) ;
 int FUNC_5 (struct src_mgr*,struct src*) ;
 int FUNC_6 (struct src_mgr*) ;
 int FUNC_7 (struct src*,int) ;
 int FUNC_8 (struct src*,int ) ;
 int FUNC_9 (struct src*) ;
 int FUNC_10 (struct src_mgr*,struct src*) ;
 int FUNC_11 (struct dai*,int *) ;
 int FUNC_12 (struct dai*,int *) ;

__attribute__((used)) static void
FUNC_13(struct src_mgr *VAR_1, struct dai *VAR_2,
  struct src **VAR_3, struct srcimp **VAR_4)
{
 struct rsc *VAR_5[2] = {((void*)0)};
 struct src *VAR_6;
 struct srcimp *VAR_7;
 int VAR_8 = 0;

 VAR_5[0] = &VAR_2->daio.rscl;
 VAR_5[1] = &VAR_2->daio.rscr;
 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  VAR_6 = VAR_3[VAR_8];
  VAR_7 = VAR_4[VAR_8];
  VAR_7->ops->map(VAR_7, VAR_6, VAR_5[VAR_8]);
  VAR_1->src_disable(VAR_1, VAR_6);
 }

 VAR_1->commit_write(VAR_1);

 VAR_6 = VAR_3[0];
 VAR_6->ops->set_pm(VAR_6, 1);
 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  VAR_6 = VAR_3[VAR_8];
  VAR_6->ops->set_state(VAR_6, VAR_0);
  VAR_6->ops->commit_write(VAR_6);
  VAR_1->src_enable_s(VAR_1, VAR_6);
 }

 VAR_2->ops->set_srt_srcl(VAR_2, &(VAR_3[0]->rsc));
 VAR_2->ops->set_srt_srcr(VAR_2, &(VAR_3[1]->rsc));

 VAR_2->ops->set_enb_src(VAR_2, 1);
 VAR_2->ops->set_enb_srt(VAR_2, 1);
 VAR_2->ops->commit_write(VAR_2);

 VAR_1->commit_write(VAR_1);
}
