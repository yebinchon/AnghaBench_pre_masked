
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct TYPE_4__ {int clockid; } ;
struct restart_block {TYPE_1__ nanosleep; int fn; } ;
typedef int clockid_t ;
struct TYPE_5__ {struct restart_block restart_block; } ;


 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (int const,int,struct timespec64 const*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(const clockid_t VAR_6, int VAR_7,
       const struct timespec64 *VAR_8)
{
 struct restart_block *VAR_9 = &VAR_4->restart_block;
 int VAR_10;




 if (FUNC_0(VAR_6) &&
     (FUNC_1(VAR_6) == 0 ||
      FUNC_1(VAR_6) == FUNC_3(VAR_4)))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8);

 if (VAR_10 == -VAR_2) {

  if (VAR_7 & VAR_3)
   return -VAR_1;

  VAR_9->fn = VAR_5;
  VAR_9->nanosleep.clockid = VAR_6;
 }
 return VAR_10;
}
