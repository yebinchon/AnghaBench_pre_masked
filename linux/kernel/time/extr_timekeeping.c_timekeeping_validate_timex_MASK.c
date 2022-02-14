
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_usec; } ;
struct __kernel_timex {int modes; int tick; int freq; TYPE_1__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct __kernel_timex *VAR_17)
{
 if (VAR_17->modes & VAR_0) {

  if (!(VAR_17->modes & VAR_4))
   return -VAR_9;
  if (!(VAR_17->modes & VAR_3) &&
      !FUNC_0(VAR_8))
   return -VAR_10;
 } else {

  if (VAR_17->modes && !FUNC_0(VAR_8))
   return -VAR_10;




  if (VAR_17->modes & VAR_6 &&
      (VAR_17->tick < 900000/VAR_16 ||
       VAR_17->tick > 1100000/VAR_16))
   return -VAR_9;
 }

 if (VAR_17->modes & VAR_5) {

  if (!FUNC_0(VAR_8))
   return -VAR_10;
  if (VAR_17->time.tv_usec < 0)
   return -VAR_9;

  if (VAR_17->modes & VAR_2) {
   if (VAR_17->time.tv_usec >= VAR_13)
    return -VAR_9;
  } else {
   if (VAR_17->time.tv_usec >= VAR_15)
    return -VAR_9;
  }
 }





 if ((VAR_17->modes & VAR_1) && (VAR_7 == 64)) {
  if (VAR_12 / VAR_14 > VAR_17->freq)
   return -VAR_9;
  if (VAR_11 / VAR_14 < VAR_17->freq)
   return -VAR_9;
 }

 return 0;
}
