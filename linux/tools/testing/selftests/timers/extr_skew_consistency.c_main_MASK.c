
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {int freq; scalar_t__ offset; void* modes; } ;
typedef scalar_t__ pid_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timex*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__,int*,int ) ;

int FUNC_8(int VAR_2, char **VAR_3)
{
 struct timex VAR_4;
 int VAR_5, VAR_6;
 pid_t VAR_7;


 FUNC_4("Running Asynchronous Frequency Changing Tests...\n");

 VAR_7 = FUNC_1();
 if (!VAR_7)
  return FUNC_5("./inconsistency-check -c 1 -t 600");

 VAR_6 = 500;
 VAR_5 = 0;

 while (VAR_7 != FUNC_7(VAR_7, &VAR_5, VAR_1)) {
  VAR_6 = -VAR_6;
  VAR_4.modes = VAR_0;
  VAR_4.freq = VAR_6 << 16;
  FUNC_0(&VAR_4);
  FUNC_6(500000);
 }


 VAR_4.modes = VAR_0;
 VAR_4.offset = 0;
 FUNC_0(&VAR_4);


 if (VAR_5) {
  FUNC_4("[FAILED]\n");
  return FUNC_2();
 }
 FUNC_4("[OK]\n");
 return FUNC_3();
}
