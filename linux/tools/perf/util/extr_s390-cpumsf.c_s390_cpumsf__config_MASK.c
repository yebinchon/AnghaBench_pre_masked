
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct s390_cpumsf {int * logdir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,struct stat*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (int **) ;

__attribute__((used)) static int FUNC_6(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct s390_cpumsf *VAR_3 = VAR_2;
 struct stat VAR_4;
 int VAR_5;

 if (FUNC_3(VAR_0, "auxtrace.dumpdir"))
  return 0;
 VAR_3->logdir = FUNC_4(VAR_1);
 if (VAR_3->logdir == ((void*)0)) {
  FUNC_1("Failed to find auxtrace log directory %s,"
         " continue with current directory...\n", VAR_1);
  return 1;
 }
 VAR_5 = FUNC_2(VAR_3->logdir, &VAR_4);
 if (VAR_5 == -1 || !FUNC_0(VAR_4.st_mode)) {
  FUNC_1("Missing auxtrace log directory %s,"
         " continue with current directory...\n", VAR_1);
  FUNC_5(&VAR_3->logdir);
 }
 return 1;
}
