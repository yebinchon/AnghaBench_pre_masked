
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_uid; scalar_t__ st_size; } ;
struct perf_config_set {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ,char*,struct perf_config_set*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 char* FUNC_8 () ;
 int FUNC_9 (char*,char const*) ;
 scalar_t__ FUNC_10 (char*,struct stat*) ;
 char* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct perf_config_set *VAR_5)
{
 int VAR_6 = -1;
 const char *VAR_7 = ((void*)0);
 char *VAR_8;
 struct stat VAR_9;


 if (VAR_3)
  return FUNC_5(VAR_2, VAR_3, VAR_5);
 if (FUNC_7() && !FUNC_0(FUNC_8(), VAR_1)) {
  if (FUNC_5(VAR_2, FUNC_8(), VAR_5) < 0)
   goto out;
 }

 VAR_7 = FUNC_2("HOME");






 if (!VAR_7 || !*VAR_7 || !FUNC_6())
  return 0;

 VAR_8 = FUNC_11(FUNC_4("%s/.perfconfig", VAR_7));
 if (VAR_8 == ((void*)0)) {
  FUNC_9("Not enough memory to process %s/.perfconfig, ignoring it.", VAR_7);
  goto out;
 }

 if (FUNC_10(VAR_8, &VAR_9) < 0) {
  if (VAR_4 == VAR_0)
   VAR_6 = 0;
  goto out_free;
 }

 VAR_6 = 0;

 if (VAR_9.st_uid && (VAR_9.st_uid != FUNC_3())) {
  FUNC_9("File %s not owned by current user or root, ignoring it.", VAR_8);
  goto out_free;
 }

 if (VAR_9.st_size)
  VAR_6 = FUNC_5(VAR_2, VAR_8, VAR_5);

out_free:
 FUNC_1(VAR_8);
out:
 return VAR_6;
}
