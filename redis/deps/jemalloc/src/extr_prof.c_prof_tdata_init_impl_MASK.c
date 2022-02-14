
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int tsd_t ;
struct TYPE_6__ {char* thread_name; int attached; int expired; int enq; int enq_idump; int enq_gdump; int dumping; int active; void* prng_state; int bt2tctx; scalar_t__ tctx_uid_next; void* thr_discrim; void* thr_uid; int lock; } ;
typedef TYPE_1__ prof_tdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int,int ,int,int *,int,int ,int) ;
 int FUNC_4 (int ,TYPE_1__*,int *,int *,int,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int *) ;

__attribute__((used)) static prof_tdata_t *
FUNC_12(tsd_t *VAR_7, uint64_t VAR_8, uint64_t VAR_9,
    char *VAR_10, bool VAR_11) {
 prof_tdata_t *VAR_12;

 FUNC_1(VAR_2);


 VAR_12 = (prof_tdata_t *)FUNC_3(FUNC_11(VAR_7), sizeof(prof_tdata_t),
     FUNC_9(sizeof(prof_tdata_t)), 0, ((void*)0), 1,
     FUNC_0(VAR_1, 0, 1), 1);
 if (VAR_12 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_12->lock = FUNC_8(VAR_8);
 VAR_12->thr_uid = VAR_8;
 VAR_12->thr_discrim = VAR_9;
 VAR_12->thread_name = VAR_10;
 VAR_12->attached = 1;
 VAR_12->expired = 0;
 VAR_12->tctx_uid_next = 0;

 if (FUNC_2(VAR_7, &VAR_12->bt2tctx, VAR_0, VAR_3,
     VAR_4)) {
  FUNC_4(FUNC_11(VAR_7), VAR_12, ((void*)0), ((void*)0), 1, 1);
  return ((void*)0);
 }

 VAR_12->prng_state = (uint64_t)(uintptr_t)VAR_12;
 FUNC_7(VAR_12);

 VAR_12->enq = 0;
 VAR_12->enq_idump = 0;
 VAR_12->enq_gdump = 0;

 VAR_12->dumping = 0;
 VAR_12->active = VAR_11;

 FUNC_5(FUNC_11(VAR_7), &VAR_6);
 FUNC_10(&VAR_5, VAR_12);
 FUNC_6(FUNC_11(VAR_7), &VAR_6);

 return VAR_12;
}
