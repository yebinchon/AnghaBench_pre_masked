
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct vdso_timestamp {int nsec; scalar_t__ sec; } ;
struct vdso_data {struct vdso_timestamp* basetime; void* clock_mode; } ;
struct TYPE_4__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {int xtime_nsec; int shift; } ;
struct timekeeper {TYPE_2__ wall_to_monotonic; TYPE_1__ tkr_mono; scalar_t__ xtime_sec; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct timekeeper*) ;
 struct vdso_data* FUNC_1 () ;
 int FUNC_2 (struct vdso_data*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct vdso_data*,struct timekeeper*) ;
 scalar_t__ FUNC_5 (int,int ,int*) ;
 int FUNC_6 (struct vdso_data*,struct timekeeper*) ;
 int FUNC_7 (struct vdso_data*) ;
 int FUNC_8 (struct vdso_data*) ;

void FUNC_9(struct timekeeper *VAR_5)
{
 struct vdso_data *VAR_6 = FUNC_1();
 struct vdso_timestamp *VAR_7;
 u64 VAR_8;

 if (FUNC_3()) {




  return;
 }


 FUNC_7(VAR_6);

 VAR_6[VAR_2].clock_mode = FUNC_0(VAR_5);
 VAR_6[VAR_3].clock_mode = FUNC_0(VAR_5);


 VAR_7 = &VAR_6[VAR_2].basetime[VAR_1];
 VAR_7->sec = VAR_5->xtime_sec;
 VAR_7->nsec = VAR_5->tkr_mono.xtime_nsec >> VAR_5->tkr_mono.shift;


 VAR_7 = &VAR_6[VAR_2].basetime[VAR_0];
 VAR_7->sec = VAR_5->xtime_sec + VAR_5->wall_to_monotonic.tv_sec;
 VAR_8 = VAR_5->tkr_mono.xtime_nsec >> VAR_5->tkr_mono.shift;
 VAR_8 = VAR_8 + VAR_5->wall_to_monotonic.tv_nsec;
 VAR_7->sec += FUNC_5(VAR_8, VAR_4, &VAR_7->nsec);

 FUNC_6(VAR_6, VAR_5);

 FUNC_4(VAR_6, VAR_5);

 FUNC_8(VAR_6);

 FUNC_2(VAR_6);
}
