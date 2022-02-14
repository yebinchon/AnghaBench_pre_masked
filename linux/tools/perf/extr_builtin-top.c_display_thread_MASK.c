
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;
struct pollfd {int events; int fd; } ;
struct perf_top {int delay_secs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct perf_top*,int) ;
 int FUNC_3 (struct perf_top*) ;
 int FUNC_4 (struct pollfd*,int,int) ;
 int FUNC_5 (int ,char*,int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct termios*) ;
 int VAR_9 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,struct termios*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void *FUNC_11(void *VAR_10)
{
 struct pollfd VAR_11 = { .fd = 0, .events = VAR_3 };
 struct termios VAR_12;
 struct perf_top *VAR_13 = VAR_10;
 int VAR_14, VAR_15;






 FUNC_10(VAR_0);

 FUNC_5(VAR_4, "perf-top-UI", 0, 0, 0);

 FUNC_0();
 FUNC_6();
repeat:
 VAR_14 = VAR_13->delay_secs * VAR_2;
 FUNC_7(&VAR_12);

 FUNC_1(VAR_9);

 while (!VAR_7) {
  FUNC_3(VAR_13);




  switch (FUNC_4(&VAR_11, 1, VAR_14)) {
  case 0:
   continue;
  case -1:
   if (VAR_8 == VAR_1)
    continue;
   VAR_6;
  default:
   VAR_15 = FUNC_1(VAR_9);
   FUNC_9(0, VAR_5, &VAR_12);

   if (FUNC_2(VAR_13, VAR_15))
    goto repeat;
   FUNC_8();
  }
 }

 FUNC_9(0, VAR_5, &VAR_12);
 return ((void*)0);
}
