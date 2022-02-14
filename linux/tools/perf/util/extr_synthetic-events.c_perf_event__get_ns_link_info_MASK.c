
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat64 {int st_ino; int st_dev; } ;
struct perf_ns_link_info {int ino; int dev; } ;
typedef int pid_t ;


 int FUNC_0 (char*,char*,int,char const*) ;
 scalar_t__ FUNC_1 (char*,struct stat64*) ;

__attribute__((used)) static void FUNC_2(pid_t VAR_0, const char *VAR_1,
      struct perf_ns_link_info *VAR_2)
{
 struct stat64 VAR_3;
 char VAR_4[128];

 FUNC_0(VAR_4, "/proc/%u/ns/%s", VAR_0, VAR_1);
 if (FUNC_1(VAR_4, &VAR_3) == 0) {
  VAR_2->dev = VAR_3.st_dev;
  VAR_2->ino = VAR_3.st_ino;
 }
}
