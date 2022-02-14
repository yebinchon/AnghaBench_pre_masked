
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int freq; int sample_period; int inherit; int config; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct perf_event_attr*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_4(int *VAR_7, int VAR_8)
{
 int VAR_9;

 struct perf_event_attr VAR_10 = {
  .type = VAR_3,
  .freq = 1,
  .sample_period = VAR_8,
  .config = VAR_0,
  .inherit = 1,
 };

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_7[VAR_9] = FUNC_3(&VAR_10, -1 , VAR_9,
         -1 , 0 );
  if (VAR_7[VAR_9] < 0) {
   FUNC_1(VAR_6, "ERROR: Initializing perf sampling\n");
   return 1;
  }
  FUNC_0(FUNC_2(VAR_7[VAR_9], VAR_2,
        VAR_5[0]) == 0);
  FUNC_0(FUNC_2(VAR_7[VAR_9], VAR_1, 0) == 0);
 }

 return 0;
}
