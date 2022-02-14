
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_5__ {int mult; } ;
struct TYPE_4__ {int mult; } ;
struct timekeeper {TYPE_2__ tkr_raw; TYPE_1__ tkr_mono; } ;
struct system_time_snapshot {int real; int raw; } ;
struct system_device_crosststamp {void* sys_realtime; void* sys_monoraw; } ;
struct TYPE_6__ {struct timekeeper timekeeper; } ;


 void* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (void*,int ) ;
 void* FUNC_2 (void*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__*) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static int FUNC_6(struct system_time_snapshot *VAR_1,
      u64 VAR_2,
      u64 VAR_3,
      bool VAR_4,
      struct system_device_crosststamp *VAR_5)
{
 struct timekeeper *VAR_6 = &VAR_0.timekeeper;
 u64 VAR_7, VAR_8;
 bool VAR_9;
 int VAR_10;

 if (VAR_3 == 0 || VAR_2 == 0)
  return 0;


 VAR_9 = VAR_2 > VAR_3 / 2;
 VAR_2 = VAR_9 ?
  VAR_3 - VAR_2 :
  VAR_2;





 VAR_7 = (u64)FUNC_3(
  FUNC_1(VAR_5->sys_monoraw, VAR_1->raw));
 VAR_10 = FUNC_5(VAR_2,
         VAR_3, &VAR_7);
 if (VAR_10)
  return VAR_10;
 if (VAR_4) {
  VAR_8 = FUNC_4
   (VAR_7, VAR_6->tkr_mono.mult, VAR_6->tkr_raw.mult);
 } else {
  VAR_8 = (u64)FUNC_3(
   FUNC_1(VAR_5->sys_realtime, VAR_1->real));
  VAR_10 = FUNC_5(VAR_2,
          VAR_3, &VAR_8);
  if (VAR_10)
   return VAR_10;
 }


 if (VAR_9) {
  VAR_5->sys_monoraw = FUNC_0(VAR_1->raw, VAR_7);
  VAR_5->sys_realtime = FUNC_0(VAR_1->real, VAR_8);
 } else {
  VAR_5->sys_monoraw = FUNC_2(VAR_5->sys_monoraw, VAR_7);
  VAR_5->sys_realtime = FUNC_2(VAR_5->sys_realtime, VAR_8);
 }

 return 0;
}
