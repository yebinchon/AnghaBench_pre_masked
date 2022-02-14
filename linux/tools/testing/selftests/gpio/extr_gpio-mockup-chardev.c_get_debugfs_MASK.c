
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libmnt_table {int dummy; } ;
struct libmnt_iter {int dummy; } ;
struct libmnt_fs {int dummy; } ;
struct libmnt_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct libmnt_context*,struct libmnt_table**) ;
 int FUNC_3 (struct libmnt_context*) ;
 int FUNC_4 (struct libmnt_iter*) ;
 char* FUNC_5 (struct libmnt_fs*) ;
 int FUNC_6 (struct libmnt_fs*) ;
 struct libmnt_context* FUNC_7 () ;
 struct libmnt_iter* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct libmnt_table*,struct libmnt_iter*,struct libmnt_fs**) ;
 int FUNC_10 (char const*,char*) ;

__attribute__((used)) static int FUNC_11(char **VAR_2)
{
 struct libmnt_context *VAR_3;
 struct libmnt_table *VAR_4;
 struct libmnt_iter *VAR_5 = ((void*)0);
 struct libmnt_fs *VAR_6;
 int VAR_7 = 0, VAR_8;

 VAR_3 = FUNC_7();
 if (!VAR_3)
  FUNC_1(VAR_0, "libmount context allocation failed");

 VAR_5 = FUNC_8(VAR_1);
 if (!VAR_5)
  FUNC_1(VAR_0, "failed to initialize libmount iterator");

 if (FUNC_2(VAR_3, &VAR_4))
  FUNC_1(VAR_0, "failed to read mtab");

 while (FUNC_9(VAR_4, VAR_5, &VAR_6) == 0) {
  const char *VAR_9 = FUNC_5(VAR_6);

  if (!FUNC_10(VAR_9, "debugfs")) {
   VAR_7 = 1;
   break;
  }
 }
 if (VAR_7) {
  VAR_8 = FUNC_0(VAR_2, "%d/gpio", FUNC_6(VAR_6));
  if (VAR_8 < 0)
   FUNC_1(VAR_0, "failed to format string");
 }

 FUNC_4(VAR_5);
 FUNC_3(VAR_3);

 if (!VAR_7)
  return -1;

 return 0;
}
