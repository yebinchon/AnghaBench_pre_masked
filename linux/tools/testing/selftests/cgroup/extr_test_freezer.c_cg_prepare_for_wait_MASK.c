
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1)
{
 int VAR_2, VAR_3 = -1;

 VAR_2 = FUNC_4(0);
 if (VAR_2 == -1) {
  FUNC_2("Error: inotify_init1() failed\n");
  return VAR_2;
 }

 VAR_3 = FUNC_3(VAR_2, FUNC_0(VAR_1, "cgroup.events"),
    VAR_0);
 if (VAR_3 == -1) {
  FUNC_2("Error: inotify_add_watch() failed\n");
  FUNC_1(VAR_2);
 }

 return VAR_2;
}
