
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sum_mgr {int (* get_sum ) (struct sum_mgr*,struct sum_desc*,struct sum**) ;int (* put_sum ) (struct sum_mgr*,struct sum*) ;} ;
struct sum_desc {int msr; int member_0; } ;
struct sum {int dummy; } ;
struct ct_mixer {struct sum** sums; struct amixer** amixers; TYPE_2__* atc; } ;
struct amixer_mgr {int (* get_amixer ) (struct amixer_mgr*,struct amixer_desc*,struct amixer**) ;int (* put_amixer ) (struct amixer_mgr*,struct amixer*) ;} ;
struct amixer_desc {int msr; int member_0; } ;
struct amixer {int dummy; } ;
struct TYPE_4__ {TYPE_1__* card; int msr; scalar_t__* rsc_mgrs; } ;
struct TYPE_3__ {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sum_mgr*,struct sum_desc*,struct sum**) ;
 int FUNC_2 (struct amixer_mgr*,struct amixer_desc*,struct amixer**) ;
 int FUNC_3 (struct amixer_mgr*,struct amixer*) ;
 int FUNC_4 (struct sum_mgr*,struct sum*) ;

__attribute__((used)) static int FUNC_5(struct ct_mixer *VAR_5)
{
 struct sum_mgr *VAR_6;
 struct sum *VAR_7;
 struct sum_desc VAR_8 = {0};
 struct amixer_mgr *VAR_9;
 struct amixer *VAR_10;
 struct amixer_desc VAR_11 = {0};
 int VAR_12;
 int VAR_13;


 VAR_6 = (struct sum_mgr *)VAR_5->atc->rsc_mgrs[VAR_4];
 VAR_8.msr = VAR_5->atc->msr;
 for (VAR_13 = 0; VAR_13 < (VAR_3 * VAR_1); VAR_13++) {
  VAR_12 = VAR_6->get_sum(VAR_6, &VAR_8, &VAR_7);
  if (VAR_12) {
   FUNC_0(VAR_5->atc->card->dev,
    "Failed to get sum resources for front output!\n");
   break;
  }
  VAR_5->sums[VAR_13] = VAR_7;
 }
 if (VAR_12)
  goto error1;


 VAR_9 = (struct amixer_mgr *)VAR_5->atc->rsc_mgrs[VAR_0];
 VAR_11.msr = VAR_5->atc->msr;
 for (VAR_13 = 0; VAR_13 < (VAR_2 * VAR_1); VAR_13++) {
  VAR_12 = VAR_9->get_amixer(VAR_9, &VAR_11, &VAR_10);
  if (VAR_12) {
   FUNC_0(VAR_5->atc->card->dev,
    "Failed to get amixer resources for mixer obj!\n");
   break;
  }
  VAR_5->amixers[VAR_13] = VAR_10;
 }
 if (VAR_12)
  goto error2;

 return 0;

error2:
 for (VAR_13 = 0; VAR_13 < (VAR_2 * VAR_1); VAR_13++) {
  if (((void*)0) != VAR_5->amixers[VAR_13]) {
   VAR_10 = VAR_5->amixers[VAR_13];
   VAR_9->put_amixer(VAR_9, VAR_10);
   VAR_5->amixers[VAR_13] = ((void*)0);
  }
 }
error1:
 for (VAR_13 = 0; VAR_13 < (VAR_3 * VAR_1); VAR_13++) {
  if (((void*)0) != VAR_5->sums[VAR_13]) {
   VAR_6->put_sum(VAR_6, (struct sum *)VAR_5->sums[VAR_13]);
   VAR_5->sums[VAR_13] = ((void*)0);
  }
 }

 return VAR_12;
}
