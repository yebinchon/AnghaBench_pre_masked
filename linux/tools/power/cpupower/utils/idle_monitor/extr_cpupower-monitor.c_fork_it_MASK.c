
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
typedef int pid_t ;
struct TYPE_2__ {int (* stop ) () ;int (* start ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 unsigned int VAR_4 ;
 int FUNC_3 (int ,struct timespec*) ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 TYPE_1__** VAR_5 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,unsigned long long,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 unsigned long long FUNC_12 (struct timespec,struct timespec) ;
 int FUNC_13 (int,int*,int ) ;

int FUNC_14(char **VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;
 unsigned long long VAR_9;
 pid_t VAR_10;
 struct timespec VAR_11, VAR_12;

 VAR_10 = FUNC_6();
 FUNC_3(VAR_0, &VAR_11);

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_5[VAR_8]->start();

 if (!VAR_10) {

  FUNC_4(VAR_6[0], VAR_6);
 } else {

  if (VAR_10 == -1) {
   FUNC_7("fork");
   FUNC_5(1);
  }

  FUNC_9(VAR_1, VAR_3);
  FUNC_9(VAR_2, VAR_3);
  if (FUNC_13(VAR_10, &VAR_7, 0) == -1) {
   FUNC_7("wait");
   FUNC_5(1);
  }
 }
 FUNC_3(VAR_0, &VAR_12);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_5[VAR_8]->stop();

 VAR_9 = FUNC_12(VAR_11, VAR_12);
 if (FUNC_1(VAR_7))
  FUNC_8(FUNC_2("%s took %.5f seconds and exited with status %d\n"),
   VAR_6[0], VAR_9 / (1000.0 * 1000),
   FUNC_0(VAR_7));
 return 0;
}
