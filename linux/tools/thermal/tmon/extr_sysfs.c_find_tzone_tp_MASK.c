
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tz_info {TYPE_1__* tp; int nr_trip_pts; } ;
struct TYPE_2__ {unsigned long temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,unsigned long*) ;
 int FUNC_4 (int ,char*,char*,...) ;

__attribute__((used)) static int FUNC_5(char *VAR_4, char *VAR_5, struct tz_info *VAR_6,
   int VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;

 if (FUNC_2(VAR_5, "trip_point") &&
  FUNC_2(VAR_5, "temp")) {



  FUNC_3(VAR_4, VAR_5, &VAR_9);
  if (VAR_9 < VAR_3) {
   VAR_6->nr_trip_pts++;

   VAR_8 = FUNC_0(VAR_5, 2, 0);
   FUNC_4(VAR_0, "tzone %s trip %d temp %lu tpnode %s",
    VAR_4, VAR_8, VAR_9, VAR_5);
   if (VAR_8 < 0 || VAR_8 >= VAR_2) {
    FUNC_4(VAR_1, "Failed to find TP inst %s\n",
     VAR_5);
    return -1;
   }
   FUNC_1(VAR_4, VAR_7, VAR_8);
   VAR_6->tp[VAR_8].temp = VAR_9;
  }
 }

 return 0;
}
