
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int activity_buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char const*,int,int,...) ;
 int FUNC_9 (int) ;
 char* FUNC_10 (int,char*,int) ;

__attribute__((used)) static void
FUNC_11(int VAR_0, const char *VAR_1, int VAR_2, int VAR_3)
{




 char VAR_4[1024];
 const char *VAR_5 = ((void*)0);

 if (!FUNC_0(VAR_3))
  VAR_5 = FUNC_10(VAR_2,
                VAR_4,
                sizeof(VAR_4));

 if (FUNC_2(VAR_3))
  FUNC_5(VAR_0,




    (FUNC_8("%s (PID %d) exited with exit code %d",
      VAR_1, VAR_2, FUNC_1(VAR_3)),
     VAR_5 ? FUNC_6("Failed process was running: %s", VAR_5) : 0));
 else if (FUNC_3(VAR_3))
 {
  FUNC_5(VAR_0,




    (FUNC_8("%s (PID %d) was terminated by signal %d: %s",
      VAR_1, VAR_2, FUNC_4(VAR_3),
      FUNC_9(FUNC_4(VAR_3))),
     VAR_5 ? FUNC_6("Failed process was running: %s", VAR_5) : 0));

 }
 else
  FUNC_5(VAR_0,




    (FUNC_8("%s (PID %d) exited with unrecognized status %d",
      VAR_1, VAR_2, VAR_3),
     VAR_5 ? FUNC_6("Failed process was running: %s", VAR_5) : 0));
}
