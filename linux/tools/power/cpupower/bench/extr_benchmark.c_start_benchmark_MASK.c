
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {long sleep; long load; unsigned int rounds; int cycles; char* governor; scalar_t__ load_step; scalar_t__ sleep_step; scalar_t__ verbose; int output; int cpu; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (long,struct config*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,long,...) ;
 long long FUNC_4 () ;
 int FUNC_5 (char*,long,...) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (long) ;

void FUNC_9(struct config *VAR_0)
{
 unsigned int VAR_1, VAR_2;
 long long VAR_3, VAR_4;
 long VAR_5 = 0, VAR_6 = 0;
 long VAR_7 = 0, VAR_8 = 0;
 unsigned int VAR_9;
 unsigned long VAR_10 = 0, VAR_11 = 0;

 VAR_5 = VAR_0->sleep;
 VAR_6 = VAR_0->load;


 for (VAR_1 = 1; VAR_1 <= VAR_0->rounds; VAR_1++)
  VAR_10 += VAR_1 * (VAR_0->sleep + VAR_0->load);
 VAR_10 *= 2;

 for (VAR_1 = 0; VAR_1 < VAR_0->rounds; VAR_1++) {
  VAR_7 = 0LL;
  VAR_8 = 0LL;

  FUNC_7(VAR_10, VAR_11);



  if (FUNC_6("performance", VAR_0->cpu) != 0)
   return;




  VAR_9 = FUNC_1(VAR_6, VAR_0);

  if (VAR_0->verbose)
   FUNC_5("_round %i: doing %u cycles with %u calculations"
          " for %lius\n", VAR_1 + 1, VAR_0->cycles,
          VAR_9, VAR_6);

  FUNC_3(VAR_0->output, "%ld %li %li ",
   VAR_1, VAR_6, VAR_5);

  if (VAR_0->verbose)
   FUNC_5("average: %lius, rps:%li\n",
    VAR_6 / VAR_9,
    1000000 * VAR_9 / VAR_6);


  for (VAR_2 = 0; VAR_2 < VAR_0->cycles; VAR_2++) {
   VAR_3 = FUNC_4();
   FUNC_8(VAR_5);
   FUNC_0(VAR_9);
   VAR_4 = FUNC_4();
   VAR_7 += VAR_4 - VAR_3 - VAR_5;
   if (VAR_0->verbose)
    FUNC_5("performance cycle took %lius, "
     "sleep: %lius, "
     "load: %lius, rounds: %u\n",
     (long)(VAR_4 - VAR_3), VAR_5,
     VAR_6, VAR_9);
  }
  FUNC_3(VAR_0->output, "%li ",
   VAR_7 / VAR_0->cycles);

  VAR_11 += VAR_5 + VAR_6;
  FUNC_7(VAR_10, VAR_11);



  if (FUNC_6(VAR_0->governor, VAR_0->cpu) != 0)
   return;



  for (VAR_2 = 0; VAR_2 < VAR_0->cycles; VAR_2++) {
   VAR_3 = FUNC_4();
   FUNC_8(VAR_5);
   FUNC_0(VAR_9);
   VAR_4 = FUNC_4();
   VAR_8 += VAR_4 - VAR_3 - VAR_5;
   if (VAR_0->verbose)
    FUNC_5("powersave cycle took %lius, "
     "sleep: %lius, "
     "load: %lius, rounds: %u\n",
     (long)(VAR_4 - VAR_3), VAR_5,
     VAR_6, VAR_9);
  }

  VAR_11 += VAR_5 + VAR_6;


  FUNC_3(VAR_0->output, "%li ",
   VAR_8 / VAR_0->cycles);
  FUNC_3(VAR_0->output, "%.3ld\n",
   VAR_7 * 100.0 / VAR_8);
  FUNC_2(VAR_0->output);

  if (VAR_0->verbose)
   FUNC_5("performance is at %.2f%%\n",
    VAR_7 * 100.0 / VAR_8);

  VAR_5 += VAR_0->sleep_step;
  VAR_6 += VAR_0->load_step;
 }
}
