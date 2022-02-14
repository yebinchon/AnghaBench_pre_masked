
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* producer_timelines; int consumer_timeline; int iterations; int lock; int counter; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_9(void *VAR_1)
{
 int VAR_2 = (long)VAR_1;
 int VAR_3, VAR_4, VAR_5;
 int *VAR_6 = VAR_0.producer_timelines;
 int VAR_7 = VAR_0.consumer_timeline;
 int VAR_8 = VAR_0.iterations;

 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  VAR_3 = FUNC_4(VAR_7, "fence", VAR_5);
  VAR_4 = FUNC_6(VAR_3);
  FUNC_0(VAR_4, "Failure creating fence\n");






  if ((VAR_8 + VAR_2) % 8 != 0) {
   FUNC_0(FUNC_8(VAR_3, -1) > 0,
          "Failure waiting on fence\n");
  } else {
   FUNC_0(FUNC_1(VAR_3) == 0,
          "Failure waiting on fence\n");
  }





  FUNC_2(&VAR_0.lock);
  VAR_0.counter++;
  FUNC_3(&VAR_0.lock);

  FUNC_0(FUNC_7(VAR_6[VAR_2], 1) == 0,
         "Error advancing producer timeline\n");

  FUNC_5(VAR_3);
 }

 return 0;
}
