
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_6__ {scalar_t__ expiry_time; scalar_t__ flags; } ;
struct unix_gid {TYPE_3__* gi; TYPE_1__ h; int uid; } ;
struct cache_head {int dummy; } ;
struct cache_detail {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_7__ {int * gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cache_head*,struct cache_detail*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char**) ;
 int FUNC_3 (char**,int*) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_3__*) ;
 struct cache_head* FUNC_10 (struct cache_detail*,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_11 (int ) ;
 struct unix_gid* FUNC_12 (struct cache_detail*,int ) ;

__attribute__((used)) static int FUNC_13(struct cache_detail *VAR_2,
   char *VAR_3, int VAR_4)
{

 int VAR_5;
 kuid_t VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 time_t VAR_11;
 struct unix_gid VAR_12, *VAR_13;

 if (VAR_3[VAR_4 - 1] != '\n')
  return -VAR_0;
 VAR_3[VAR_4-1] = 0;

 VAR_8 = FUNC_3(&VAR_3, &VAR_5);
 if (VAR_8)
  return -VAR_0;
 VAR_6 = FUNC_8(FUNC_1(), VAR_5);
 VAR_12.uid = VAR_6;

 VAR_11 = FUNC_2(&VAR_3);
 if (VAR_11 == 0)
  return -VAR_0;

 VAR_8 = FUNC_3(&VAR_3, &VAR_7);
 if (VAR_8 || VAR_7 < 0 || VAR_7 > 8192)
  return -VAR_0;

 VAR_12.gi = FUNC_5(VAR_7);
 if (!VAR_12.gi)
  return -VAR_1;

 for (VAR_9 = 0 ; VAR_9 < VAR_7 ; VAR_9++) {
  int VAR_14;
  kgid_t VAR_15;
  VAR_8 = FUNC_3(&VAR_3, &VAR_14);
  VAR_10 = -VAR_0;
  if (VAR_8)
   goto out;
  VAR_15 = FUNC_7(FUNC_1(), VAR_14);
  if (!FUNC_4(VAR_15))
   goto out;
  VAR_12.gi->gid[VAR_9] = VAR_15;
 }

 FUNC_6(VAR_12.gi);
 VAR_13 = FUNC_12(VAR_2, VAR_6);
 if (VAR_13) {
  struct cache_head *VAR_16;
  VAR_12.h.flags = 0;
  VAR_12.h.expiry_time = VAR_11;
  VAR_16 = FUNC_10(VAR_2,
      &VAR_12.h, &VAR_13->h,
      FUNC_11(VAR_6));
  if (!VAR_16)
   VAR_10 = -VAR_1;
  else {
   VAR_10 = 0;
   FUNC_0(VAR_16, VAR_2);
  }
 } else
  VAR_10 = -VAR_1;
 out:
 if (VAR_12.gi)
  FUNC_9(VAR_12.gi);
 return VAR_10;
}
