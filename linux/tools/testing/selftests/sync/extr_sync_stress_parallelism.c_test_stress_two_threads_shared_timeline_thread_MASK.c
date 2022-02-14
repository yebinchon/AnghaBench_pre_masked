
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeline; int iterations; int counter; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_6(void *VAR_1)
{
 int VAR_2 = (long)VAR_1;
 int VAR_3 = VAR_0.timeline;
 int VAR_4 = VAR_0.iterations;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_5 = FUNC_1(VAR_3, "fence",
          VAR_8 * 2 + VAR_2);
  VAR_6 = FUNC_3(VAR_5);
  FUNC_0(VAR_6, "Failure allocating fence\n");


  VAR_7 = FUNC_5(VAR_5, -1);
  FUNC_0(VAR_7 > 0, "Problem occurred on prior thread\n");





  FUNC_0(VAR_0.counter == VAR_8 * 2 + VAR_2,
         "Counter got damaged!\n");
  VAR_0.counter++;


  VAR_7 = FUNC_4(VAR_3, 1);
  FUNC_0(VAR_7 == 0, "Advancing timeline failed\n");

  FUNC_2(VAR_5);
 }

 return 0;
}
