
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {int freq; void* modes; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timex*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int* VAR_4 ;
 int FUNC_3 (struct timex*,int ,int) ;
 int* VAR_5 ;
 int FUNC_4 (char*,...) ;
 int VAR_6 ;
 int* VAR_7 ;

int FUNC_5(void)
{
 struct timex VAR_8;
 int VAR_9, VAR_10 = 0;
 int VAR_11;

 FUNC_1();

 FUNC_3(&VAR_8, 0, sizeof(struct timex));


 FUNC_4("Testing ADJ_FREQ... ");
 FUNC_2(VAR_6);
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_8.modes = VAR_0;
  VAR_8.freq = VAR_7[VAR_11];

  VAR_9 = FUNC_0(&VAR_8);
  if (VAR_9 < 0) {
   FUNC_4("[FAIL]\n");
   FUNC_4("Error: adjtimex(ADJ_FREQ, %ld - %ld ppm\n",
    VAR_7[VAR_11], VAR_7[VAR_11]>>16);
   VAR_10 = -1;
   goto out;
  }
  VAR_8.modes = 0;
  VAR_9 = FUNC_0(&VAR_8);
  if (VAR_8.freq != VAR_7[VAR_11]) {
   FUNC_4("Warning: freq value %ld not what we set it (%ld)!\n",
     VAR_8.freq, VAR_7[VAR_11]);
  }
 }
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  VAR_8.modes = VAR_0;
  VAR_8.freq = VAR_5[VAR_11];

  VAR_9 = FUNC_0(&VAR_8);
  if (VAR_9 < 0) {
   FUNC_4("[FAIL]\n");
   FUNC_4("Error: adjtimex(ADJ_FREQ, %ld - %ld ppm\n",
    VAR_5[VAR_11], VAR_5[VAR_11]>>16);
   VAR_10 = -1;
   goto out;
  }
  VAR_8.modes = 0;
  VAR_9 = FUNC_0(&VAR_8);
  if (VAR_8.freq == VAR_5[VAR_11]) {
   FUNC_4("[FAIL]\n");
   FUNC_4("ERROR: out of range value %ld actually set!\n",
     VAR_8.freq);
   VAR_10 = -1;
   goto out;
  }
 }


 if (sizeof(long) == 8) {
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
   VAR_8.modes = VAR_0;
   VAR_8.freq = VAR_4[VAR_11];
   VAR_9 = FUNC_0(&VAR_8);
   if (VAR_9 >= 0) {
    FUNC_4("[FAIL]\n");
    FUNC_4("Error: No failure on invalid ADJ_FREQUENCY %ld\n",
     VAR_4[VAR_11]);
    VAR_10 = -1;
    goto out;
   }
  }
 }

 FUNC_4("[OK]\n");
out:

 VAR_8.modes = VAR_0;
 VAR_8.freq = 0;
 VAR_9 = FUNC_0(&VAR_8);

 return VAR_10;
}
