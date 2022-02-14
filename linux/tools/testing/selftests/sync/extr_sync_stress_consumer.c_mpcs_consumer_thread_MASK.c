
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* producer_timelines; int consumer_timeline; int iterations; int threads; int counter; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (char*,int,int) ;
 scalar_t__ FUNC_7 (int,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 int *VAR_7 = VAR_0.producer_timelines;
 int VAR_8 = VAR_0.consumer_timeline;
 int VAR_9 = VAR_0.iterations;
 int VAR_10 = VAR_0.threads;

 for (VAR_5 = 1; VAR_5 <= VAR_9; VAR_5++) {
  VAR_1 = FUNC_2(VAR_7[0], "name", VAR_5);
  for (VAR_6 = 1; VAR_6 < VAR_10; VAR_6++) {
   VAR_3 = FUNC_2(VAR_7[VAR_6],
         "name", VAR_5);
   VAR_2 = FUNC_6("name", VAR_3, VAR_1);
   FUNC_3(VAR_3);
   FUNC_3(VAR_1);
   VAR_1 = VAR_2;
  }

  VAR_4 = FUNC_4(VAR_1);
  FUNC_0(VAR_4, "Failure merging fences\n");





  if (VAR_9 % 8 != 0) {
   FUNC_0(FUNC_7(VAR_1, -1) > 0,
          "Producers did not increment as expected\n");
  } else {
   FUNC_0(FUNC_1(VAR_1) == 0,
          "Producers did not increment as expected\n");
  }

  FUNC_0(VAR_0.counter == VAR_10 * VAR_5,
         "Counter value mismatch!\n");


  FUNC_0(FUNC_5(VAR_8, 1) == 0,
         "Failure releasing producer threads\n");

  FUNC_3(VAR_1);
 }

 return 0;
}
