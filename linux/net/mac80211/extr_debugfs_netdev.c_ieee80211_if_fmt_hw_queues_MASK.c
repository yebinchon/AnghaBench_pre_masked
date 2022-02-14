
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int cab_queue; int * hw_queue; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int,char*,int ,...) ;

__attribute__((used)) static ssize_t
FUNC_1(const struct ieee80211_sub_if_data *VAR_5,
      char *VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_7, "AC queues: VO:%d VI:%d BE:%d BK:%d\n",
   VAR_5->vif.hw_queue[VAR_3],
   VAR_5->vif.hw_queue[VAR_2],
   VAR_5->vif.hw_queue[VAR_0],
   VAR_5->vif.hw_queue[VAR_1]);

 if (VAR_5->vif.type == VAR_4)
  VAR_8 += FUNC_0(VAR_6 + VAR_8, VAR_7 - VAR_8, "cab queue: %d\n",
     VAR_5->vif.cab_queue);

 return VAR_8;
}
