
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct evlist_test {char* name; int check; int id; } ;
struct dirent {char* d_name; } ;
typedef int name ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 struct dirent* FUNC_3 (int *) ;
 int FUNC_4 (char*,int,char*,char*,...) ;
 int FUNC_5 (char*,struct stat*) ;
 scalar_t__ FUNC_6 (char*,char) ;
 char* FUNC_7 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct evlist_test*) ;

__attribute__((used)) static int FUNC_9(void)
{
 struct stat VAR_4;
 char VAR_5[VAR_1];
 struct dirent *VAR_6;
 DIR *VAR_7;
 int VAR_8;

 FUNC_4(VAR_5, VAR_1, "%s/bus/event_source/devices/cpu/events/",
   FUNC_7());

 VAR_8 = FUNC_5(VAR_5, &VAR_4);
 if (VAR_8) {
  FUNC_2("omitting PMU cpu events tests\n");
  return 0;
 }

 VAR_7 = FUNC_1(VAR_5);
 if (!VAR_7) {
  FUNC_2("can't open pmu event dir");
  return -1;
 }

 while (!VAR_8 && (VAR_6 = FUNC_3(VAR_7))) {
  struct evlist_test VAR_9 = { .id = 0, };
  char VAR_10[2 * VAR_0 + 1 + 12 + 3];


  if (FUNC_6(VAR_6->d_name, '.'))
   continue;

  FUNC_4(VAR_10, sizeof(VAR_10), "cpu/event=%s/u", VAR_6->d_name);

  VAR_9.name = VAR_10;
  VAR_9.check = VAR_2;

  VAR_8 = FUNC_8(&VAR_9);
  if (VAR_8)
   break;
  FUNC_4(VAR_10, sizeof(VAR_10), "%s:u,cpu/event=%s/u", VAR_6->d_name, VAR_6->d_name);
  VAR_9.name = VAR_10;
  VAR_9.check = VAR_3;
  VAR_8 = FUNC_8(&VAR_9);
 }

 FUNC_0(VAR_7);
 return VAR_8;
}
