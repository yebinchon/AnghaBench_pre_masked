
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct event {int fd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct event*) ;
 int FUNC_2 (struct event*,int,int ,int) ;
 int FUNC_3 (struct event*) ;
 scalar_t__ FUNC_4 (struct event*) ;
 scalar_t__ FUNC_5 (struct event*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct event*,int ,char*) ;

__attribute__((used)) static int FUNC_9(void)
{
 struct event VAR_2[2];
 u64 VAR_3;

 FUNC_8(&VAR_2[0], VAR_1, "instructions");
 FUNC_8(&VAR_2[1], VAR_0, "cycles");

 if (FUNC_4(&VAR_2[0])) {
  FUNC_6("perf_event_open");
  return -1;
 }

 if (FUNC_5(&VAR_2[1], VAR_2[0].fd)) {
  FUNC_6("perf_event_open");
  return -1;
 }

 VAR_3 = FUNC_1(VAR_2);
 FUNC_7("Overhead of null loop: %llu instructions\n", VAR_3);


 FUNC_0(FUNC_2(VAR_2, 1000000, VAR_3, 1));


 FUNC_0(FUNC_2(VAR_2, 10000000, VAR_3, 1));


 FUNC_0(FUNC_2(VAR_2, 100000000, VAR_3, 1));


 FUNC_0(FUNC_2(VAR_2, 1000000000, VAR_3, 1));


 FUNC_0(FUNC_2(VAR_2, 16000000000, VAR_3, 1));


 FUNC_0(FUNC_2(VAR_2, 64000000000, VAR_3, 1));

 FUNC_3(&VAR_2[0]);
 FUNC_3(&VAR_2[1]);

 return 0;
}
